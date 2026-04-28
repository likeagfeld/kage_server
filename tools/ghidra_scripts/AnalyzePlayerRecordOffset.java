// Analyze writes/reads of playerStruct[+4] specifically.
// Strategy: find functions that:
//  1. Use the player record stride (0x15f4) as a multiplier OR
//  2. Use the ctx-relative offset (0xab0) for player record base lookup
// Then within those functions, find any read/write to offset +4 of the result.
//
// Output: list of writers (potential initializers) and readers (potential gates).
//
// Usage:
//   AnalyzePlayerRecordOffset.java <outputDir>
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

public class AnalyzePlayerRecordOffset extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: AnalyzePlayerRecordOffset.java <outputDir>");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists()) outDir.mkdirs();

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        // Find any function that contains literal pool entry 0x15f4 as 16-bit
        Map<String, Function> playerStrideUsers = new LinkedHashMap<>();
        Map<String, Function> ctxOffsetUsers = new LinkedHashMap<>();

        // Scan all literal pool entries
        File logFile = new File(outDir, "trace.txt");
        try (PrintWriter pw = new PrintWriter(new FileWriter(logFile))) {
            pw.println("# Phase 1: Find functions referencing 0x15f4 stride (16-bit literal)");
            // Search for byte sequence f4 15 in all init memory regions
            findByteAndAttribute("f4 15", playerStrideUsers, pw);

            pw.println();
            pw.println("# Phase 2: Find functions referencing 0xab0 (16-bit ctx offset)");
            findByteAndAttribute("b0 0a", ctxOffsetUsers, pw);

            pw.println();
            pw.println("# Phase 3: For each candidate function, find writes to +4 byte/word/long");
            Map<String, Function> all = new LinkedHashMap<>();
            all.putAll(playerStrideUsers);
            all.putAll(ctxOffsetUsers);

            DecompInterface decomp = new DecompInterface();
            DecompileOptions opts = new DecompileOptions();
            decomp.setOptions(opts);
            decomp.toggleCCode(true);
            decomp.toggleSyntaxTree(true);
            decomp.setSimplificationStyle("decompile");
            if (!decomp.openProgram(currentProgram)) {
                pw.printf("decompile open failed: %s%n", decomp.getLastMessage());
                return;
            }

            List<String> writersOfPlus4 = new ArrayList<>();
            try {
                for (Map.Entry<String, Function> entry : all.entrySet()) {
                    if (monitor.isCancelled()) break;
                    Function f = entry.getValue();
                    boolean writesPlus4 = false;
                    boolean readsPlus4 = false;
                    StringBuilder hits = new StringBuilder();

                    Address start = f.getBody().getMinAddress();
                    Address end = f.getBody().getMaxAddress();
                    InstructionIterator it = listing.getInstructions(start, true);
                    while (it.hasNext()) {
                        Instruction insn = it.next();
                        if (insn.getAddress().compareTo(end) > 0) break;
                        String text = insn.toString();
                        String mnem = insn.getMnemonicString();
                        // mov.b/w/l rN, @(0x4, rM)  = write to +4
                        // mov.b/w/l @(0x4, rM), rN  = read from +4
                        boolean isMov = mnem.equals("mov.b") || mnem.equals("mov.w") || mnem.equals("mov.l");
                        if (isMov && text.matches(".*r\\d+,\\s*@\\(0x4,.*")) {
                            writesPlus4 = true;
                            hits.append("  W  ").append(insn.getAddress()).append("  ").append(text).append("\n");
                        }
                        if (isMov && text.matches(".*@\\(0x4,.*r\\d+.*")) {
                            readsPlus4 = true;
                            hits.append("  R  ").append(insn.getAddress()).append("  ").append(text).append("\n");
                        }
                    }
                    if (writesPlus4) {
                        writersOfPlus4.add(f.getEntryPoint() + " " + f.getName());
                        pw.printf("=== WRITER %s in %s ===%n", f.getEntryPoint(), f.getName());
                        pw.print(hits.toString());
                        // Decompile
                        DecompileResults r = decomp.decompileFunction(f, 240, monitor);
                        String safe = f.getName().replaceAll("[^A-Za-z0-9_.$-]", "_");
                        File of = new File(outDir, "writer_" + f.getEntryPoint() + "_" + safe + ".c");
                        try (PrintWriter w = new PrintWriter(new FileWriter(of))) {
                            w.printf("// entry: %s%n// name: %s%n%n", f.getEntryPoint(), f.getName(true));
                            if (!r.decompileCompleted()) w.printf("// decompile failed: %s%n", r.getErrorMessage());
                            else w.print(r.getDecompiledFunction().getC());
                        }
                    } else if (readsPlus4) {
                        pw.printf("=== reader (no write) %s in %s ===%n", f.getEntryPoint(), f.getName());
                    }
                }
            } finally { decomp.dispose(); }

            pw.println();
            pw.printf("# Total writers found: %d%n", writersOfPlus4.size());
            for (String s : writersOfPlus4) pw.println(s);
        }
        printf("Done. Output: %s%n", outDir);
    }

    private void findByteAndAttribute(String hexBytes, Map<String, Function> out, PrintWriter pw) throws Exception {
        String compact = hexBytes.replaceAll("[, ]", "");
        byte[] needle = new byte[compact.length() / 2];
        for (int i = 0; i < needle.length; i++) {
            needle[i] = (byte) Integer.parseInt(compact.substring(i * 2, i * 2 + 2), 16);
        }
        FunctionManager fm = currentProgram.getFunctionManager();
        Address start = currentProgram.getMemory().getMinAddress();
        Address end = currentProgram.getMemory().getMaxAddress();
        Address cursor = start;
        int hits = 0;
        while (cursor != null && cursor.compareTo(end) <= 0 && !monitor.isCancelled()) {
            Address found;
            try { found = currentProgram.getMemory().findBytes(cursor, end, needle, null, true, monitor); }
            catch (Exception ex) { break; }
            if (found == null) break;
            Function f = fm.getFunctionContaining(found);
            if (f == null) {
                // The literal pool entry might be after function body. Try walking backwards.
                Address probe = found;
                for (int back = 0; back < 0x4000 && f == null; back += 2) {
                    try { probe = found.subtract(back); f = fm.getFunctionContaining(probe); }
                    catch (Exception ex) { break; }
                }
            }
            if (f != null) {
                String key = f.getEntryPoint().toString();
                if (!out.containsKey(key)) {
                    out.put(key, f);
                    pw.printf("  %s -> fn %s @ %s%n", found, f.getName(), f.getEntryPoint());
                }
            }
            hits++;
            if (hits > 500) break;
            try { cursor = found.add(2); } catch (Exception ex) { break; }
        }
    }
}
