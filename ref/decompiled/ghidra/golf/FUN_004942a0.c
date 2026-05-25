/* Ghidra decompiled: golf.exe */
/* Function: FUN_004942a0 @ 0x004942A0 */


undefined4 __fastcall FUN_004942a0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 4) & 4) == 0) {
    param_1 = *(int *)(*(int *)(param_1 + 0x2d98) + 8) + 0x2e58 + param_1;
    if (*(int *)(param_1 + 8) != 0) {
      return *(undefined4 *)(*(int *)(param_1 + 0xc) + 4);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1488) + 8);
    if (*(int *)(iVar1 + 0x1550 + param_1) != 0) {
      return *(undefined4 *)(*(int *)(iVar1 + param_1 + 0x1554) + 4);
    }
  }
  return 0;
}

