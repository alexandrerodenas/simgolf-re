/* Decompile All Functions - SimGolf RE
 * Usage: analyzeHeadless <project_dir> <project_name> -process <binary_name> -postScript DecompileAllFunctions.java <output_dir>
 */

import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import ghidra.util.task.TaskMonitor;
import java.io.*;

public class DecompileAllFunctions extends GhidraScript {
    @Override
    protected void run() throws Exception {
        String[] args = getScriptArgs();
        String outputDir = args.length > 0 ? args[0] : "rizin_out";
        
        Program program = getCurrentProgram();
        String progName = program.getName();
        File outBase = new File(outputDir, progName + "/decompiled");
        outBase.mkdirs();
        
        File allFile = new File(outBase, "all_decompiled.c");
        PrintWriter allWriter = new PrintWriter(new FileWriter(allFile));
        allWriter.println("/* Decompiled: " + progName + " */");
        allWriter.println("/* Total functions: " + countFunctions(program) + " */\n");
        
        DecompInterface decompiler = new DecompInterface();
        decompiler.openProgram(program);
        
        FunctionIterator functions = program.getListing().getFunctions(true);
        int count = 0;
        int errors = 0;
        
        for (Function function : functions) {
            if (function.isThunk()) continue;
            
            String funcName = function.getName();
            if (funcName.startsWith("DAT_") || funcName.startsWith("LAB_")) continue;
            
            count++;
            
            // Decompile
            DecompileResults results = decompiler.decompileFunction(function, 30, TaskMonitor.DUMMY);
            String decomp = results != null && results.getDecompiledFunction() != null
                ? results.getDecompiledFunction().getC()
                : "// Failed to decompile " + funcName;
            
            if (decomp.startsWith("// Failed")) errors++;
            
            // Write individual file
            String safeName = funcName.replaceAll("[^a-zA-Z0-9_]", "_");
            File funcFile = new File(outBase, safeName + ".c");
            PrintWriter fw = new PrintWriter(new FileWriter(funcFile));
            fw.println("/* " + progName + " - " + funcName + " */");
            fw.println(decomp);
            fw.close();
            
            // Write to all-in-one
            allWriter.println("/* === " + funcName + " === */");
            allWriter.println(decomp);
            allWriter.println();
            
            if (count % 50 == 0) {
                println("  [" + progName + "] " + count + " functions decompiled...");
            }
        }
        
        allWriter.println("/* End: " + count + " functions, " + errors + " errors */");
        allWriter.close();
        decompiler.dispose();
        
        println("Done: " + progName + " - " + count + " functions decompiled (" + errors + " errors)");
        println("Output: " + outBase);
    }
    
    private int countFunctions(Program program) {
        int n = 0;
        for (Function f : program.getListing().getFunctions(true)) {
            if (!f.isThunk()) n++;
        }
        return n;
    }
}
