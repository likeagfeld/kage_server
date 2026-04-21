// Dump references to the supplied addresses and identify enclosing functions.
//
// Usage (headless postScript):
//   DumpReferencesToAddress.java <outputDir> <hexAddress> [<hexAddress> ...]
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.Symbol;
import ghidra.program.model.symbol.SymbolTable;

public class DumpReferencesToAddress extends GhidraScript {

	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		if (args.length < 2) {
			println("Usage: DumpReferencesToAddress.java <outputDir> <hexAddress> [<hexAddress> ...]");
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

		for (int i = 1; i < args.length; i++) {
			Address address = toAddr(args[i]);
			if (address == null) {
				printf("Could not parse address: %s%n", args[i]);
				continue;
			}
			dumpReferences(outDir, address);
		}
	}

	private void dumpReferences(File outDir, Address target) throws Exception {
		String safeName = target.toString() + "_refs.txt";
		File outFile = new File(outDir, safeName);
		FunctionManager functionManager = currentProgram.getFunctionManager();
		SymbolTable symbolTable = currentProgram.getSymbolTable();

		try (PrintWriter writer = new PrintWriter(new FileWriter(outFile))) {
			writer.printf("target=%s%n", target);
			Symbol primary = symbolTable.getPrimarySymbol(target);
			if (primary != null) {
				writer.printf("symbol=%s%n", primary.getName(true));
			}

			int count = 0;
			for (Reference ref : getReferencesTo(target)) {
				if (monitor.isCancelled()) {
					break;
				}
				Address from = ref.getFromAddress();
				Function function = functionManager.getFunctionContaining(from);
				writer.printf(
					"ref[%d] from=%s type=%s opIndex=%d function=%s entry=%s%n",
					count,
					from,
					ref.getReferenceType(),
					ref.getOperandIndex(),
					function != null ? function.getName(true) : "<none>",
					function != null ? function.getEntryPoint() : "<none>");
				count++;
			}
			writer.printf("count=%d%n", count);
		}

		printf("Wrote %s%n", outFile.getAbsolutePath());
	}
}
