/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008a370 @ 0x1008A370 */
/* Body size: 187 addresses */


int __cdecl FUN_1008a370(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  int local_8;
  
  local_8 = 0;
  if (DAT_10128848 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_10128848 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_10128848 != (FARPROC)0x0) {
        DAT_1012884c = GetProcAddress(hModule,"GetActiveWindow");
        DAT_10128850 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1008a3e3;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1008a3e3:
    if (DAT_1012884c != (FARPROC)0x0) {
      local_8 = (*DAT_1012884c)();
    }
    if ((local_8 != 0) && (DAT_10128850 != (FARPROC)0x0)) {
      local_8 = (*DAT_10128850)(local_8);
    }
    iVar1 = (*DAT_10128848)(local_8,param_1,param_2,param_3);
  }
  return iVar1;
}

