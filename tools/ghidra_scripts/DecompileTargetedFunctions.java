// Decompile a fixed list of functions critical to the Bomberman protocol +
// gameplay logic, plus search the binary for sites that build a CJudgeWord
// or write the FLAG_JUDGE state and decompile their containing functions.
//
// Usage (headless postScript):
//   DecompileTargetedFunctions.java <outputDir>
//
//@category Bomberman

import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.ReferenceIterator;

public class DecompileTargetedFunctions extends GhidraScript {

    private static final String[] DIRECT_TARGETS = {
        // Battle-end receivers
        "0x8C093A74", // cmd=0x16 settled dead bits receiver
        "0x8C09392E", // cmd=0x19 completed dead bits receiver
        "0x8C0939A0", // cmd=0x19 inner walk
        "0x8C093B10", // cmd=0x15 final state receiver
        // DeadManBit pipeline
        "0x8C078014", // dead-man bitmap loop entry
        "0x8C0784D4", // death handler called when bit confirmed
        "0x8C078482", // adjacent helper
        // Game time info / Bomberman frame sync
        "0x8C099E92", // cmd=0x14 game time info receiver
        "0x8C098656", // adjacent
        // Rule blob handlers
        "0x8C111614", // CSetGameRule area entry
        "0x8C111692", // CSetGameRule area entry
        "0x8C111694", // CSetGameRule area entry
        // CJudgeWord region
        "0x8C043610", // referenced near CJudgeWord vtable
        "0x8C04361C",
        "0x8C0438C4",
        "0x8C043A0C",
        "0x8C043AFA",
        "0x8C043CCE",
        "0x8C046378", // method body referencing CJudgeWord state fields
        // Map block / live-state helpers
        "0x8C0DDA44", // cmd=0x01 receiver
        "0x8C0DDBE4", // cmd=0x02 receiver
        "0x8C0DDD64", // cmd=0x03 receiver
        "0x8C0DD698", // 28-record object table parser
        // Anchor address that emits cmd=0x10 client signal (if discoverable)
        "0x8C077F00", // top of dispatcher containing FUN_8c0781aa
    };

    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 1) {
            println("Usage: DecompileTargetedFunctions.java <outputDir>");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists()) outDir.mkdirs();

        FunctionManager fm = currentProgram.getFunctionManager();
        Set<String> uniqueEntries = new LinkedHashSet<>();
        List<Function> targets = new ArrayList<>();

        // Direct-target list: force-create function if missing then collect.
        for (String hex : DIRECT_TARGETS) {
            Address a = toAddr(hex);
            if (a == null) continue;
            Function f = fm.getFunctionContaining(a);
            if (f == null) {
                disassemble(a);
                createFunction(a, null);
                f = fm.getFunctionContaining(a);
            }
            if (f != null && uniqueEntries.add(f.getEntryPoint().toString())) {
                targets.add(f);
                printf("direct target %s -> %s @ %s%n", hex, f.getName(), f.getEntryPoint());
            }
        }

        // Discover callers of the death/judge functions for one extra hop.
        addCallers(targets, uniqueEntries, "0x8C0784D4");
        addCallers(targets, uniqueEntries, "0x8C111614");
        addCallers(targets, uniqueEntries, "0x8C111692");
        addCallers(targets, uniqueEntries, "0x8C046378");

        // Decompile and dump each
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
            for (Function f : targets) {
                if (monitor.isCancelled()) break;
                DecompileResults r = decomp.decompileFunction(f, 120, monitor);
                String safe = f.getName().replaceAll("[^A-Za-z0-9_.$-]", "_");
                File of = new File(outDir, f.getEntryPoint() + "_" + safe + ".c");
                try (PrintWriter w = new PrintWriter(new FileWriter(of))) {
                    w.printf("// entry: %s%n// name: %s%n// signature: %s%n%n",
                        f.getEntryPoint(), f.getName(true), f.getSignature(true));
                    if (!r.decompileCompleted())
                        w.printf("// decompile failed: %s%n", r.getErrorMessage());
                    else
                        w.print(r.getDecompiledFunction().getC());
                }
                printf("wrote %s%n", of.getAbsolutePath());
            }
        } finally {
            decomp.dispose();
        }
        printf("Total functions decompiled: %d%n", targets.size());
    }

    private void addCallers(List<Function> targets, Set<String> uniqueEntries, String hex) {
        Address a = toAddr(hex);
        if (a == null) return;
        FunctionManager fm = currentProgram.getFunctionManager();
        ReferenceIterator it = currentProgram.getReferenceManager().getReferencesTo(a);
        int added = 0;
        while (it.hasNext()) {
            Reference ref = it.next();
            Address from = ref.getFromAddress();
            Function caller = fm.getFunctionContaining(from);
            if (caller != null && uniqueEntries.add(caller.getEntryPoint().toString())) {
                targets.add(caller);
                added++;
            }
        }
        printf("callers of %s: added %d unique containing functions%n", hex, added);
    }
}
