// Dump instruction listings for the supplied address ranges.
//
// Usage (headless postScript):
//   DumpListingRanges.java <outputDir> <startHex> <endHex> [<startHex> <endHex> ...]
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.CodeUnit;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.MemoryAccessException;

public class DumpListingRanges extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 3 || ((args.length - 1) % 2) != 0) {
			println("Usage: DumpListingRanges.java <outputDir> <startHex> <endHex> [<startHex> <endHex> ...]");
			return;
		}
		if (currentProgram == null) {
			println("No current program");
			return;
		}

		File outDir = new File(args[0]);
		if (!outDir.exists() && !outDir.mkdirs()) {
			throw new IOException("Failed to create output directory: " + outDir);
		}

		for (int i = 1; i < args.length; i += 2) {
			Address start = toAddr(args[i]);
			Address end = toAddr(args[i + 1]);
			if (start == null || end == null) {
				printf("Could not parse range: %s - %s%n", args[i], args[i + 1]);
				continue;
			}
			if (start.compareTo(end) > 0) {
				Address tmp = start;
				start = end;
				end = tmp;
			}
			dumpRange(outDir, start, end);
		}
	}

	private void dumpRange(File outDir, Address start, Address end) throws Exception {
		String safeName = start.toString() + "_" + end.toString() + ".lst";
		File outFile = new File(outDir, safeName);
		Listing listing = currentProgram.getListing();
		try (PrintWriter writer = new PrintWriter(new FileWriter(outFile))) {
			writer.printf("; range: %s - %s%n%n", start, end);
			Address cursor = start;
			while (cursor != null && cursor.compareTo(end) <= 0 && !monitor.isCancelled()) {
				Instruction instruction = listing.getInstructionAt(cursor);
				if (instruction != null) {
					writer.printf("%s  %-12s %s%n", instruction.getAddress(), formatBytes(instruction),
						instruction.toString());
					cursor = instruction.getMaxAddress().next();
					continue;
				}

				CodeUnit codeUnit = listing.getCodeUnitAt(cursor);
				if (codeUnit != null) {
					writer.printf("%s  %-12s %s%n", codeUnit.getAddress(), formatBytes(codeUnit),
						codeUnit.toString());
					cursor = codeUnit.getMaxAddress().next();
					continue;
				}

				tryDisassemble(cursor, end, listing);
				instruction = listing.getInstructionAt(cursor);
				if (instruction != null) {
					writer.printf("%s  %-12s %s%n", instruction.getAddress(), formatBytes(instruction),
						instruction.toString());
					cursor = instruction.getMaxAddress().next();
					continue;
				}

				codeUnit = listing.getCodeUnitAt(cursor);
				if (codeUnit != null) {
					writer.printf("%s  %-12s %s%n", codeUnit.getAddress(), formatBytes(codeUnit),
						codeUnit.toString());
					cursor = codeUnit.getMaxAddress().next();
					continue;
				}

				writer.printf("%s  <undefined>%n", cursor);
				cursor = cursor.next();
			}
		}
		printf("Wrote %s%n", outFile.getAbsolutePath());
	}

	private String formatBytes(CodeUnit codeUnit) {
		byte[] bytes;
		try {
			bytes = codeUnit.getBytes();
		}
		catch (MemoryAccessException e) {
			return "<memerr>";
		}
		StringBuilder builder = new StringBuilder();
		int limit = Math.min(bytes.length, 8);
		for (int i = 0; i < limit; i++) {
			if (i != 0) {
				builder.append(' ');
			}
			builder.append(String.format("%02x", bytes[i] & 0xff));
		}
		return builder.toString();
	}

	private void tryDisassemble(Address cursor, Address end, Listing listing) {
		if (listing.getInstructionAt(cursor) != null) {
			return;
		}
		if (!disassemble(cursor)) {
			return;
		}
		Instruction instruction = listing.getInstructionAt(cursor);
		if (instruction == null) {
			return;
		}
		Address max = instruction.getMaxAddress();
		while (max != null && max.compareTo(end) < 0) {
			Address next = max.next();
			if (next == null || listing.getInstructionAt(next) != null) {
				break;
			}
			if (!disassemble(next)) {
				break;
			}
			Instruction nextInstruction = listing.getInstructionAt(next);
			if (nextInstruction == null) {
				break;
			}
			max = nextInstruction.getMaxAddress();
		}
	}
}
