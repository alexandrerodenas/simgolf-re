/* Ghidra decompiled: golf.exe */
/* Function: FUN_004382f0 @ 0x004382F0 */


int FUN_004382f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = &DAT_004c7be0;
  do {
    iVar1 = FUN_00467170((param_1 - *piVar3) + -0x3c,(param_2 - piVar3[1]) + -0x3c);
    if (iVar1 < 0x3c) {
      return iVar2;
    }
    piVar3 = piVar3 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)piVar3 < 0x4c7c30);
  iVar2 = FUN_00467170(param_1 + -0x30a,param_2 + -0x16b);
  if (iVar2 < 0x3c) {
    return 10;
  }
  iVar2 = FUN_00467170(param_1 + -0x12,param_2 + -0x1ef);
  return ((0x3b < iVar2) - 1 & 0xc) - 1;
}

