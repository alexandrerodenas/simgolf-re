/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a5ad5 @ 0x004A5AD5 */
/* Body size: 131 addresses */


undefined4 FUN_004a5ad5(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_004a933c(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_004a933c(2);
      iVar2 = FUN_004a933c(1);
      if (iVar2 == iVar1) goto LAB_004a5b23;
    }
    hObject = (HANDLE)FUN_004a933c(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_004a5b25;
    }
  }
LAB_004a5b23:
  DVar4 = 0;
LAB_004a5b25:
  FUN_004a92bd(param_1);
  *(undefined1 *)((&DAT_00842040)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_004a9099(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

