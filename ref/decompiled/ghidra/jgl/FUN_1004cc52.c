/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004cc52 @ 0x1004CC52 */


int __cdecl FUN_1004cc52(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_10057f8c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10057f8c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10057f8c != (FARPROC)0x0) {
        DAT_10057f90 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10057f94 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1004cca1;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1004cca1:
    if (DAT_10057f90 != (FARPROC)0x0) {
      iVar1 = (*DAT_10057f90)();
      if ((iVar1 != 0) && (DAT_10057f94 != (FARPROC)0x0)) {
        iVar1 = (*DAT_10057f94)(iVar1);
      }
    }
    iVar1 = (*DAT_10057f8c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

