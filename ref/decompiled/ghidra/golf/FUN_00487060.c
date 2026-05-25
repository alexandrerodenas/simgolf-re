/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487060 @ 0x00487060 */


void __fastcall FUN_00487060(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    _BinkClose_4(*(int *)(param_1 + 4));
  }
  if (*(int *)(param_1 + 8) != 0) {
    _BinkBufferClose_4(*(int *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

