/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487430 @ 0x00487430 */


undefined4 __fastcall FUN_00487430(int param_1)

{
  if ((*(int *)(param_1 + 0x14) != 0) && (DAT_0083af80 != (code *)0x0)) {
    (*DAT_0083af80)();
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 0;
  }
  return 0x14;
}

