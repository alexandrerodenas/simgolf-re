/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0860 @ 0x004B0860 */
/* Body size: 78 addresses */


void FUN_004b0860(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x150);
  if (*(int *)(param_1 + 0xec) < 2) {
    if (*(uint *)(iVar1 + 8) < *(int *)(param_1 + 0xe8) - 1U) {
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0xc);
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0;
      return;
    }
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x48);
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar2;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}

