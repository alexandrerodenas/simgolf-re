/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002d61a @ 0x3002D61A */


void FUN_3002d61a(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("KERNEL32");
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"IsProcessorFeaturePresent");
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_3002d5dc();
  return;
}

