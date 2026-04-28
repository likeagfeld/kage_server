// Read a 4-byte little-endian pointer at each given address (a literal-pool
// PTR_FUN_xxxx slot), then decompile the function at the resolved address.
// Also dumps the entry, name, and direct callers for each.
//
// Usage:
//   ResolvePtrsAndDecompile.java <outputDir> <hexPtrAddr> [<hexPtrAddr> ...]
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class ResolvePtrsAndDecompile extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: ResolvePtrsAndDecompile.java <outputDir> <hexPtrAddr> [...]");
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
        if (!decomp.openProgram(currentProgram)) {
            printf("decompile open failed: %s%n", decomp.getLastMessage());
            return;
        }
        File index = new File(outDir, "resolved_index.tsv");
        Set<String> done = new LinkedHashSet<>();
        try (PrintWriter idx = new PrintWriter(new FileWriter(index))) {
            idx.println("ptrAddr\tresolvedAddr\tfunctionEntry\tfunctionName\tcallerCount");
            for (int i = 1; i < args.length; i++) {
                String ptrHex = args[i];
                Address ptrAddr = toAddr(ptrHex);
                if (ptrAddr == null) { printf("bad ptr addr %s%n", ptrHex); continue; }

                int b0 = currentProgram.getMemory().getByte(ptrAddr) & 0xff;
                int b1 = currentProgram.getMemory().getByte(ptrAddr.add(1)) & 0xff;
                int b2 = currentProgram.getMemory().getByte(ptrAddr.add(2)) & 0xff;
                int b3 = currentProgram.getMemory().getByte(ptrAddr.add(3)) & 0xff;
                long resolved = ((long)b3 << 24) | ((long)b2 << 16) | ((long)b1 << 8) | b0;
                Address fAddr = toAddr(String.format("0x%08x", resolved));
                if (fAddr == null) { printf("bad resolved addr from %s -> %x%n", ptrHex, resolved); continue; }

                Function f = fm.getFunctionContaining(fAddr);
                if (f == null) {
                    try { disassemble(fAddr); createFunction(fAddr, null); } catch (Exception ex) {}
                    f = fm.getFunctionContaining(fAddr);
                }
                if (f == null) {
                    printf("no function at %s (resolved from %s)%n", fAddr, ptrHex);
                    idx.printf("%s\t%s\t(none)\t(none)\t0%n", ptrHex, fAddr);
                    continue;
                }
                String entry = f.getEntryPoint().toString();
                if (!done.add(entry)) {
                    idx.printf("%s\t%s\t%s\t%s\t(duplicate)%n", ptrHex, fAddr, entry, f.getName());
                    continue;
                }

                List<String> callers = new ArrayList<>();
                ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(f.getEntryPoint());
                while (it.hasNext()) {
                    Reference r = it.next();
                    Function c = fm.getFunctionContaining(r.getFromAddress());
                    if (c != null) callers.add(r.getFromAddress() + "@" + c.getName() + "/" + c.getEntryPoint());
                }
                // Also references via the pointer slot itself
                ReferenceIterator pit = currentProgram.getReferenceManager().getReferencesTo(ptrAddr);
                List<String> ptrRefs = new ArrayList<>();
                while (pit.hasNext()) {
                    Reference r = pit.next();
                    Function c = fm.getFunctionContaining(r.getFromAddress());
                    if (c != null) ptrRefs.add(r.getFromAddress() + "@" + c.getName() + "/" + c.getEntryPoint());
                }

                idx.printf("%s\t%s\t%s\t%s\t%d%n", ptrHex, fAddr, entry, f.getName(), callers.size() + ptrRefs.size());

                DecompileResults r = decomp.decompileFunction(f, 240, monitor);
                String safe = f.getName().replaceAll("[^A-Za-z0-9_.$-]", "_");
                File of = new File(outDir, ptrHex + "__" + entry + "_" + safe + ".c");
                try (PrintWriter w = new PrintWriter(new FileWriter(of))) {
                    w.printf("// PTR slot:    %s%n// resolved to: %s%n// containing:  %s @ %s (size %d)%n",
                        ptrHex, fAddr, f.getName(true), f.getEntryPoint(), f.getBody().getNumAddresses());
                    w.printf("// signature: %s%n", f.getSignature(true));
                    w.printf("// direct callers (refs to entry):%n");
                    for (String s : callers) w.printf("//   %s%n", s);
                    w.printf("// callers via ptr slot:%n");
                    for (String s : ptrRefs) w.printf("//   %s%n", s);
                    w.println();
                    if (!r.decompileCompleted())
                        w.printf("// decompile failed: %s%n", r.getErrorMessage());
                    else
                        w.print(r.getDecompiledFunction().getC());
                }
                printf("wrote %s (callers=%d ptrRefs=%d)%n", of.getAbsolutePath(), callers.size(), ptrRefs.size());
            }
        } finally { decomp.dispose(); }
    }
}
