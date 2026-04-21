// Create functions at supplied addresses when needed, then dump their decompilation.
//
// Usage (headless postScript):
//   CreateFunctionsAndDump.java <outputDir> <hexAddress> [<hexAddress> ...]
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
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Program;
import ghidra.util.exception.CancelledException;

public class CreateFunctionsAndDump extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 2) {
			println("Usage: CreateFunctionsAndDump.java <outputDir> <hexAddress> [<hexAddress> ...]");
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
		for (int i = 1; i < args.length; i++) {
			Address address = toAddr(args[i]);
			if (address == null) {
				printf("Could not parse address: %s%n", args[i]);
				continue;
			}

			Function function = functionManager.getFunctionContaining(address);
			if (function == null) {
				disassemble(address);
				createFunction(address, null);
				function = functionManager.getFunctionContaining(address);
			}
			if (function == null) {
				printf("No function available for %s%n", args[i]);
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
}
