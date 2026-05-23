/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10048e13 @ 0x10048E13 */
/* Body size: 179 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10048e13(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  DWORD DVar4;
  int iVar5;
  
  if (DAT_100593c0 <= param_1) {
    DAT_10057db4 = 0;
    _DAT_10057db0 = 9;
    return 0xffffffff;
  }
  iVar5 = (param_1 & 0x1f) * 8;
  if ((*(byte *)((&DAT_100592c0)[(int)param_1 >> 5] + 4 + iVar5) & 1) == 0) {
    _DAT_10057db0 = 9;
    DAT_10057db4 = 0;
    return 0xffffffff;
  }
  iVar1 = FUN_1004c378(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_1004c378(2);
      iVar2 = FUN_1004c378(1);
      if (iVar2 == iVar1) goto LAB_10048e8c;
    }
    hObject = (HANDLE)FUN_1004c378(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      goto LAB_10048e8e;
    }
  }
LAB_10048e8c:
  DVar4 = 0;
LAB_10048e8e:
  FUN_1004c2fe(param_1);
  *(undefined1 *)((&DAT_100592c0)[(int)param_1 >> 5] + 4 + iVar5) = 0;
  if (DVar4 == 0) {
    return 0;
  }
  FUN_1004c18b(DVar4);
  return 0xffffffff;
}

