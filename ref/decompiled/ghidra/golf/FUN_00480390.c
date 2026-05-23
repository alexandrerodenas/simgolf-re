/* Ghidra decompiled: golf.exe */
/* Function: FUN_00480390 @ 0x00480390 */
/* Body size: 119 addresses */


void __fastcall FUN_00480390(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_004baa10;
  if (param_1[1] != 0) {
    if ((param_1[5] == 0) && (iVar2 = 0, 0 < (int)param_1[3])) {
      do {
        param_1[2] = *(undefined4 *)(param_1[1] + 0xc);
        iVar1 = *(int *)(param_1[1] + 8);
        if (iVar1 != 0) {
          FUN_004a5007(iVar1);
        }
        *(undefined4 *)(param_1[1] + 8) = 0;
        if (param_1[1] != 0) {
          FUN_004a5007(param_1[1]);
        }
        iVar2 = iVar2 + 1;
        param_1[1] = param_1[2];
      } while (iVar2 < (int)param_1[3]);
    }
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  param_1[4] = 0;
  return;
}

