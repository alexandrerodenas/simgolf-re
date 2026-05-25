/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300025f0 @ 0x300025F0 */


void FUN_300025f0(void)

{
  UINT uMode;
  
  uMode = SetErrorMode(0x8000);
  DAT_30041658 = LoadLibraryA("DDRAW.DLL");
  SetErrorMode(uMode);
  if ((HMODULE)0x1f < DAT_30041658) {
    DAT_30041654 = GetProcAddress(DAT_30041658,"DirectDrawCreate");
    if (DAT_30041654 != (FARPROC)0x0) {
      return;
    }
    FreeLibrary(DAT_30041658);
  }
  DAT_30041658 = (HMODULE)0x1;
  return;
}

