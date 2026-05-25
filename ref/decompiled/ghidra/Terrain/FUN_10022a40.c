/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10022a40 @ 0x10022A40 */


int __cdecl FUN_10022a40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_10110870 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10110870 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10110870 != (FARPROC)0x0) {
        DAT_10110874 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10110878 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_10022ab3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_10022ab3:
    if (DAT_10110874 != (FARPROC)0x0) {
      local_8 = (*DAT_10110874)();
    }
    if ((local_8 != 0) && (DAT_10110878 != (FARPROC)0x0)) {
      local_8 = (*DAT_10110878)(local_8);
    }
    iVar1 = (*DAT_10110870)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}

