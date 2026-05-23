/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac0ad @ 0x004AC0AD */
/* Body size: 147 addresses */


undefined4 FUN_004ac0ad(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (DAT_00842140 <= param_1) {
LAB_004ac12e:
    puVar4 = (undefined4 *)FUN_004a910c();
    *puVar4 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 0x24;
  if ((*(byte *)((&DAT_00842040)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) goto LAB_004ac12e;
  FUN_004a937e(param_1);
  if ((*(byte *)((&DAT_00842040)[(int)param_1 >> 5] + 4 + iVar5) & 1) != 0) {
    hFile = (HANDLE)FUN_004a933c(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
    }
    else {
      DVar2 = 0;
    }
    uVar6 = 0;
    if (DVar2 == 0) goto LAB_004ac123;
    pDVar3 = (DWORD *)FUN_004a9115();
    *pDVar3 = DVar2;
  }
  puVar4 = (undefined4 *)FUN_004a910c();
  *puVar4 = 9;
  uVar6 = 0xffffffff;
LAB_004ac123:
  FUN_004a93dd(param_1);
  return uVar6;
}

