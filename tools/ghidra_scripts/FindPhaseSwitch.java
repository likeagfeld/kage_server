// Find functions that contain a "phase switch" pattern: multiple cmp/eq
// against small constants (1,2,3,4,b) within the same function. These are
// candidate state-machine readers.
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

public class FindPhaseSwitch extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: FindPhaseSwitch.java <outputFile>");
            return;
        }
        File outFile = new File(args[0]);
        outFile.getParentFile().mkdirs();

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        // For each function, count how many distinct phase-related constants
        // (1, 2, 3, 4, 0xb) appear in cmp/eq instructions.
        Map<String, Set<Integer>> functionPhases = new HashMap<>();
        Map<String, Function> nameToFn = new HashMap<>();

        InstructionIterator iter = listing.getInstructions(true);
        while (iter.hasNext()) {
            if (monitor.isCancelled()) break;
            Instruction insn = iter.next();
            String mn = insn.getMnemonicString();
            if (!mn.equals("cmp/eq")) continue;
            String text = insn.toString();
            // Match cmp/eq #IMM,r0 patterns where IMM is small
            Integer imm = null;
            for (int candidate : new int[]{1, 2, 3, 4, 0xb}) {
                if (text.matches(".*#0x" + Integer.toHexString(candidate) + ",.*")) {
                    imm = candidate;
                    break;
                }
            }
            if (imm == null) continue;
            Function f = fm.getFunctionContaining(insn.getAddress());
            if (f == null) continue;
            String key = f.getEntryPoint().toString();
            nameToFn.put(key, f);
            functionPhases.computeIfAbsent(key, k -> new HashSet<>()).add(imm);
        }

        try (PrintWriter pw = new PrintWriter(new FileWriter(outFile))) {
            pw.println("# Functions with multiple phase-constant comparisons");
            pw.println("# Looking for functions that compare against >= 4 of {1, 2, 3, 4, 0xb}");
            pw.println();
            int hits = 0;
            for (Map.Entry<String, Set<Integer>> e : functionPhases.entrySet()) {
                if (e.getValue().size() >= 4) {
                    Function f = nameToFn.get(e.getKey());
                    StringBuilder sb = new StringBuilder();
                    for (Integer i : e.getValue()) sb.append(String.format("0x%x ", i));
                    pw.printf("%s %s -> phases=[%s]%n",
                        e.getKey(), f.getName(), sb.toString().trim());
                    hits++;
                }
            }
            pw.printf("%n# Functions with >=4 phase constants: %d%n", hits);
            pw.println();
            pw.println("# Also: functions with >=3 phases:");
            int hits3 = 0;
            for (Map.Entry<String, Set<Integer>> e : functionPhases.entrySet()) {
                if (e.getValue().size() == 3) {
                    Function f = nameToFn.get(e.getKey());
                    StringBuilder sb = new StringBuilder();
                    for (Integer i : e.getValue()) sb.append(String.format("0x%x ", i));
                    pw.printf("%s %s -> phases=[%s]%n",
                        e.getKey(), f.getName(), sb.toString().trim());
                    hits3++;
                }
            }
            pw.printf("# total >=3 phases: %d%n", hits3);
        }
        printf("Done. Output: %s%n", outFile.getAbsolutePath());
    }
}
