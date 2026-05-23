/* Ghidra decompiled: sound.dll */
/* Function: FUN_100491f7 @ 0x100491F7 */
/* Body size: 147 addresses */


undefined4 __cdecl FUN_100491f7(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (DAT_100b5cdc <= param_1) {
LAB_10049278:
    pDVar3 = FUN_1004588f();
    *pDVar3 = 9;
    return 0xffffffff;
  }
  iVar4 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + iVar4) & 1) == 0) goto LAB_10049278;
  FUN_1004c1d5(param_1);
  if ((*(byte *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + iVar4) & 1) != 0) {
    hFile = (HANDLE)FUN_1004c0ec(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar5 = 0;
    if (DVar2 == 0) goto LAB_1004926d;
    pDVar3 = FUN_10045898();
    *pDVar3 = DVar2;
  }
  pDVar3 = FUN_1004588f();
  *pDVar3 = 9;
  uVar5 = 0xffffffff;
LAB_1004926d:
  FUN_1004c234(param_1);
  return uVar5;
}

