/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478700 @ 0x00478700 */
/* Body size: 67 addresses */


int __fastcall FUN_00478700(int param_1)

{
  int iVar1;
  
  if (DAT_00839aa8 != 0) {
    iVar1 = FUN_00477580();
    DAT_00839aa0 = DAT_00839aa0 + iVar1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  DAT_00839aa4 = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return DAT_00839aa0;
}

