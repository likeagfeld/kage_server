// Locate the address of a literal string in memory, then dump every reference
// to that address (instructions and data words), and decompile each containing
// function.
//
// Usage:
//   LocateAndTraceString.java <outputDir> <searchString>
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.LinkedHashMap;
import java.util.Map;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class LocateAndTraceString extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: LocateAndTraceString.java <outputDir> <searchString>");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists()) outDir.mkdirs();
        String needle = args[1];
        byte[] needleBytes = needle.getBytes();

        Memory mem = currentProgram.getMemory();
        FunctionManager fm = currentProgram.getFunctionManager();

        // Search every memory block for the needle
        Address foundAt = null;
        for (var block : mem.getBlocks()) {
            if (!block.isInitialized()) continue;
            Address start = block.getStart();
            Address end = block.getEnd();
            try {
                Address found = mem.findBytes(start, end, needleBytes, null, true, monitor);
                if (found != null) { foundAt = found; break; }
            } catch (Exception ex) {}
        }
        if (foundAt == null) {
            printf("string '%s' not found in memory%n", needle);
            return;
        }
        printf("string '%s' found at %s%n", needle, foundAt);

        File logFile = new File(outDir, "trace.txt");
        Map<String, Function> uniqueCallers = new LinkedHashMap<>();
        try (PrintWriter pw = new PrintWriter(new FileWriter(logFile))) {
            pw.printf("# string='%s' addr=%s%n%n", needle, foundAt);

            // 1. Find references via Ghidra's reference manager
            pw.printf("## References to %s via Reference Manager:%n", foundAt);
            ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(foundAt);
            int refCount = 0;
            while (it.hasNext()) {
                Reference r = it.next();
                Function f = fm.getFunctionContaining(r.getFromAddress());
                pw.printf("  %s -> %s type=%s fn=%s entry=%s%n",
                    r.getFromAddress(), foundAt, r.getReferenceType(),
                    f != null ? f.getName() : "(none)",
                    f != null ? f.getEntryPoint().toString() : "(none)");
                if (f != null) uniqueCallers.put(f.getEntryPoint().toString(), f);
                refCount++;
            }
            pw.printf("  total: %d%n%n", refCount);

            // 2. Scan all instructions for textual mention of the address
            String hexAddr = foundAt.toString().toLowerCase();
            pw.printf("## Instruction operands containing %s:%n", hexAddr);
            int operandHits = 0;
            InstructionIterator iter = currentProgram.getListing().getInstructions(true);
            while (iter.hasNext()) {
                if (monitor.isCancelled()) break;
                Instruction insn = iter.next();
                if (insn.toString().toLowerCase().contains(hexAddr)) {
                    Function f = fm.getFunctionContaining(insn.getAddress());
                    pw.printf("  %s  %s  fn=%s entry=%s%n",
                        insn.getAddress(), insn.toString(),
                        f != null ? f.getName() : "(none)",
                        f != null ? f.getEntryPoint().toString() : "(none)");
                    if (f != null) uniqueCallers.put(f.getEntryPoint().toString(), f);
                    operandHits++;
                }
            }
            pw.printf("  total: %d%n%n", operandHits);

            // 3. Scan data words for the literal address
            pw.printf("## 4-byte words equal to %s:%n", foundAt);
            try {
                long target = Long.parseLong(foundAt.toString(), 16);
                Address cursor = mem.getMinAddress();
                int dataMatched = 0;
                while (cursor != null && cursor.compareTo(mem.getMaxAddress()) <= 0 && !monitor.isCancelled()) {
                    try {
                        int v = mem.getInt(cursor);
                        if ((v & 0xffffffffL) == target) {
                            Function f = fm.getFunctionContaining(cursor);
                            pw.printf("  %s  word=%08x fn=%s entry=%s%n",
                                cursor, v,
                                f != null ? f.getName() : "(none)",
                                f != null ? f.getEntryPoint().toString() : "(none)");
                            if (f != null) uniqueCallers.put(f.getEntryPoint().toString(), f);
                            dataMatched++;
                            if (dataMatched > 200) { pw.println("  (truncated)"); break; }
                        }
                    } catch (Exception ex) {}
                    try { cursor = cursor.add(4); } catch (Exception ex) { break; }
                }
                pw.printf("  total: %d%n%n", dataMatched);
            } catch (Exception ex) {
                pw.printf("  scan failed: %s%n%n", ex.getMessage());
            }
        }

        // Decompile each unique caller
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
        try {
            for (Function f : uniqueCallers.values()) {
                if (monitor.isCancelled()) break;
                DecompileResults r = decomp.decompileFunction(f, 240, monitor);
                String safe = f.getName().replaceAll("[^A-Za-z0-9_.$-]", "_");
                File of = new File(outDir, f.getEntryPoint() + "_" + safe + ".c");
                try (PrintWriter w = new PrintWriter(new FileWriter(of))) {
                    w.printf("// entry: %s%n// name: %s%n// signature: %s%n%n",
                        f.getEntryPoint(), f.getName(true), f.getSignature(true));
                    if (!r.decompileCompleted()) w.printf("// decompile failed: %s%n", r.getErrorMessage());
                    else w.print(r.getDecompiledFunction().getC());
                }
                printf("decomp: %s%n", of.getName());
            }
        } finally { decomp.dispose(); }

        printf("done. %d unique callers decompiled, log at %s%n", uniqueCallers.size(), logFile);
    }
}
