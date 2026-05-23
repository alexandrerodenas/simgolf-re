/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b1ae0 @ 0x004B1AE0 */
/* Body size: 140 addresses */


undefined4 FUN_004b1ae0(int *param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_004b1b70(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined1 *)*param_1 = 0xff;
  iVar1 = param_1[1];
  *param_1 = *param_1 + 1;
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    iVar1 = FUN_004b19e0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(char *)*param_1 = param_2 + -0x30;
  iVar1 = param_1[1];
  *param_1 = *param_1 + 1;
  param_1[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    iVar1 = FUN_004b19e0(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1[8] + 0xec)) {
    piVar2 = param_1 + 4;
    do {
      *piVar2 = 0;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1[8] + 0xec));
  }
  return 1;
}

