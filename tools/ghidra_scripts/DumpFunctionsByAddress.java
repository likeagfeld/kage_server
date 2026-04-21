// Dump decompiled functions for the supplied addresses.
//
// Usage (headless postScript):
//   DumpFunctionsByAddress.java <outputDir> <hexAddress> [<hexAddress> ...]
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
import ghidra.app.util.headless.HeadlessScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;
import ghidra.util.exception.CancelledException;

public class DumpFunctionsByAddress extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 2) {
			println("Usage: DumpFunctionsByAddress.java <outputDir> <hexAddress> [<hexAddress> ...]");
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

		Map<String, Function> uniqueFunctions = new LinkedHashMap<>();
		FunctionManager functionManager = currentProgram.getFunctionManager();
		for (int i = 1; i < args.length; i++) {
			Address address = toAddr(args[i]);
			if (address == null) {
				printf("Could not parse address: %s%n", args[i]);
				continue;
			}
			Function function = functionManager.getFunctionContaining(address);
			if (function == null) {
				function = functionManager.getFunctionAt(address);
			}
			if (function == null) {
				function = findNearbyFunction(functionManager, address, 0x100);
			}
			if (function == null) {
				printf("No function found for %s%n", args[i]);
				continue;
			}
			uniqueFunctions.put(function.getEntryPoint().toString(), function);
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

	private Function findNearbyFunction(FunctionManager functionManager, Address address, long maxDistance) {
		Function best = null;
		long bestDistance = maxDistance + 1;
		FunctionIterator iterator = functionManager.getFunctions(true);
		while (iterator.hasNext()) {
			Function function = iterator.next();
			Address entry = function.getEntryPoint();
			long distance;
			if (entry.compareTo(address) <= 0) {
				distance = address.subtract(entry);
			}
			else {
				distance = entry.subtract(address);
			}
			if (distance < bestDistance) {
				bestDistance = distance;
				best = function;
			}
		}
		return bestDistance <= maxDistance ? best : null;
	}
}
