/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e850 @ 0x1000E850 */


uint __fastcall FUN_1000e850(int param_1)

{
  return *(uint *)(param_1 + 0x1a4) >> 3 & 1;
}

