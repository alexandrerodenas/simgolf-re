/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004de23 @ 0x1004DE23 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl FUN_1004de23(uint param_1,LONG param_2,DWORD param_3)

{
  byte *pbVar1;
  HANDLE hFile;
  DWORD DVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 < DAT_100593c0) {
    iVar4 = (param_1 & 0x1f) * 8;
    if ((*(byte *)((&DAT_100592c0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
      hFile = (HANDLE)FUN_1004c378(param_1);
      if (hFile == (HANDLE)0xffffffff) {
        _DAT_10057db0 = 9;
        return 0xffffffff;
      }
      DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar2 == 0xffffffff) {
        uVar3 = GetLastError();
      }
      else {
        uVar3 = 0;
      }
      if (uVar3 != 0) {
        FUN_1004c18b(uVar3);
        return 0xffffffff;
      }
      pbVar1 = (byte *)((&DAT_100592c0)[(int)param_1 >> 5] + 4 + iVar4);
      *pbVar1 = *pbVar1 & 0xfd;
      return DVar2;
    }
  }
  DAT_10057db4 = 0;
  _DAT_10057db0 = 9;
  return 0xffffffff;
}

