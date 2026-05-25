/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ac8d8 @ 0x004AC8D8 */


int FUN_004ac8d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_00840ce0 == (FARPROC)0x0) {
    hModule = LoadLibraryA(s_user32_dll_004bc9a4);
    if (hModule != (HMODULE)0x0) {
      DAT_00840ce0 = GetProcAddress(hModule,s_MessageBoxA_004bc998);
      if (DAT_00840ce0 != (FARPROC)0x0) {
        DAT_00840ce4 = GetProcAddress(hModule,s_GetActiveWindow_004bc988);
        DAT_00840ce8 = GetProcAddress(hModule,s_GetLastActivePopup_004bc974);
        goto LAB_004ac927;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_004ac927:
    if (DAT_00840ce4 != (FARPROC)0x0) {
      iVar1 = (*DAT_00840ce4)();
      if ((iVar1 != 0) && (DAT_00840ce8 != (FARPROC)0x0)) {
        iVar1 = (*DAT_00840ce8)(iVar1);
      }
    }
    iVar1 = (*DAT_00840ce0)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

