/* Ghidra decompiled: jgl.dll */
/* Function: __global_unwind2 @ 0x100468B4 */


/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100468cc,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

