package org.metaborg.runtime.task;

import java.nio.ByteBuffer;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
import java.util.Formatter;

import org.spoofax.interpreter.terms.IStrategoAppl;
import org.spoofax.interpreter.terms.IStrategoInt;
import org.spoofax.interpreter.terms.IStrategoList;
import org.spoofax.interpreter.terms.IStrategoReal;
import org.spoofax.interpreter.terms.IStrategoString;
import org.spoofax.interpreter.terms.IStrategoTerm;
import org.spoofax.interpreter.terms.IStrategoTuple;
import org.spoofax.interpreter.terms.ITermFactory;

public class SHA1TermDigester implements ITermDigester {
	private final MessageDigest digest;
	private final StringBuilder stringBuilder = new StringBuilder();
	private final Formatter formatter = new Formatter(stringBuilder);
	private final ByteBuffer intBuffer = ByteBuffer.allocate(4);
	private final ByteBuffer doubleBuffer = ByteBuffer.allocate(8);

	public SHA1TermDigester() throws NoSuchAlgorithmException {
		digest = MessageDigest.getInstance("SHA-1");
	}

	@Override
	public IStrategoTerm digest(IStrategoTerm term, ITermFactory factory) {
		digestTop(term);
		byte[] data = digest.digest();
		return factory.makeTuple(factory.makeInt(toInt(data, 0)), factory.makeInt(toInt(data, 4)));
		// return factory.makeString(byteArray2Hex(digest.digest()));
	}

	private void digestTop(IStrategoTerm term) {
		digestTerm(term);
		digestTerm(term.getAnnotations());
	}

	private void digestTerm(IStrategoTerm term) {
		switch(term.getTermType()) {
		case IStrategoTerm.APPL: {
			final IStrategoAppl t = (IStrategoAppl) term;
			digest.update(t.getConstructor().getName().getBytes());
			intBuffer.position(0);
			digest.update(intBuffer.putInt(t.getConstructor().getArity()).array());

			for(IStrategoTerm subterm : t)
				digestTop(subterm);
			break;
		}
		case IStrategoTerm.TUPLE: {
			final IStrategoTuple t = (IStrategoTuple) term;
			for(IStrategoTerm subterm : t)
				digestTop(subterm);
			break;
		}
		case IStrategoTerm.LIST: {
			final IStrategoList t = (IStrategoList) term;
			for(IStrategoTerm subterm : t)
				digestTop(subterm);
			break;
		}
		case IStrategoTerm.INT: {
			final IStrategoInt t = (IStrategoInt) term;
			intBuffer.position(0);
			digest.update(intBuffer.putInt(t.intValue()).array());
			break;
		}
		case IStrategoTerm.REAL: {
			final IStrategoReal t = (IStrategoReal) term;
			doubleBuffer.position(0);
			digest.update(doubleBuffer.putDouble(t.realValue()).array());
			break;
		}
		case IStrategoTerm.STRING: {
			final IStrategoString t = (IStrategoString) term;
			digest.update(t.stringValue().getBytes());
			break;
		}
		}
	}

	private String byteArray2Hex(final byte[] digest) {
		stringBuilder.setLength(0);
		for(byte b : digest) {
			formatter.format("%02x", b);
		}
		return stringBuilder.toString();
	}

	private int toInt(final byte[] digest, final int offset) {
		return ((digest[offset + 0] & 0xFF) << 24) | ((digest[offset + 1] & 0xFF) << 16)
			| ((digest[offset + 2] & 0xFF) << 8) | (digest[offset + 3] & 0xFF);
	}
}
