/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b1d80 @ 0x004B1D80 */


void FUN_004b1d80(short *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  
  param_2 = *param_1 - param_2;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  iVar1 = 0;
  for (; param_2 != 0; param_2 = param_2 >> 1) {
    iVar1 = iVar1 + 1;
  }
  piVar5 = &DAT_004bd0b0;
  *(int *)(param_3 + iVar1 * 4) = *(int *)(param_3 + iVar1 * 4) + 1;
  uVar3 = 0;
  do {
    iVar1 = (int)param_1[*piVar5];
    if (iVar1 == 0) {
      uVar3 = uVar3 + 1;
    }
    else {
      if (0xf < (int)uVar3) {
        uVar2 = uVar3 >> 4;
        uVar3 = uVar3 + uVar2 * -0x10;
        iVar4 = param_4[0xf0];
        do {
          iVar4 = iVar4 + 1;
          uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
        param_4[0xf0] = iVar4;
      }
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      iVar4 = 1;
      while (iVar1 = iVar1 >> 1, iVar1 != 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = uVar3 * 0x10 + iVar4;
      uVar3 = 0;
      param_4[iVar4] = param_4[iVar4] + 1;
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < 0x4bd1ac);
  if (0 < (int)uVar3) {
    *param_4 = *param_4 + 1;
  }
  return;
}

