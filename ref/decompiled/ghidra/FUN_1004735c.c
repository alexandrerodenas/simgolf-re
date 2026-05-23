/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004735c @ 0x1004735C */
/* Body size: 41 addresses */


void FUN_1004735c(void)

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
  FUN_1004731e();
  return;
}

