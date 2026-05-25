/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002a730 @ 0x1002A730 */


int __cdecl FUN_1002a730(uint param_1,int param_2)

{
  DWORD *pDVar1;
  int iVar2;
  
  if ((param_1 < DAT_10110f5c) &&
     ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_100262b0(param_1);
    iVar2 = FUN_1002a7b0(param_1,param_2);
    __unlock_fhandle(param_1);
  }
  else {
    pDVar1 = FUN_100243f0();
    *pDVar1 = 9;
    iVar2 = -1;
  }
  return iVar2;
}

