# ExportDecompiled.java
# Script Ghidra post-analysis : exporte toutes les fonctions décompilées en .c

import java.io.*;
import ghidra.app.decompiler.*;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.program.model.listing.*;
import ghidra.util.task.TaskMonitor;

public class ExportDecompiled extends GhidraScript {
    
    @Override
    public void run() throws Exception {
        String outputDir = System.getProperty("user.home") + "/simgolf-re/ref/decompiled/ghidra/";
        File dir = new File(outputDir);
        dir.mkdirs();
        
        Program program = currentProgram;
        Listing listing = program.getListing();
        FunctionManager fm = program.getFunctionManager();
        
        // Setup decompiler
        DecompInterface decomplib = new DecompInterface();
        decomplib.openProgram(program);
        
        // Get all functions
        FunctionIterator functions = fm.getFunctions(true);
        int count = 0;
        
        while (functions.hasNext() && !monitor.isCancelled()) {
            Function func = functions.next();
            String name = func.getName();
            
            // Skip thunks and externals
            if (func.isThunk() || func.isExternal()) continue;
            
            // Decompile
            DecompileResults results = decomplib.decompileFunction(func, 60, monitor);
            if (results == null || !results.decompileCompleted()) continue;
            
            String decompiled = results.getDecompiledFunction().getC();
            
            // Sanitize filename
            String fname = name.replaceAll("[^a-zA-Z0-9_]", "_");
            if (fname.length() > 64) fname = fname.substring(0, 64);
            
            // Write output
            String header = String.format(
                "/* Auto-decompiled by Ghidra\n * Binary: %s\n * Function: %s @ 0x%x\n */\n\n",
                program.getName(), name, func.getEntryPoint().getOffset()
            );
            
            PrintWriter writer = new PrintWriter(outputDir + fname + ".c");
            writer.write(header);
            writer.write(decompiled);
            writer.close();
            
            count++;
            if (count % 50 == 0) {
                println("Exported " + count + " functions...");
            }
        }
        
        println("Done: " + count + " functions exported to " + outputDir);
        decomplib.closeProgram();
        decomplib.dispose();
    }
}
