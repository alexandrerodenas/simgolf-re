/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044faf0 @ 0x0044FAF0 */


int FUN_0044faf0(int param_1)

{
  if (param_1 < 6) {
    return 0;
  }
  if (param_1 < 10) {
    return 1;
  }
  if (param_1 < 0x12) {
    return 2;
  }
  return ((0x12 < param_1) - 1 & 4) - 1;
}

