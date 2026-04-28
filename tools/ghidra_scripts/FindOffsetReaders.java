// Find functions that read at a specific offset from any base register.
// Useful for tracing struct field accesses.
//
// Usage:
//   FindOffsetReaders.java <outputFile> <hexOffset> [readWidth]
// readWidth: "b" (byte), "w" (word), "l" (long). Default = "l".
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.LinkedHashMap;
import java.util.Map;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;

public class FindOffsetReaders extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: FindOffsetReaders.java <outputFile> <hexOffset> [b|w|l]");
            return;
        }
        File outFile = new File(args[0]);
        outFile.getParentFile().mkdirs();
        long offset = Long.parseLong(args[1].replace("0x", ""), 16);
        String width = args.length >= 3 ? args[2] : "l";
        String mnemonic = "mov." + width;
        String offHex = String.format("0x%x", offset);

        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        Map<String, Integer> funcHits = new LinkedHashMap<>();
        try (PrintWriter pw = new PrintWriter(new FileWriter(outFile))) {
            pw.printf("# Reads at offset 0x%x with %s instructions%n%n", offset, mnemonic);
            InstructionIterator iter = listing.getInstructions(true);
            while (iter.hasNext()) {
                if (monitor.isCancelled()) break;
                Instruction insn = iter.next();
                String mn = insn.getMnemonicString();
                if (!mn.equals(mnemonic)) continue;
                String text = insn.toString();
                // Read pattern: mov.l @(0xOFFSET,rN),rM
                if (!text.matches(".*@\\(" + offHex + ",.*r\\d+\\),.*")) continue;
                Address a = insn.getAddress();
                Function f = fm.getFunctionContaining(a);
                if (f != null) {
                    String key = f.getEntryPoint().toString() + " " + f.getName();
                    funcHits.merge(key, 1, Integer::sum);
                }
                pw.printf("%s  %s  fn=%s%n", a, text,
                    f != null ? f.getName() + "@" + f.getEntryPoint() : "(none)");
            }
            pw.printf("%n# Functions with hits: %d%n", funcHits.size());
            for (Map.Entry<String, Integer> e : funcHits.entrySet()) {
                pw.printf("  %s -> %d hits%n", e.getKey(), e.getValue());
            }
        }
        printf("Done. Output: %s%n", outFile.getAbsolutePath());
    }
}
