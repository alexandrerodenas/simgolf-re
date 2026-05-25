/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004346b @ 0x1004346B */


int __cdecl FUN_1004346b(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = FUN_1004352d(0);
    return iVar1;
  }
  FUN_1004368d((uint)param_1);
  iVar1 = FUN_1004349a(param_1);
  FUN_100436df((uint)param_1);
  return iVar1;
}

