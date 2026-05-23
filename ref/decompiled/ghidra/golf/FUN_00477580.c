/* Ghidra decompiled: golf.exe */
/* Function: FUN_00477580 @ 0x00477580 */
/* Body size: 35 addresses */


int __fastcall FUN_00477580(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = DAT_0083ad44;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (-1 < *(int *)(iVar1 + 8)) {
    return *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 8);
  }
  return *(int *)(iVar1 + 0xc);
}

