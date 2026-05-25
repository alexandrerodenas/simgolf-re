/* Ghidra decompiled: jgld.dll */
/* Function: __close_lk @ 0x100851B0 */


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
  
  iVar1 = FUN_100901f0(param_1);
  if (iVar1 != -1) {
    if ((param_1 == 1) || (param_1 == 2)) {
      iVar1 = FUN_100901f0(1);
      iVar2 = FUN_100901f0(2);
      if (iVar1 == iVar2) goto LAB_10085203;
    }
    hObject = (HANDLE)FUN_100901f0(param_1);
    BVar3 = CloseHandle(hObject);
    if (BVar3 == 0) {
      local_8 = GetLastError();
      goto LAB_10085215;
    }
  }
LAB_10085203:
  local_8 = 0;
LAB_10085215:
  FUN_10090110(param_1);
  *(undefined1 *)((&DAT_10129e60)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) = 0;
  if (local_8 == 0) {
    uVar4 = 0;
  }
  else {
    __dosmaperr(local_8);
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

