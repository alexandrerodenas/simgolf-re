/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10026130 @ 0x10026130 */


undefined4 __cdecl FUN_10026130(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_10110f5c) &&
     ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    uVar2 = *(undefined4 *)((&DAT_10110e20)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  else {
    pDVar1 = FUN_100243f0();
    *pDVar1 = 9;
    pDVar1 = FUN_10024400();
    *pDVar1 = 0;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

