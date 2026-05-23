/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004e026 @ 0x1004E026 */
/* Body size: 131 addresses */


undefined4 __cdecl FUN_1004e026(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  undefined4 uVar5;
  
  iVar1 = FUN_1004c0ec(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1004c0ec(2);
      iVar2 = FUN_1004c0ec(1);
      if (iVar2 == iVar1) goto LAB_1004e074;
    }
    hObject = (HANDLE)FUN_1004c0ec(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_1004e076;
    }
  }
LAB_1004e074:
  DVar4 = 0;
LAB_1004e076:
  FUN_1004c06d(param_1);
  *(undefined1 *)((&DAT_100b5ba0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (DVar4 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1004581c(DVar4);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

