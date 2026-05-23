/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492d40 @ 0x00492D40 */
/* Body size: 39 addresses */


void __fastcall FUN_00492d40(int param_1)

{
  if ((*(int *)(param_1 + 4) != -1) || (*(int *)(param_1 + 8) != -1)) {
    FUN_00486ec0();
    FUN_00480360();
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  return;
}

