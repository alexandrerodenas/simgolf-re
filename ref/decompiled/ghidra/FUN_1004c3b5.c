/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004c3b5 @ 0x1004C3B5 */
/* Body size: 87 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004c3b5(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  
  DVar2 = DAT_10057db4;
  if ((param_1 < DAT_100593c0) &&
     ((*(byte *)((&DAT_100592c0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_1004c378(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    if (DVar2 == 0) {
      return 0;
    }
  }
  DAT_10057db4 = DVar2;
  _DAT_10057db0 = 9;
  return 0xffffffff;
}

