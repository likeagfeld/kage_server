// Decompile the function CONTAINING the given hex address (which may be a label
// inside a large function, not its entry point).
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;

public class DecompileContaining extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: DecompileContaining.java <outputDir> <hexAddr> [hexAddr ...]");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists()) outDir.mkdirs();

        FunctionManager fm = currentProgram.getFunctionManager();
        DecompInterface decomp = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        decomp.setOptions(opts);
        decomp.toggleCCode(true);
        decomp.toggleSyntaxTree(true);
        decomp.setSimplificationStyle("decompile");
        if (!decomp.openProgram(currentProgram)) return;
        try {
            for (int i = 1; i < args.length; i++) {
                Address a = toAddr(args[i]);
                if (a == null) continue;
                Function f = fm.getFunctionContaining(a);
                if (f == null) {
                    // walk backwards searching for nearest function above
                    Address probe = a;
                    for (int back = 0; back < 0x4000 && f == null; back += 2) {
                        try {
                            probe = a.subtract(back);
                            f = fm.getFunctionContaining(probe);
                        } catch (Exception ex) { break; }
                    }
                }
                if (f == null) {
                    printf("no function found containing %s%n", args[i]);
                    continue;
                }
                printf("address %s -> function %s @ %s (size %d)%n",
                    args[i], f.getName(), f.getEntryPoint(), f.getBody().getNumAddresses());
                DecompileResults r = decomp.decompileFunction(f, 240, monitor);
                String safe = f.getName().replaceAll("[^A-Za-z0-9_.$-]", "_");
                File of = new File(outDir, f.getEntryPoint() + "_for_" + args[i] + "_" + safe + ".c");
                try (PrintWriter w = new PrintWriter(new FileWriter(of))) {
                    w.printf("// query addr: %s%n// containing entry: %s%n// name: %s%n// signature: %s%n// body addrs: %d%n%n",
                        args[i], f.getEntryPoint(), f.getName(true), f.getSignature(true),
                        f.getBody().getNumAddresses());
                    if (!r.decompileCompleted())
                        w.printf("// decompile failed: %s%n", r.getErrorMessage());
                    else
                        w.print(r.getDecompiledFunction().getC());
                }
                printf("wrote %s%n", of.getAbsolutePath());
            }
        } finally { decomp.dispose(); }
    }
}
