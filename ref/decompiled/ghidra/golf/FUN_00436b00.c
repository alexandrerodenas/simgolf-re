/* Ghidra decompiled: golf.exe */
/* Function: FUN_00436b00 @ 0x00436B00 */


int FUN_00436b00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int local_4;
  
  local_4 = -1;
  iVar1 = FUN_00467170(param_1 + -0x11e,param_2 + -0x1ec);
  if (iVar1 < 0x10) {
    local_4 = -2;
  }
  iVar1 = FUN_00467170(param_1 + -0x100,param_2 + -0x1fe);
  if (iVar1 < 0x10) {
    local_4 = -3;
  }
  iVar1 = 0;
  psVar3 = &DAT_004c7af0;
  do {
    if ((psVar3 == &DAT_004c7af8) || (psVar3 == &DAT_004c7afc)) {
      iVar2 = FUN_00467170((param_1 - *psVar3) * 4 + -0x20,(param_2 - psVar3[1]) + -0x1e);
      if (iVar2 < 0x1e) {
        return iVar1;
      }
    }
    else {
      iVar2 = FUN_00467170((param_1 - (((7 < iVar1) - 1 & 0xfffffff0) + 0x20)) - (int)*psVar3,
                           (param_2 - psVar3[1]) + -0x10);
      if (iVar2 < 0x10) {
        return iVar1;
      }
    }
    psVar3 = psVar3 + 2;
    iVar1 = iVar1 + 1;
  } while (*psVar3 != -1);
  if (local_4 == 1) {
    local_4 = 0;
  }
  return local_4;
}

