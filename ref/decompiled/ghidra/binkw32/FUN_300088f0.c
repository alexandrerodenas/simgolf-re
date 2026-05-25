/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300088f0 @ 0x300088F0 */


uint __cdecl FUN_300088f0(int param_1,uint param_2,uint param_3,int param_4)

{
  if (param_3 < 9) {
    param_3 = 8;
  }
  else if (param_3 < 0x10) {
    param_3 = 0x10;
  }
  return ((param_2 >> 3) * param_3 * param_4 >> 3) + 3 + (param_1 * param_3 >> 3) & 0xfffffffc;
}

