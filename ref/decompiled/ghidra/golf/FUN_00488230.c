/* Ghidra decompiled: golf.exe */
/* Function: FUN_00488230 @ 0x00488230 */


undefined4 __fastcall FUN_00488230(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(*(int *)(param_1 + 0x158) + 0xc) & 0x10) != 0) {
    **(undefined1 **)(param_1 + 0x15c) = 0;
    return 0;
  }
  iVar1 = FUN_004a65ee(*(undefined4 *)(param_1 + 0x15c),0x1ff,*(int *)(param_1 + 0x158));
  if (iVar1 == 0) {
    **(undefined1 **)(param_1 + 0x15c) = 0;
    return *(undefined4 *)(param_1 + 0x15c);
  }
  FUN_004925d0(*(undefined4 *)(param_1 + 0x15c));
  FUN_004925b0(*(undefined4 *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x15c);
  return *(undefined4 *)(param_1 + 0x15c);
}

