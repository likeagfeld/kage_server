// Find decompiler p-code ops that mention selected constants in functions
// whose entry points fall inside supplied ranges.
//
// Usage (headless postScript):
//   FindPcodeConstantsInRange.java <outputFile> <constantsCsv> <startHex> <endHex> [<startHex> <endHex> ...]
//   FindPcodeConstantsInRange.java <outputFile> <constant> [<constant> ...] -- <startHex> <endHex> [...]
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Program;
import ghidra.program.model.pcode.HighFunction;
import ghidra.program.model.pcode.PcodeOpAST;
import ghidra.program.model.pcode.Varnode;
import ghidra.util.exception.CancelledException;

public class FindPcodeConstantsInRange extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 4) {
			println("Usage: FindPcodeConstantsInRange.java <outputFile> <constantsCsv> <startHex> <endHex> [<startHex> <endHex> ...]");
			println("   or: FindPcodeConstantsInRange.java <outputFile> <constant> [<constant> ...] -- <startHex> <endHex> [...]");
			return;
		}
		if (currentProgram == null) {
			println("No current program");
			return;
		}

		int rangesStart = 2;
		Set<Long> constants = new HashSet<>();
		for (int i = 1; i < args.length; i++) {
			if ("--".equals(args[i])) {
				rangesStart = i + 1;
				break;
			}
			if (args[i].contains(","))
				constants.addAll(parseConstants(args[i]));
			else
				constants.add(Long.decode(args[i]));
			rangesStart = i + 1;
		}
		if (constants.isEmpty() || rangesStart >= args.length || ((args.length - rangesStart) % 2) != 0) {
			println("Missing constants or invalid range pairs");
			return;
		}
		FunctionManager functionManager = currentProgram.getFunctionManager();
		Map<String, Function> functions = new LinkedHashMap<>();
		for (int i = rangesStart; i < args.length; i += 2) {
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
			FunctionIterator iterator = functionManager.getFunctions(start, true);
			while (iterator.hasNext()) {
				Function function = iterator.next();
				if (function.getEntryPoint().compareTo(end) > 0)
					break;
				functions.put(function.getEntryPoint().toString(), function);
			}
		}

		DecompInterface decompiler = setUpDecompiler(currentProgram);
		if (!decompiler.openProgram(currentProgram)) {
			throw new IOException("Failed to open program in decompiler: " + decompiler.getLastMessage());
		}

		File outFile = new File(args[0]);
		File parent = outFile.getParentFile();
		if (parent != null && !parent.exists() && !parent.mkdirs()) {
			throw new IOException("Failed to create output directory: " + parent);
		}

		try (PrintWriter writer = new PrintWriter(new FileWriter(outFile))) {
			writer.println("function\top_address\tmnemonic\tmatched_constants\tpcode");
			for (Function function : functions.values()) {
				if (monitor.isCancelled()) {
					throw new CancelledException();
				}
				DecompileResults results = decompiler.decompileFunction(function, 120, monitor);
				if (!results.decompileCompleted() || results.getHighFunction() == null) {
					continue;
				}
				writeMatches(writer, constants, function, results.getHighFunction());
			}
		}
		finally {
			decompiler.dispose();
		}
		printf("Wrote %s%n", outFile.getAbsolutePath());
	}

	private Set<Long> parseConstants(String csv) {
		Set<Long> constants = new HashSet<>();
		for (String item : csv.split(",")) {
			String trimmed = item.trim();
			if (trimmed.isEmpty())
				continue;
			long value = Long.decode(trimmed);
			constants.add(value);
		}
		return constants;
	}

	private DecompInterface setUpDecompiler(Program program) {
		DecompileOptions options = new DecompileOptions();
		DecompInterface decompiler = new DecompInterface();
		decompiler.setOptions(options);
		decompiler.toggleCCode(true);
		decompiler.toggleSyntaxTree(true);
		decompiler.setSimplificationStyle("decompile");
		return decompiler;
	}

	private void writeMatches(PrintWriter writer, Set<Long> constants, Function function, HighFunction highFunction) {
		Iterator<PcodeOpAST> iterator = highFunction.getPcodeOps();
		while (iterator.hasNext()) {
			PcodeOpAST op = iterator.next();
			Set<Long> matched = new HashSet<>();
			Varnode output = op.getOutput();
			if (output != null)
				matchVarnode(constants, matched, output);
			for (int i = 0; i < op.getNumInputs(); i++)
				matchVarnode(constants, matched, op.getInput(i));
			if (matched.isEmpty())
				continue;
			writer.printf("%s\t%s\t%s\t%s\t%s%n",
				function.getEntryPoint(),
				op.getSeqnum().getTarget(),
				op.getMnemonic(),
				formatConstants(matched),
				op.toString().replace('\t', ' '));
		}
	}

	private void matchVarnode(Set<Long> constants, Set<Long> matched, Varnode node) {
		if (node != null && node.isConstant()) {
			long value = node.getOffset();
			if (constants.contains(value))
				matched.add(value);
		}
	}

	private String formatConstants(Set<Long> constants) {
		StringBuilder builder = new StringBuilder();
		boolean first = true;
		for (Long value : constants) {
			if (!first)
				builder.append(',');
			first = false;
			builder.append(String.format("0x%x", value));
		}
		return builder.toString();
	}
}
