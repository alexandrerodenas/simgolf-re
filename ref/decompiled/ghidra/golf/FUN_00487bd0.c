/* Ghidra decompiled: golf.exe */
/* Function: FUN_00487bd0 @ 0x00487BD0 */
/* Body size: 39 addresses */


undefined4 __fastcall FUN_00487bd0(int param_1)

{
  if ((*(int *)(param_1 + 0x14) != 0) && (DAT_0083af90 != (code *)0x0)) {
    (*DAT_0083af90)();
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 0;
  }
  return 0x14;
}

