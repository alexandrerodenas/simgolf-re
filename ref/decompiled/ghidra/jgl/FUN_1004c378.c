/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004c378 @ 0x1004C378 */
/* Body size: 61 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004c378(uint param_1)

{
  if ((param_1 < DAT_100593c0) &&
     ((*(byte *)((&DAT_100592c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    return *(undefined4 *)((&DAT_100592c0)[(int)param_1 >> 5] + (param_1 & 0x1f) * 8);
  }
  DAT_10057db4 = 0;
  _DAT_10057db0 = 9;
  return 0xffffffff;
}

