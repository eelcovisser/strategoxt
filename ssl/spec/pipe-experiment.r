module pipe-experiment
imports lib pipe
strategies 

//---------------------------------------------------------------

  main'' =
    <write-to-prog(!"term-size", ![])> "A"#(["B"#([])])

  main'' =
    read-from-prog(!"term-size", !["-i", "verbose.rtree"])

  main'' =
    <ReadFromFile> "verbose.rtree"
    ; filter-with-prog(!"term-size", ![])
    ; debug(!"size: ")

  main'' =
    <ReadFromFile> "verbose.rtree"
    ; filter-with-prog'(!"term-size", ![])
    ; debug(!"size: ")

  main'' =
    <ReadFromFile> "verbose.rtree"
    ; filter-with-progs(![("term-size", [])])
    ; debug(!"size: ")

  main'' = 
    setup-filter-pipe
    ; debug(!"a: ")
    ; spawn-filter-with-prog(!"implode-asfix", ![])
    ; debug(!"b: ")
    ; spawn-filter-with-prog(!"stratego-desugar", ![])
    ; debug(!"c: ")
    ; pipe-sink(!"term-size", !["-o", "verbose.size"])
    ; debug(!"d: ")
    ; pipe-source(!"sglr", 
	!["-p", "/home/visser/res/Stratego/share/stratego-front/Stratego.tbl",
	  "-2", "-i", "verbose.r"])
    ; debug(!"e: ")
    // ; map(waitpid; (exited + signaled + stopped))
    ; debug(!"f: ")

  main = 
    setup-filter-pipe
    ; debug(!"a: ")
    ; spawn-filter-with-prog(!"sglr", 
	!["-p", "/home/visser/res/Stratego/share/stratego-front/Stratego.tbl",
	  "-2"])
    //; spawn-filter-with-prog(!"implode-asfix", ![])
    ; debug(!"b: ")
    //; spawn-filter-with-prog(!"stratego-desugar", ![])
    ; debug(!"c: ")
    ; pipe-sink(!"term-size", !["-o", "verbose.size"])
    ; debug(!"d: ")
    ; pipe-source(!"cat", !["verbose.r"])
    ; debug(!"e: ")
    // ; map(waitpid; (exited + signaled + stopped))
    ; debug(!"f: ")

  main'' =  
    setup-filter-pipe
    ; debug(!"a: ")
    ; pipe-sink(!"implode-asfix", !["-o", "verbose.ast"])
    ; debug(!"b: ")
    //; spawn-filter-with-prog(!"stratego-desugar", ![])
    ; debug(!"c: ")
    //; pipe-sink(!"term-size", !["-o", "verbose.size"])
    ; debug(!"d: ")
    ; pipe-source(!"sglr", 
	!["-p", "/home/visser/res/Stratego/share/stratego-front/Stratego.tbl",
	  "-2", "-i", "verbose.r"])
    ; debug(!"e: ")


/*
overlays
    StrategoTbl = "/home/visser/res/Stratego/share/stratego-front/Stratego.tbl"

strategies

  parse-stratego = 
    setup-filter-pipe
    ; spawn-filter-with-prog(!"sglr", !["-p", StrategoTbl, "-2"])
    ; spawn-filter-with-prog(!"implode-asfix", ![])
    ; spawn-filter-with-prog(!"stratego-desugar", ![])


  parse-stratego = 
    from-file(!"bla.r"
    , pipe-comm(!"sglr", !["-p", StrategoTbl, "-2"]
    , pipe-comm(!"implode-asfix", ![]
    , pipe-comm(!"stratego-desugar", ![]
    , to-file(!"bla")))))
          

  parse-stratego(in, out) = 
    in(pipe-comm(!"sglr", !["-p", StrategoTbl, "-2"]
     , pipe-comm(!"implode-asfix", ![]
     , pipe-comm(!"stratego-desugar", ![]
     , out))))
       
    sglr -p /home/visser/res/Stratego/share/stratego-front/Stratego.tbl -2
  | implode-asfix
  | stratego-desugar

*/

strategies

  // execute prog, write the current term to its stdin, 
  // and read the term on its stdout
  // i.e., use external process as primitive transformation
  filter-with-prog(prog, args) :
    t-in -> t-out
    where 
      pipe => p1; pipe => p2
      ; fork
      ; (?0 // child
            ; <stdin-from-pipe> p1
            ; <stdout-to-pipe> p2
            ; <execvp> (<prog>, <args>)
         <+ ?pid // parent
            ; <write-term-to-text-pipe> (p1, t-in)
            ; <read-term-from-text-pipe> p2 => t-out
            ; <waitpid> pid 
            ; (exited + signaled + stopped))

  filter-with-prog'(prog, args) :
    t-in -> t-out
    where debug(!"filter-with-prog': ");
      pipe => p-in
      ; spawn-filter-with-prog(prog, args) => (pid, p-out)
      ; <write-term-to-text-pipe> (p-in, t-in)
      ; <read-term-from-text-pipe> p-out => t-out
      ; <waitpid> pid 
      ; (exited + signaled + stopped)

  filter-with-progs(progs) :
    t-in -> t-out
    where 
      progs => [(prog, args)]
      ; debug(!"filter-with-progs: ")
      ; pipe => p-in
      ; spawn-filter-with-prog(!prog, !args) => (pid, p-out)

      ; <file-to-pipe> p-in => outfile
      ; <WriteToTextFile> (outfile, t-in)
      ; <fclose> outfile

      ; <file-from-pipe> p-out => infile
      ; <ReadFromFile> infile => t-out
      ; <fclose> infile
      ; <waitpid> pid 
      ; (exited + signaled + stopped)



//---------------------------------------------------------------

  main'' =
    fork-and-pipe-child

  fork-and-pipe-child =
    pipe => p
    ; debug(!"pipe created: ")
    ; fork
    ; (child(!p) <+ parent(!p))

  child(p) =  
    ?0
    ; where(p => Pipe(fd1, fd2))
    ; debug(!"I am the child: ")
    ; STDIN_FILENO
    ; debug(!"file descriptor of stdin: ")
    ; close
    ; debug(!"stdin closed: ")
    ; <dup> fd1
    ; debug(!"fd1 dup'ed: ")
    ; <close> fd1
    ; <close> fd2
    ; debug(!"fd1 and fd2 closed: ")
    ; <execvp> ("wc", [])
    ; debug(!"wc exec'ed: ")

  parent(p) = 
    debug(!"parent: ")
    ; ?pid 
    ; where(<gt>(pid, 0))
    ; debug(!"I am the parent: ")
    ; where(p => Pipe(fd1, fd2))
    ; <fdopen> (fd2, "w") => file
    ; debug(!"fd2 opened: ")
    ; <close> fd1 
    ; debug(!"I am the parent: ") 
    ; <printnl>(file, ["bla\nbla\nbla"])
    ; <fclose> file
    ; debug(!"I am the parent: ") 
    ; <waitpid> pid 
    ; debug(!"The child returned: ")
    ; (exited + signaled + stopped)


//---------------------------------------------------------------

  fork-child =
    fork; (child + parent)

  child = 
    ?0
    ; debug(!"I am the child: ")
    ; <execvp> ("ls", []) 

  parent = 
    ?pid
    ; where(<gt>(pid, 0))
    ; debug(!"I am the parent: ")
    ; waitpid
    ; debug(!"The child returned: ")
    ; (exited + signaled + stopped)
      
//---------------------------------------------------------------


  main' = 
    !"abc"; pipe-term-to-child(!"less", ![])

//---------------------------------------------------------------
