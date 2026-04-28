// Force-create functions in the Bomberman bomb-promotion region, scan for missed
// SH-4 prologues across the code window, re-run auto-analysis (which applies the
// imported Katana SDK FID databases), and export an ASCII listing of the whole
// program plus a focused listing of the requested anchor functions.
//
// Usage (headless postScript):
//   BombermanRevivalPass.java <outputDir>
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.app.services.AbstractAnalyzer;
import ghidra.app.util.exporter.AsciiExporter;
import ghidra.framework.options.Options;
import ghidra.program.flatapi.FlatProgramAPI;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressFactory;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.address.AddressSetView;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Program;
import ghidra.program.model.mem.Memory;
import ghidra.program.model.mem.MemoryBlock;
import ghidra.app.plugin.core.analysis.AutoAnalysisManager;

public class BombermanRevivalPass extends GhidraScript {

    // Known SH-4 function entry prologues (little-endian halfwords).
    // 0x4f22 = sts.l PR,@-r15  (very common function prologue)
    // 0x2fe6 = mov.l r14,@-r15 (frame setup, second-most common)
    private static final int[] PROLOGUE_HALFWORDS = { 0x4f22, 0x2fe6 };

    // Anchor addresses where prior raw-listing recovery proved code lives but
    // Ghidra auto-analysis did not promote them to functions.
    private static final String[] ANCHOR_ADDRESSES = {
        "0x8C073F36",
        "0x8C075A78",
        "0x8C079200",
        "0x8C079298",
        "0x8C079324",
        "0x8C0793E0",
        "0x8C0844D4",
        "0x8C07B50C",
        "0x8C07CAFA",
        "0x8C0730A8",
        "0x8C0DD74E",
        "0x8C0906F4",
        "0x8C0DD740",
        "0x8C0DD850",
        "0x8C0470F4",
        "0x8C0479D2",
        "0x8C079AC0",
        "0x8C079ACE",
        "0x8C09E790",
        "0x8C09E7C8",
        "0x8C010EFC",
        "0x8C0844D4",
    };

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: BombermanRevivalPass.java <outputDir>");
            return;
        }
        if (currentProgram == null) {
            println("No current program");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists() && !outDir.mkdirs()) {
            throw new IOException("Failed to create output dir: " + outDir);
        }

        printf("== BombermanRevivalPass starting on %s ==%n", currentProgram.getName());
        printf("Output dir: %s%n", outDir.getAbsolutePath());

        // Step 1: force functions at known anchors
        List<Function> anchorFunctions = forceAnchorFunctions();

        // Step 2: scan code region for SH-4 prologues missed by auto-analysis
        int scanned = scanForMissedFunctions();
        printf("Prologue scan added %d function candidates%n", scanned);

        // Step 3: re-run auto-analysis so the Katana FID analyzer matches new functions
        printf("Flushing analysis queue (FID + downstream analyzers on new functions)...%n");
        AutoAnalysisManager mgr = AutoAnalysisManager.getAnalysisManager(currentProgram);
        mgr.startAnalysis(monitor);
        printf("Auto-analysis complete%n");

        // Step 4: dump anchor function decompilation
        decompileAnchors(outDir, anchorFunctions);

        // Step 5: export full ASCII listing
        File asciiOut = new File(outDir, "1ST_READ.BIN.v2.txt");
        printf("Exporting full ASCII listing to %s ...%n", asciiOut.getAbsolutePath());
        AsciiExporter exporter = new AsciiExporter();
        boolean ok = exporter.export(asciiOut, currentProgram, null, monitor);
        printf("Ascii export ok=%s size=%d%n", ok, asciiOut.length());

        // Step 6: write a small summary
        writeSummary(outDir, anchorFunctions, scanned);
        printf("== BombermanRevivalPass done ==%n");
    }

    private List<Function> forceAnchorFunctions() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        Map<String, Function> unique = new LinkedHashMap<>();
        for (String hex : ANCHOR_ADDRESSES) {
            Address a = toAddr(hex);
            if (a == null) {
                printf("  WARN unable to parse %s%n", hex);
                continue;
            }
            Function f = fm.getFunctionContaining(a);
            if (f == null) {
                disassemble(a);
                createFunction(a, null);
                f = fm.getFunctionContaining(a);
            }
            if (f != null) {
                unique.put(f.getEntryPoint().toString(), f);
                printf("  anchor %s -> %s @ %s%n", hex, f.getName(), f.getEntryPoint());
            } else {
                printf("  anchor %s -> NO FUNCTION CREATED%n", hex);
            }
        }
        return new ArrayList<>(unique.values());
    }

    private int scanForMissedFunctions() throws Exception {
        FunctionManager fm = currentProgram.getFunctionManager();
        Listing listing = currentProgram.getListing();
        Memory mem = currentProgram.getMemory();
        int created = 0;

        // Restrict to 0x8C010000 .. 0x8C260000 (covers the code region of interest).
        Address scanStart = toAddr("0x8C010000");
        Address scanEnd = toAddr("0x8C25FFFE");

        Address cur = scanStart;
        long step = 2; // SH-4 instructions are 16-bit aligned
        long total = scanEnd.subtract(cur);
        long progress = 0;
        long lastPrint = 0;

        while (cur.compareTo(scanEnd) < 0) {
            if (monitor.isCancelled()) {
                break;
            }
            progress = cur.subtract(scanStart);
            if (progress - lastPrint > (1L << 20)) {
                lastPrint = progress;
                printf("  scan %d / %d ...%n", progress, total);
            }

            // Skip if already inside a function
            Function existing = fm.getFunctionContaining(cur);
            if (existing != null) {
                Address end = existing.getBody().getMaxAddress();
                if (end != null && end.compareTo(cur) > 0) {
                    cur = end.add(1);
                    continue;
                }
            }

            // Read 2 bytes
            short hw;
            try {
                hw = mem.getShort(cur, false); // little endian
            } catch (Exception ex) {
                cur = cur.add(step);
                continue;
            }
            int hwInt = hw & 0xFFFF;
            boolean match = false;
            for (int prologue : PROLOGUE_HALFWORDS) {
                if (hwInt == prologue) {
                    match = true;
                    break;
                }
            }
            if (match) {
                // Only create if there's no instruction yet, or the instruction
                // exists but isn't part of a function.
                Instruction insn = listing.getInstructionAt(cur);
                if (insn == null) {
                    try {
                        disassemble(cur);
                    } catch (Exception ignore) {
                    }
                }
                Function existed = fm.getFunctionContaining(cur);
                if (existed == null) {
                    try {
                        Function nf = createFunction(cur, null);
                        if (nf != null) {
                            created++;
                        }
                    } catch (Exception ignore) {
                    }
                }
            }
            cur = cur.add(step);
        }
        return created;
    }

    private void decompileAnchors(File outDir, List<Function> anchors) throws Exception {
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
        File anchorDir = new File(outDir, "anchors");
        anchorDir.mkdirs();
        try {
            for (Function f : anchors) {
                if (monitor.isCancelled()) break;
                DecompileResults r = decomp.decompileFunction(f, 120, monitor);
                String safe = f.getName().replaceAll("[^A-Za-z0-9_.$-]", "_");
                File of = new File(anchorDir, f.getEntryPoint() + "_" + safe + ".c");
                try (PrintWriter w = new PrintWriter(new FileWriter(of))) {
                    w.printf("// entry: %s%n// name: %s%n// signature: %s%n%n",
                        f.getEntryPoint(), f.getName(true), f.getSignature(true));
                    if (!r.decompileCompleted()) {
                        w.printf("// decompile failed: %s%n", r.getErrorMessage());
                    } else {
                        w.print(r.getDecompiledFunction().getC());
                    }
                }
            }
        } finally {
            decomp.dispose();
        }
    }

    private void writeSummary(File outDir, List<Function> anchors, int scanned)
            throws IOException {
        File f = new File(outDir, "summary.txt");
        try (PrintWriter w = new PrintWriter(new FileWriter(f))) {
            w.printf("Bomberman revival pass v2%n");
            w.printf("program: %s%n", currentProgram.getName());
            w.printf("scan-created: %d%n", scanned);
            w.printf("anchors: %d%n", anchors.size());
            for (Function fn : anchors) {
                w.printf("  %s %s body=%s%n", fn.getEntryPoint(), fn.getName(),
                    fn.getBody());
            }
        }
    }
}
