/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001e9c0 @ 0x1001E9C0 */


undefined4 __cdecl FUN_1001e9c0(uint param_1)

{
  DWORD *pDVar1;
  undefined4 uVar2;
  
  if ((param_1 < DAT_10110f5c) &&
     ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100262b0(param_1);
    uVar2 = __close_lk(param_1);
    __unlock_fhandle(param_1);
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

