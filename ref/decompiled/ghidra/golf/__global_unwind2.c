/* Ghidra decompiled: golf.exe */
/* Function: __global_unwind2 @ 0x004A54E4 */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x4a54fc,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

