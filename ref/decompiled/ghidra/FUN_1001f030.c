/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001f030 @ 0x1001F030 */
/* Body size: 130 addresses */


int __cdecl FUN_1001f030(uint param_1,char *param_2,DWORD param_3)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((param_1 < DAT_10110f5c) &&
     ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100262b0(param_1);
    iVar2 = FUN_1001f0c0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_100243f0();
    *pDVar1 = 9;
    pDVar1 = FUN_10024400();
    *pDVar1 = 0;
    iVar2 = -1;
  }
  return iVar2;
}

