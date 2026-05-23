/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac140 @ 0x004AC140 */
/* Body size: 41 addresses */


byte FUN_004ac140(uint param_1)

{
  if (DAT_00842140 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_00842040)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

