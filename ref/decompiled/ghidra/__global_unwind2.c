/* Ghidra decompiled: jgld.dll */
/* Function: __global_unwind2 @ 0x1007EED0 */
/* Body size: 32 addresses */


/* Library Function - Single Match
    __global_unwind2
   
   Libraries: Visual Studio 1998 Debug, Visual Studio 1998 Release, Visual Studio 2003 Debug, Visual
   Studio 2003 Release */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1007eee8,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

