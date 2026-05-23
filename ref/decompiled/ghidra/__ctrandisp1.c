/* Ghidra decompiled: sound.dll */
/* Function: __ctrandisp1 @ 0x1004877B */
/* Body size: 51 addresses */


/* Library Function - Single Match
    __ctrandisp1
   
   Library: Visual Studio */

void __cdecl __ctrandisp1(uint param_1,int param_2)

{
  undefined4 extraout_ECX;
  int extraout_EDX;
  
  __fload(param_1,param_2);
  __trandisp1(extraout_ECX,extraout_EDX);
  FUN_10048643();
  return;
}

