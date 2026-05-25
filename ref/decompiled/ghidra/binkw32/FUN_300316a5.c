/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300316a5 @ 0x300316A5 */


int __cdecl FUN_300316a5(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_3004f3d4 == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_3004f3d4 = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_3004f3d4 != (FARPROC)0x0) {
        DAT_3004f3d8 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_3004f3dc = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_300316f4;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_300316f4:
    if (DAT_3004f3d8 != (FARPROC)0x0) {
      iVar1 = (*DAT_3004f3d8)();
      if ((iVar1 != 0) && (DAT_3004f3dc != (FARPROC)0x0)) {
        iVar1 = (*DAT_3004f3dc)(iVar1);
      }
    }
    iVar1 = (*DAT_3004f3d4)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

