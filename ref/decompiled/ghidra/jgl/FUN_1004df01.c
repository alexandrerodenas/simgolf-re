/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004df01 @ 0x1004DF01 */


byte __cdecl FUN_1004df01(uint param_1)

{
  if (DAT_100593c0 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_100592c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 0x40;
}

