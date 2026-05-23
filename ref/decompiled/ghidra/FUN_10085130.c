/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085130 @ 0x10085130 */
/* Body size: 122 addresses */


undefined4 __cdecl FUN_10085130(uint param_1)

{
  undefined4 *puVar1;
  DWORD *pDVar2;
  undefined4 uVar3;
  
  if ((param_1 < DAT_10129f9c) &&
     ((*(byte *)((&DAT_10129e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_10090370(param_1);
    uVar3 = __close_lk(param_1);
    __unlock_fhandle(param_1);
  }
  else {
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 9;
    pDVar2 = FUN_100904e0();
    *pDVar2 = 0;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

