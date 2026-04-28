// Find functions that consume the cmd=2 sync struct.
//
// The cmd=2 sync struct is referenced via ctx[0x8c]:
//    mov.w 0x????, r0       ; r0 = 0x008c
//    mov.l @(r0, rN), rM    ; rM = *(rN + 0x008c) = sync struct ptr
//
// These functions are the candidate state-machine readers.
//
// Strategy: find every function whose literal pool contains a 0x008c word
// AND that reads at small offsets (0x24, 0x26, 0x27, 0x28, 0x2a, ..., 0x97)
// of a dereferenced register.
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
import ghidra.program.model.address.AddressRange;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;

public class FindCmd2StructConsumers extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: FindCmd2StructConsumers.java <outputFile>");
            return;
        }
        File outFile = new File(args[0]);
        outFile.getParentFile().mkdirs();

        Memory mem = currentProgram.getMemory();
        Listing listing = currentProgram.getListing();
        FunctionManager fm = currentProgram.getFunctionManager();

        // Step 1: find every 4-byte-aligned location containing the 16-bit
        // word 0x008c (LE bytes 8c 00). Each such location is a candidate
        // literal pool entry.
        Set<Long> candidateLitAddrs = new HashSet<>();
        for (MemoryBlock block : mem.getBlocks()) {
            if (!block.isInitialized()) continue;
            Address start = block.getStart();
            Address end = block.getEnd();
            Address cursor = start;
            int hits = 0;
            while (cursor != null && cursor.compareTo(end) <= 0 && !monitor.isCancelled()) {
                try {
                    int b0 = mem.getByte(cursor) & 0xff;
                    int b1 = mem.getByte(cursor.add(1)) & 0xff;
                    if (b0 == 0x8c && b1 == 0x00) {
                        candidateLitAddrs.add(cursor.getOffset());
                        hits++;
                    }
                } catch (Exception ex) { break; }
                try { cursor = cursor.add(2); } catch (Exception ex) { break; }
                if (hits > 100000) break;
            }
        }
        printf("Found %d candidate literal pool entries with value 0x008c%n",
            candidateLitAddrs.size());

        // Step 2: for each function, check if it (a) references one of these
        // literal addresses via mov.w AND (b) reads at offset 0x24 or higher
        // (but < 0xa4) of any register via mov.l or mov.b.
        Map<String, Set<Long>> funcLitRefs = new HashMap<>();
        Map<String, Set<Integer>> funcSmallReads = new HashMap<>();
        Map<String, Function> nameToFn = new HashMap<>();

        InstructionIterator iter = listing.getInstructions(true);
        while (iter.hasNext()) {
            if (monitor.isCancelled()) break;
            Instruction insn = iter.next();
            String mn = insn.getMnemonicString();
            String text = insn.toString();
            Function f = fm.getFunctionContaining(insn.getAddress());
            if (f == null) continue;
            String key = f.getEntryPoint().toString();
            nameToFn.put(key, f);

            // mov.w 0xADDR, r? — pick out the literal pool address
            if (mn.equals("mov.w") && text.matches("mov\\.w 0x[0-9a-f]+,r\\d+")) {
                String[] parts = text.split(" ");
                if (parts.length >= 2) {
                    String addrStr = parts[1].split(",")[0].replace("0x", "");
                    try {
                        long addr = Long.parseLong(addrStr, 16);
                        if (candidateLitAddrs.contains(addr)) {
                            funcLitRefs.computeIfAbsent(key, k -> new HashSet<>()).add(addr);
                        }
                    } catch (Exception ex) {}
                }
            }
            // mov.b/w/l @(0xN, rM), rR — read at offset N
            if ((mn.equals("mov.b") || mn.equals("mov.w") || mn.equals("mov.l"))
                && text.matches(".*@\\(0x[0-9a-f]+,r\\d+\\),r\\d+")) {
                String[] parts = text.split("\\(");
                if (parts.length >= 2) {
                    String offStr = parts[1].split(",")[0].replace("0x", "");
                    try {
                        int off = Integer.parseInt(offStr, 16);
                        if (off >= 0x24 && off < 0xa4) {
                            funcSmallReads.computeIfAbsent(key, k -> new HashSet<>()).add(off);
                        }
                    } catch (Exception ex) {}
                }
            }
        }

        // Step 3: emit functions that have BOTH a 0x008c literal ref AND
        // a small-offset read in [0x24, 0xa4).
        try (PrintWriter pw = new PrintWriter(new FileWriter(outFile))) {
            pw.println("# Functions with BOTH 0x008c literal refs AND small-offset reads in [0x24, 0xa4)");
            pw.println("# These are candidate cmd=2 sync struct consumers (powerup state readers).");
            pw.println();
            int hits = 0;
            for (Map.Entry<String, Set<Long>> e : funcLitRefs.entrySet()) {
                Set<Integer> reads = funcSmallReads.get(e.getKey());
                if (reads == null || reads.isEmpty()) continue;
                Function f = nameToFn.get(e.getKey());
                StringBuilder readsList = new StringBuilder();
                for (int r : reads) readsList.append(String.format("0x%x ", r));
                pw.printf("%s %s -> %d 0x008c lits, reads at: %s%n",
                    e.getKey(), f.getName(), e.getValue().size(),
                    readsList.toString().trim());
                hits++;
            }
            pw.printf("%n# total candidate consumers: %d%n", hits);
        }
        printf("Done. Output: %s%n", outFile.getAbsolutePath());
    }
}
