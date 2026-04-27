// Find every literal pool entry (in code section) containing the given byte
// sequence. Useful for finding all functions referencing a specific 16-bit
// constant (e.g., 0x1040 = "40 10" in little-endian).
//
// Usage:
//   FindByteSequenceInCode.java <outputFile> <hexBytes> [...]
// hexBytes example: "40 10" or "40,10" - 2-4 bytes representing LE constant
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
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class FindByteSequenceInCode extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: FindByteSequenceInCode.java <outputFile> <hexBytes>");
            return;
        }
        File outFile = new File(args[0]);
        outFile.getParentFile().mkdirs();
        String hexBytes = args[1].replaceAll("[, ]", "");
        if (hexBytes.length() % 2 != 0) {
            println("hex bytes must be even length");
            return;
        }
        byte[] needle = new byte[hexBytes.length() / 2];
        for (int i = 0; i < needle.length; i++) {
            needle[i] = (byte) Integer.parseInt(hexBytes.substring(i * 2, i * 2 + 2), 16);
        }

        Memory mem = currentProgram.getMemory();
        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        try (PrintWriter pw = new PrintWriter(new FileWriter(outFile))) {
            pw.printf("# Finding byte sequence '%s' in initialized memory%n", hexBytes);
            int hits = 0;
            for (MemoryBlock block : mem.getBlocks()) {
                if (!block.isInitialized()) continue;
                Address start = block.getStart();
                Address end = block.getEnd();
                Address cursor = start;
                while (cursor != null && cursor.compareTo(end) <= 0 && !monitor.isCancelled()) {
                    Address found;
                    try {
                        found = mem.findBytes(cursor, end, needle, null, true, monitor);
                    } catch (Exception ex) { break; }
                    if (found == null) break;
                    Function f = fm.getFunctionContaining(found);
                    Instruction insn = listing.getInstructionAt(found);
                    pw.printf("%s  bytes=%s  fn=%s entry=%s  insn=%s%n",
                        found, hexBytes,
                        f != null ? f.getName() : "(none)",
                        f != null ? f.getEntryPoint().toString() : "(none)",
                        insn != null ? insn.toString() : "(no insn)");
                    hits++;
                    if (hits > 500) { pw.println("(truncated at 500)"); break; }
                    try { cursor = found.add(2); } catch (Exception ex) { break; }
                }
                if (hits > 500) break;
            }
            pw.printf("# total: %d%n", hits);
            printf("Found %d occurrences. Output: %s%n", hits, outFile.getAbsolutePath());
        }
    }
}
