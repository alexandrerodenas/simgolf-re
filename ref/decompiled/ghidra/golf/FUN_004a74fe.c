/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a74fe @ 0x004A74FE */


void FUN_004a74fe(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA(s_KERNEL32_004bc4a4);
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,s_GAIsProcessorFeaturePresent_004bc486 + 2);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(0);
      return;
    }
  }
  FUN_004a74c0();
  return;
}

