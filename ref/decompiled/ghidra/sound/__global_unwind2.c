/* Ghidra decompiled: sound.dll */
/* Function: __global_unwind2 @ 0x100423AC */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x100423c4,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}

