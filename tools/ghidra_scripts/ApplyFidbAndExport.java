// Apply ALL Katana SDK FIDB databases to the current program, then export
// the full ASCII listing.
//
// Usage (headless postScript on a freshly imported program):
//   ApplyFidbAndExport.java <outputDir> <fidbDir>
//
//@category Bomberman

import java.io.File;
import java.io.FilenameFilter;
import java.util.ArrayList;
import java.util.List;

import ghidra.app.script.GhidraScript;
import ghidra.app.util.exporter.AsciiExporter;
import ghidra.feature.fid.db.FidFile;
import ghidra.feature.fid.db.FidFileManager;
import ghidra.app.plugin.core.analysis.AutoAnalysisManager;

public class ApplyFidbAndExport extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        if (args.length < 2) {
            println("Usage: ApplyFidbAndExport.java <outputDir> <fidbDir>");
            return;
        }
        File outDir = new File(args[0]);
        if (!outDir.exists()) outDir.mkdirs();
        File fidbDir = new File(args[1]);

        File[] fidbs = fidbDir.listFiles(new FilenameFilter() {
            @Override public boolean accept(File dir, String name) { return name.endsWith(".fidb"); }
        });
        if (fidbs == null) { println("No FIDBs in " + fidbDir); return; }

        FidFileManager mgr = FidFileManager.getInstance();
        List<FidFile> activeFidbs = new ArrayList<>();
        for (File f : fidbs) {
            try {
                FidFile fidFile = mgr.addUserFidFile(f);
                if (fidFile != null) {
                    fidFile.setActive(true);
                    activeFidbs.add(fidFile);
                    printf("activated FIDB: %s%n", f.getName());
                }
            } catch (Exception ex) {
                printf("failed to load %s: %s%n", f.getName(), ex.getMessage());
            }
        }

        if (!activeFidbs.isEmpty()) {
            // Trigger re-analysis - the Function ID analyzer will run with the
            // newly-activated FIDBs and apply matched names to functions.
            AutoAnalysisManager amgr = AutoAnalysisManager.getAnalysisManager(currentProgram);
            amgr.reAnalyzeAll(null);
            amgr.startAnalysis(monitor);
            printf("Re-analysis complete with %d FIDB(s) active%n", activeFidbs.size());
        }

        // Now export full ASCII listing
        File asciiOut = new File(outDir, "1ST_READ.BIN.fidb_full.txt");
        printf("Exporting full ASCII listing to %s ...%n", asciiOut.getAbsolutePath());
        AsciiExporter exporter = new AsciiExporter();
        boolean ok = exporter.export(asciiOut, currentProgram, null, monitor);
        printf("Ascii export ok=%s size=%d%n", ok, asciiOut.length());
    }
}
