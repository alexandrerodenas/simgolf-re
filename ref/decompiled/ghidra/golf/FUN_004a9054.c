/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9054 @ 0x004A9054 */
/* Body size: 69 addresses */


SIZE_T FUN_004a9054(LPCVOID param_1)

{
  int iVar1;
  SIZE_T SVar2;
  
  FUN_004a79b2(9);
  iVar1 = FUN_004a7a66(param_1);
  if (iVar1 == 0) {
    FUN_004a7a13(9);
    SVar2 = HeapSize(DAT_0084215c,0,param_1);
  }
  else {
    SVar2 = *(int *)((int)param_1 + -4) - 9;
    FUN_004a7a13(9);
  }
  return SVar2;
}

