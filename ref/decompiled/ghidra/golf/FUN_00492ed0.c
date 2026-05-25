/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492ed0 @ 0x00492ED0 */


undefined4 FUN_00492ed0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != DAT_0083d350) {
    do {
      iVar2 = *param_1 + param_2;
      if (DAT_0083d378 + -1 < iVar2) {
        iVar2 = 0;
      }
      else if (iVar2 < 0) {
        iVar2 = DAT_0083d378 + -1;
      }
      iVar1 = *(int *)(DAT_0083d358 + 4 + iVar2 * 8) - *(int *)(DAT_0083d358 + 4 + param_2 * 8);
      param_1[1] = iVar1;
      if (iVar1 != 0) {
        if (iVar1 < 0) {
          return 0;
        }
        param_1[2] = iVar2;
        param_1[3] = *(int *)(DAT_0083d358 + param_2 * 8);
        iVar2 = *(int *)(DAT_0083d358 + iVar2 * 8) - *(int *)(DAT_0083d358 + param_2 * 8);
        if (iVar2 < 0) {
          param_1[5] = -1;
          iVar2 = -iVar2;
          param_1[6] = 1 - param_1[1];
          iVar1 = -(iVar2 / param_1[1]);
        }
        else {
          param_1[5] = 1;
          iVar1 = iVar2 / param_1[1];
          param_1[6] = 0;
        }
        param_1[4] = iVar1;
        param_1[7] = iVar2 % param_1[1];
        param_1[8] = param_1[1];
        return 1;
      }
      param_2 = iVar2;
    } while (iVar2 != DAT_0083d350);
  }
  return 0;
}

