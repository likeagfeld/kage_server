// Find every byte write to base+offset where the value being written is a
// composition of low-nibble-preserve + high-nibble-set. This catches the
// idiom: cell[9] = (cell[9] & 0x0f) | (playerId << 4)
//
// Usage:
//   FindHighNibbleWriters.java <outputFile> <hexOffset>
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.Set;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

public class FindHighNibbleWriters extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: FindHighNibbleWriters.java <outputFile> <hexOffset>");
            return;
        }
        File outFile = new File(args[0]);
        outFile.getParentFile().mkdirs();
        long offset = Long.parseLong(args[1].replace("0x", ""), 16);
        String offHex = String.format("0x%x", offset);

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        try (PrintWriter pw = new PrintWriter(new FileWriter(outFile))) {
            pw.printf("# High-nibble writers to base+0x%x in %s%n", offset, currentProgram.getName());
            pw.printf("# Looks for: read base+0x%x, AND with 0xf or shr/shl, OR with shifted value, write back%n%n", offset);

            Set<String> reportedFunctions = new HashSet<>();

            InstructionIterator iter = listing.getInstructions(true);
            // We'll keep a small sliding window of recent insns to detect the pattern
            Instruction[] window = new Instruction[16];
            int wPos = 0;

            while (iter.hasNext()) {
                if (monitor.isCancelled()) break;
                Instruction insn = iter.next();
                window[wPos % window.length] = insn;
                wPos++;

                // Trigger when we see a write to @(0x?, rN) where 0x? matches our offset
                String insnText = insn.toString();
                String mnemonic = insn.getMnemonicString();
                boolean isWrite = (mnemonic.equals("mov.b") || mnemonic.equals("mov.w") || mnemonic.equals("mov.l"))
                    && insnText.matches(".*r\\d+,\\s*@\\(" + offHex + ",.*");
                if (!isWrite) continue;

                // Walk backwards in the window and look for: read of same offset, AND with low-nibble mask, OR
                boolean sawRead = false;
                boolean sawAndLow = false;
                boolean sawOrShifted = false;
                StringBuilder context = new StringBuilder();

                int start = Math.max(0, wPos - window.length);
                for (int i = start; i < wPos; i++) {
                    Instruction prev = window[i % window.length];
                    if (prev == null) continue;
                    String pt = prev.toString();
                    String pm = prev.getMnemonicString();
                    context.append("  ").append(prev.getAddress()).append("  ").append(pt).append("\n");
                    if ((pm.equals("mov.b") || pm.equals("mov.w") || pm.equals("mov.l"))
                        && pt.matches(".*@\\(" + offHex + ",.*r\\d+.*")) {
                        sawRead = true;
                    }
                    // AND with #0xf or extu.b after &0xf — typical low-nibble preserve
                    if ((pm.equals("and") && (pt.contains("#0xf,") || pt.contains("#0x0f,")))) {
                        sawAndLow = true;
                    }
                    // shll then or, or shifted-add suggests merging high nibble
                    if ((pm.equals("or") || pm.equals("shll4")) && pt.contains("r")) {
                        sawOrShifted = true;
                    }
                }

                if (sawRead && sawAndLow) {
                    Function f = fm.getFunctionContaining(insn.getAddress());
                    String key = (f != null ? f.getEntryPoint().toString() : "none") + "@" + insn.getAddress();
                    if (reportedFunctions.add(key)) {
                        pw.printf("=== HIT @ %s in %s ===%n",
                            insn.getAddress(),
                            f != null ? f.getName() + " (" + f.getEntryPoint() + ")" : "(no func)");
                        pw.print(context.toString());
                        pw.println();
                    }
                }
            }
            printf("Done. Output: %s%n", outFile.getAbsolutePath());
        }
    }
}
