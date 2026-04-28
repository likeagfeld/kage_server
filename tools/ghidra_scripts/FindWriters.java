// Find every instruction that writes to offset +0x3c of any base register.
// Useful for tracing fields like active_battle+0x3c (the chain-count gate).
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressIterator;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

public class FindWriters extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: FindWriters.java <outputFile> <hexOffset>");
            return;
        }
        File outFile = new File(args[0]);
        outFile.getParentFile().mkdirs();
        long offset = Long.parseLong(args[1].replace("0x", ""), 16);

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        try (PrintWriter pw = new PrintWriter(new FileWriter(outFile))) {
            pw.printf("# Writers to base+0x%x in %s%n%n", offset, currentProgram.getName());

            int matched = 0;
            InstructionIterator iter = listing.getInstructions(true);
            while (iter.hasNext()) {
                if (monitor.isCancelled()) break;
                Instruction insn = iter.next();
                String mnemonic = insn.getMnemonicString();
                // SH-4 store mnemonics: mov.w / mov.b / mov.l with destination operand
                if (!mnemonic.startsWith("mov")) continue;
                String full = insn.toString();
                // Check if instruction text contains "@(0x3c," or similar
                String hexOff = String.format("0x%x", offset);
                if (full.contains("@(" + hexOff + ",") || full.contains(",@(" + hexOff + ",")) {
                    // We want WRITES (destination is the @(disp,reg) form)
                    if (full.matches(".*r\\d+,\\s*@\\(" + hexOff + ",.*")
                        || full.matches(".*#.*,\\s*@\\(" + hexOff + ",.*")) {
                        Address a = insn.getAddress();
                        Function f = fm.getFunctionContaining(a);
                        pw.printf("%s  %s  function=%s entry=%s%n",
                            a, full,
                            f != null ? f.getName() : "(none)",
                            f != null ? f.getEntryPoint().toString() : "(none)");
                        matched++;
                    }
                }
            }
            pw.printf("%n# total matches: %d%n", matched);
            printf("Found %d writer instructions; output: %s%n", matched, outFile.getAbsolutePath());
        }
    }
}
