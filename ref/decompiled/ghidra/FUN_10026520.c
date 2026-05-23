/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10026520 @ 0x10026520 */
/* Body size: 130 addresses */


DWORD __cdecl FUN_10026520(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD *pDVar1;
  DWORD DVar2;
  
  if ((param_1 < DAT_10110f5c) &&
     ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100262b0(param_1);
    DVar2 = FUN_100265b0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_100243f0();
    *pDVar1 = 9;
    pDVar1 = FUN_10024400();
    *pDVar1 = 0;
    DVar2 = 0xffffffff;
  }
  return DVar2;
}

