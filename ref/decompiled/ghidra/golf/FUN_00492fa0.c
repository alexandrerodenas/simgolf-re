/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492fa0 @ 0x00492FA0 */
/* Body size: 87 addresses */


bool FUN_00492fa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    iVar1 = FUN_00492ed0(param_1,*(undefined4 *)(param_1 + 8));
    return iVar1 != 0;
  }
  iVar1 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0xc) = iVar1;
  iVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x18) = iVar2;
  if (0 < iVar2) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x14) + iVar1;
    *(int *)(param_1 + 0x18) = iVar2 - *(int *)(param_1 + 0x20);
  }
  return true;
}

