/* Ghidra decompiled: golf.exe */
/* Function: FUN_00409cb0 @ 0x00409CB0 */


void FUN_00409cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_005a9cd4 < 0x100) {
    *(undefined4 *)(&DAT_00586b50 + DAT_005a9cd4 * 4) = param_1;
    *(undefined4 *)(&DAT_00586fa8 + DAT_005a9cd4 * 4) = param_2;
    *(undefined4 *)(&DAT_005a8834 + DAT_005a9cd4 * 4) = param_3;
    DAT_005a9cd4 = DAT_005a9cd4 + 1;
  }
  return;
}

