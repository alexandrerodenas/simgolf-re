/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004ae43 @ 0x1004AE43 */
/* Body size: 137 addresses */


int __cdecl FUN_1004ae43(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_100b570c == (FARPROC)0x0) {
    hModule = LoadLibraryA("user32.dll");
    if (hModule != (HMODULE)0x0) {
      DAT_100b570c = GetProcAddress(hModule,"MessageBoxA");
      if (DAT_100b570c != (FARPROC)0x0) {
        DAT_100b5710 = GetProcAddress(hModule,"GetActiveWindow");
        DAT_100b5714 = GetProcAddress(hModule,"GetLastActivePopup");
        goto LAB_1004ae92;
      }
    }
    iVar1 = 0;
  }
  else {
LAB_1004ae92:
    if (DAT_100b5710 != (FARPROC)0x0) {
      iVar1 = (*DAT_100b5710)();
      if ((iVar1 != 0) && (DAT_100b5714 != (FARPROC)0x0)) {
        iVar1 = (*DAT_100b5714)(iVar1);
      }
    }
    iVar1 = (*DAT_100b570c)(iVar1,param_1,param_2,param_3);
  }
  return iVar1;
}

