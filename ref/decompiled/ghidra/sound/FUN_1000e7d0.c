/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e7d0 @ 0x1000E7D0 */


uint __fastcall FUN_1000e7d0(int param_1)

{
  return *(uint *)(param_1 + 0x1a4) >> 1 & 1;
}

