/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008dbf0 @ 0x1008DBF0 */


int __cdecl FUN_1008dbf0(uint param_1,char *param_2,DWORD param_3)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  
  if ((param_1 < DAT_10129f9c) &&
     ((*(byte *)((&DAT_10129e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10090370(param_1);
    iVar3 = FUN_1008dc80(param_1,param_2,param_3);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 9;
    pDVar2 = FUN_100904e0();
    *pDVar2 = 0;
    iVar3 = -1;
  }
  return iVar3;
}

