/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487f30 @ 0x00487F30 */


void __fastcall FUN_00487f30(int param_1)

{
  FUN_00487f80();
  if (*(int *)(param_1 + 0x15c) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x15c));
    *(undefined4 *)(param_1 + 0x15c) = 0;
  }
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_004a5007(*(int *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  return;
}

