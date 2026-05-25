/* Ghidra decompiled: Terrain.dll */
/* Function: __close_lk @ 0x1001EA40 */


/* Library Function - Single Match
    __close_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __cdecl __close_lk(uint param_1)

{
  int iVar1;
  int iVar2;
  HANDLE hObject;
  BOOL BVar3;
  undefined4 uVar4;
  ulong local_8;
  
  iVar1 = FUN_10026130(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_10026130(1);
      iVar2 = FUN_10026130(2);
      if (iVar1 == iVar2) goto LAB_1001ea93;
    }
    hObject = (HANDLE)FUN_10026130(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_1001eaa5;
    }
  }
LAB_1001ea93:
  local_8 = 0;
LAB_1001eaa5:
  FUN_10026050(param_1);
  *(undefined1 *)((&DAT_10110e20)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

