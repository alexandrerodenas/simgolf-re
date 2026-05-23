/* Ghidra decompiled: golf.exe */
/* Function: FUN_004340a0 @ 0x004340A0 */
/* Body size: 151 addresses */


int FUN_004340a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00467170(param_1 + -0xec,param_2 + -0x20e);
  if (iVar1 < 0x10) {
    return -2;
  }
  iVar1 = FUN_00467170(param_1 + -0x115,param_2 + -0x237);
  if (iVar1 < 0xc) {
    return -3;
  }
  iVar3 = 0;
  param_1 = param_1 + -0x17f;
  iVar1 = param_2 * 2 + -0x426;
  do {
    iVar2 = FUN_00467170(param_1,iVar1);
    if (iVar2 < 0x28) {
      return iVar3;
    }
    if (iVar3 == 4) {
      iVar1 = iVar1 + -0x50;
      param_1 = param_1 + 0x118;
    }
    else {
      param_1 = param_1 + -0x50;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  return -1;
}

