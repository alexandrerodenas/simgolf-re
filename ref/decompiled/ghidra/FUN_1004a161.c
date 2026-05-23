/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004a161 @ 0x1004A161 */
/* Body size: 101 addresses */


DWORD __cdecl FUN_1004a161(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_100b5cdc) &&
     ((*(byte *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_1004c1d5(param_1);
    DVar1 = FUN_1004a1c6(param_1,param_2,param_3);
    FUN_1004c234(param_1);
    return DVar1;
  }
  pDVar2 = FUN_1004588f();
  *pDVar2 = 9;
  pDVar2 = FUN_10045898();
  *pDVar2 = 0;
  return 0xffffffff;
}

