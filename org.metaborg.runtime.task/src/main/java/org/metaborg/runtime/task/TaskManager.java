package org.metaborg.runtime.task;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.lang.ref.WeakReference;
import java.net.URI;
import java.util.HashMap;
import java.util.Map;

import org.metaborg.runtime.task.digest.ITermDigester;
import org.metaborg.runtime.task.digest.NonDeterministicCountingTermDigester;
import org.spoofax.interpreter.library.IOAgent;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.ITermFactory;
import org.spoofax.terms.io.binary.SAFWriter;
import org.spoofax.terms.io.binary.TermReader;

public class TaskManager {
	private static final TaskManager INSTANCE = new TaskManager();
	private static final Map<URI, WeakReference<ITaskEngine>> taskEngineCache =
		new HashMap<URI, WeakReference<ITaskEngine>>();
	private final static TaskEngineFactory taskEngineFactory = new TaskEngineFactory();
	private final static ITermDigester digester = new NonDeterministicCountingTermDigester();

	private final ThreadLocal<ITaskEngine> current = new ThreadLocal<ITaskEngine>();
	private final ThreadLocal<URI> currentProject = new ThreadLocal<URI>();

	private TaskManager() {
		// use getInstance()
	}

	public static TaskManager getInstance() {
		return INSTANCE;
	}

	public ITaskEngine getCurrent() {
		ensureInitialized();
		return current.get();
	}

	public boolean isInitialized() {
		return current.get() != null;
	}

	private void ensureInitialized() {
		if(!isInitialized())
			throw new IllegalStateException(
				"Task engine has not been set-up, use task-setup(|project-path) to set up the task system before use.");
	}

	public ITaskEngine pushTaskEngine(ITermFactory factory) {
		final ITaskEngine currentTaskEngine = current.get();
		final ITaskEngine newTaskEngine = createTaskEngine(currentTaskEngine, factory);
		current.set(newTaskEngine);
		return newTaskEngine;
	}

	public ITaskEngine popTaskEngine() {
		final ITaskEngine currentTaskEngine = current.get();
		final ITaskEngine parentTaskEngine = currentTaskEngine.getParent();
		if(parentTaskEngine == null || parentTaskEngine instanceof EmptyTaskEngine)
			throw new RuntimeException("Cannot pop the root TaskEngine.");
		current.set(parentTaskEngine);
		return parentTaskEngine;
	}

	public ITaskEngine mergeTaskEngine(ITermFactory factory) {
		final ITaskEngine currentTaskEngine = current.get();
		final ITaskEngine parentTaskEngine = currentTaskEngine.getParent();
		if(parentTaskEngine == null || parentTaskEngine instanceof EmptyTaskEngine)
			throw new RuntimeException("Cannot merge the root TaskEngine.");

		for(IStrategoTerm taskID : currentTaskEngine.getRemovedTasks())
			parentTaskEngine.removeTask(taskID);
		
		// Serialize current task engine into parent task engine.
		final IStrategoTerm currentSerialized = taskEngineFactory.toTerm(currentTaskEngine, factory);
		taskEngineFactory.fromTerms(parentTaskEngine, currentSerialized, factory);
		
		// TODO: what about tasks that have changes, like more reads or dependencies?

		current.set(parentTaskEngine);
		return parentTaskEngine;
	}

	public ITaskEngine createTaskEngine(ITermFactory factory) {
		final TaskEngine taskEngine = new TaskEngine(createEmptyTaskEngine(), factory, digester);
		taskEngine.setEvaluator(new TaskEvaluator(taskEngine, factory));
		return taskEngine;
	}

	public ITaskEngine createTaskEngine(ITaskEngine parent, ITermFactory factory) {
		final TaskEngine taskEngine = new TaskEngine(parent, factory, digester);
		taskEngine.setEvaluator(new TaskEvaluator(taskEngine, factory));
		return taskEngine;
	}

	public ITaskEngine createEmptyTaskEngine() {
		return new EmptyTaskEngine();
	}

	public ITaskEngine getTaskEngine(String absoluteProjectPath) {
		URI project = getProjectURIFromAbsolute(absoluteProjectPath);
		WeakReference<ITaskEngine> taskEngineRef = taskEngineCache.get(project);
		ITaskEngine taskEngine = taskEngineRef == null ? null : taskEngineRef.get();
		return taskEngine;
	}

	public ITaskEngine loadTaskEngine(String projectPath, ITermFactory factory, IOAgent agent) {
		URI project = getProjectURI(projectPath, agent);
		synchronized(TaskManager.class) {
			WeakReference<ITaskEngine> taskEngineRef = taskEngineCache.get(project);
			ITaskEngine taskEngine = taskEngineRef == null ? null : taskEngineRef.get();
			if(taskEngine == null) {
				File taskEngineFile = getFile(project);
				if(taskEngineFile.exists())
					taskEngine = tryReadFromFile(taskEngineFile, factory);
			}
			if(taskEngine == null) {
				taskEngine = createTaskEngine(factory);
			}
			taskEngineCache.put(project, new WeakReference<ITaskEngine>(taskEngine));
			current.set(taskEngine);
			currentProject.set(project);
			return taskEngine;
		}
	}

	public void unloadTaskEngine(String removedProjectPath, IOAgent agent) {
		URI removedProject = getProjectURI(removedProjectPath, agent);
		synchronized(TaskManager.class) {
			WeakReference<ITaskEngine> removedTaskEngine = taskEngineCache.remove(removedProject);

			ITaskEngine taskEngine = current.get();
			if(taskEngine != null && taskEngine == removedTaskEngine.get()) {
				current.set(null);
			}

			URI project = currentProject.get();
			if(project != null && project.equals(removedProject)) {
				currentProject.set(null);
			}
		}
	}

	private URI getProjectURI(String projectPath, IOAgent agent) {
		File file = new File(projectPath);
		if(!file.isAbsolute())
			file = new File(agent.getWorkingDir(), projectPath);
		return file.toURI();
	}

	private URI getProjectURIFromAbsolute(String projectPath) {
		File file = new File(projectPath);
		if(!file.isAbsolute())
			throw new RuntimeException("Project path is not absolute.");
		return file.toURI();
	}

	public ITaskEngine tryReadFromFile(File file, ITermFactory factory) {
		try {
			ITaskEngine taskEngine = createTaskEngine(factory);
			IStrategoTerm tasks = new TermReader(factory).parseFromFile(file.toString());
			return taskEngineFactory.fromTerms(taskEngine, tasks, factory);
		} catch(Exception e) {
			if(!file.delete())
				throw new RuntimeException("Failed to load task engine from " + file.getName()
					+ ". The file could not be deleted, please manually delete the file and restart analysis.", e);
			else
				throw new RuntimeException("Failed to load task engine from " + file.getName()
					+ ". The file has been deleted, a new task engine will be created on the next analysis.", e);
		}
	}

	public void storeCurrent(ITermFactory factory) throws IOException {
		File file = getFile(currentProject.get());
		IStrategoTerm tasks = taskEngineFactory.toTerm(getCurrent(), factory);
		file.createNewFile();
		FileOutputStream fos = new FileOutputStream(file);
		try {
			SAFWriter.writeTermToSAFStream(tasks, fos);
			fos.flush();
		} finally {
			fos.close();
		}
	}

	private File getFile(URI project) {
		File container = new File(new File(project), ".cache");
		container.mkdirs();
		return new File(container, "taskengine.idx");
	}
}
