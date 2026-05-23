/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004a27d @ 0x1004A27D */
/* Body size: 41 addresses */


byte __cdecl FUN_1004a27d(uint param_1)

{
  if (DAT_100b5cdc <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}

