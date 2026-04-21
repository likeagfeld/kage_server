// Dump decompiled functions whose entry points fall within the supplied ranges.
//
// Usage (headless postScript):
//   DumpFunctionsInRanges.java <outputDir> <startHex> <endHex> [<startHex> <endHex> ...]
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.LinkedHashMap;
import java.util.Map;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Program;
import ghidra.util.exception.CancelledException;

public class DumpFunctionsInRanges extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 3 || ((args.length - 1) % 2) != 0) {
			println("Usage: DumpFunctionsInRanges.java <outputDir> <startHex> <endHex> [<startHex> <endHex> ...]");
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

		FunctionManager functionManager = currentProgram.getFunctionManager();
		Map<String, Function> uniqueFunctions = new LinkedHashMap<>();
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
			collectFunctionsInRange(functionManager, uniqueFunctions, start, end);
		}

		DecompInterface decompiler = setUpDecompiler(currentProgram);
		if (!decompiler.openProgram(currentProgram)) {
			throw new IOException("Failed to open program in decompiler: " + decompiler.getLastMessage());
		}

		try {
			for (Function function : uniqueFunctions.values()) {
				if (monitor.isCancelled()) {
					throw new CancelledException();
				}
				dumpFunction(outDir, decompiler, function);
			}
		}
		finally {
			decompiler.dispose();
		}
	}

	private void collectFunctionsInRange(FunctionManager functionManager, Map<String, Function> uniqueFunctions,
			Address start, Address end) {
		FunctionIterator iterator = functionManager.getFunctions(start, true);
		while (iterator.hasNext()) {
			Function function = iterator.next();
			Address entry = function.getEntryPoint();
			if (entry.compareTo(end) > 0) {
				break;
			}
			uniqueFunctions.put(entry.toString(), function);
		}
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

	private void dumpFunction(File outDir, DecompInterface decompiler, Function function) throws Exception {
		DecompileResults results = decompiler.decompileFunction(function, 120, monitor);
		String safeName = function.getName().replaceAll("[^A-Za-z0-9_.$-]", "_");
		File outFile = new File(outDir, function.getEntryPoint() + "_" + safeName + ".c");
		try (PrintWriter writer = new PrintWriter(new FileWriter(outFile))) {
			writer.printf("// entry: %s%n", function.getEntryPoint());
			writer.printf("// name: %s%n", function.getName(true));
			writer.printf("// signature: %s%n%n", function.getSignature(true));
			if (!results.decompileCompleted()) {
				writer.printf("// decompile failed: %s%n", results.getErrorMessage());
			}
			else {
				writer.print(results.getDecompiledFunction().getC());
			}
		}
		printf("Wrote %s%n", outFile.getAbsolutePath());
	}
}
