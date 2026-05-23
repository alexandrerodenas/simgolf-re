/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100904f0 @ 0x100904F0 */
/* Body size: 210 addresses */


DWORD __cdecl FUN_100904f0(uint param_1)

{
  undefined4 *puVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD *pDVar3;
  DWORD local_8;
  
  if ((DAT_10129f9c <= param_1) ||
     ((*(byte *)((&DAT_10129e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 9;
    return 0xffffffff;
  }
  FUN_10090370(param_1);
  if ((*(byte *)((&DAT_10129e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_100901f0(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_100905af;
    pDVar3 = FUN_100904e0();
    *pDVar3 = local_8;
  }
  puVar1 = (undefined4 *)FUN_100904d0();
  *puVar1 = 9;
  local_8 = 0xffffffff;
LAB_100905af:
  __unlock_fhandle(param_1);
  return local_8;
}

