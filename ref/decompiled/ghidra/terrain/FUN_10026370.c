/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10026370 @ 0x10026370 */
/* Body size: 210 addresses */


DWORD __cdecl FUN_10026370(uint param_1)

{
  DWORD *pDVar1;
  HANDLE hFile;
  BOOL BVar2;
  DWORD local_8;
  
  if ((DAT_10110f5c <= param_1) ||
     ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) == 0)) {
    pDVar1 = FUN_100243f0();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  FUN_100262b0(param_1);
  if ((*(byte *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0) {
    hFile = (HANDLE)FUN_10026130(param_1);
    BVar2 = FlushFileBuffers(hFile);
    if (BVar2 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) goto LAB_1002642f;
    pDVar1 = FUN_10024400();
    *pDVar1 = local_8;
  }
  pDVar1 = FUN_100243f0();
  *pDVar1 = 9;
  local_8 = 0xffffffff;
LAB_1002642f:
  __unlock_fhandle(param_1);
  return local_8;
}

