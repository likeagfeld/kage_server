// Find every instruction whose operand text contains the given hex address.
// Useful for locating constructors that write a vtable pointer into objects.
//
// Usage:
//   FindImmediateUsages.java <outputFile> <hexAddr>
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

public class FindImmediateUsages extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: FindImmediateUsages.java <outputFile> <hexAddr>");
            return;
        }
        File outFile = new File(args[0]);
        outFile.getParentFile().mkdirs();
        String needle = args[1].toLowerCase().replace("0x", "");

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        try (PrintWriter pw = new PrintWriter(new FileWriter(outFile))) {
            pw.printf("# Instructions referencing address 0x%s in %s%n%n", needle, currentProgram.getName());
            int matched = 0;
            InstructionIterator iter = listing.getInstructions(true);
            while (iter.hasNext()) {
                if (monitor.isCancelled()) break;
                Instruction insn = iter.next();
                String full = insn.toString().toLowerCase();
                if (full.contains(needle)) {
                    Address a = insn.getAddress();
                    Function f = fm.getFunctionContaining(a);
                    pw.printf("%s  %s  fn=%s entry=%s%n",
                        a, insn.toString(),
                        f != null ? f.getName() : "(none)",
                        f != null ? f.getEntryPoint().toString() : "(none)");
                    matched++;
                }
            }
            // Also scan data: every 4-byte word in memory that equals the address
            pw.printf("%n# Data words equal to 0x%s%n%n", needle);
            try {
                long target = Long.parseLong(needle, 16);
                Address start = currentProgram.getMemory().getMinAddress();
                Address end = currentProgram.getMemory().getMaxAddress();
                Address cursor = start;
                int dataMatched = 0;
                while (cursor != null && cursor.compareTo(end) <= 0 && !monitor.isCancelled()) {
                    try {
                        int v = currentProgram.getMemory().getInt(cursor);
                        if ((v & 0xffffffffL) == target) {
                            Function f = fm.getFunctionContaining(cursor);
                            pw.printf("%s  word=%08x  fn=%s entry=%s%n",
                                cursor, v,
                                f != null ? f.getName() : "(none)",
                                f != null ? f.getEntryPoint().toString() : "(none)");
                            dataMatched++;
                            if (dataMatched > 200) {
                                pw.println("# (truncated at 200)"); break;
                            }
                        }
                    } catch (Exception ex) {}
                    try { cursor = cursor.add(4); } catch (Exception ex) { break; }
                }
            } catch (Exception ex) {
                pw.printf("# data scan failed: %s%n", ex.getMessage());
            }
            pw.printf("%n# total instructions matched: %d%n", matched);
            printf("Found %d instructions; output: %s%n", matched, outFile.getAbsolutePath());
        }
    }
}
