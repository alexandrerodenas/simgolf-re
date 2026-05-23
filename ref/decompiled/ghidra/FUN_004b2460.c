/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b2460 @ 0x004B2460 */
/* Body size: 165 addresses */


void FUN_004b2460(int param_1,char param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_004b25d0(param_1);
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_004b2510(param_1);
    **(undefined1 **)(param_1 + 0x10) = 0xff;
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_004b2420(param_1);
    }
    **(char **)(param_1 + 0x10) = param_2 + -0x30;
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_004b2420(param_1);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x134) == 0) {
    iVar1 = 0;
    if (0 < *(int *)(*(int *)(param_1 + 0x20) + 0xec)) {
      puVar2 = (undefined4 *)(param_1 + 0x24);
      do {
        *puVar2 = 0;
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < *(int *)(*(int *)(param_1 + 0x20) + 0xec));
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

