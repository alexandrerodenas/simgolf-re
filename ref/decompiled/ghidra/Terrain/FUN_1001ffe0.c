/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001ffe0 @ 0x1001FFE0 */


int __cdecl FUN_1001ffe0(uint param_1,char *param_2,uint param_3)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((param_1 < DAT_10110f5c) &&
     ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100262b0(param_1);
    iVar2 = FUN_10020070(param_1,param_2,param_3);
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

