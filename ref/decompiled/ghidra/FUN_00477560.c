/* Ghidra decompiled: golf.exe */
/* Function: FUN_00477560 @ 0x00477560 */
/* Body size: 28 addresses */


undefined4 __fastcall FUN_00477560(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0083ad44;
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(int *)(param_1 + 0x5c) = DAT_0083ad44;
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
}

