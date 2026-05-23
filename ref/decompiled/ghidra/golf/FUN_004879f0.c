/* Ghidra decompiled: golf.exe */
/* Function: FUN_004879f0 @ 0x004879F0 */
/* Body size: 39 addresses */


undefined4 __fastcall FUN_004879f0(int param_1)

{
  if ((*(int *)(param_1 + 0x14) != 0) && (DAT_0083af88 != (code *)0x0)) {
    (*DAT_0083af88)();
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 0;
  }
  return 0x14;
}

