/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10093260 @ 0x10093260 */


DWORD __cdecl FUN_10093260(uint param_1,LONG param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  
  if ((param_1 < DAT_10129f9c) &&
     ((*(byte *)((&DAT_10129e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10090370(param_1);
    DVar3 = FUN_100932f0(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 9;
    pDVar2 = FUN_100904e0();
    *pDVar2 = 0;
    DVar3 = 0xffffffff;
  }
  return DVar3;
}

