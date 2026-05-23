/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a8dec @ 0x004A8DEC */
/* Body size: 84 addresses */


undefined4 FUN_004a8dec(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_004a7989();
  DAT_004e4bf0 = TlsAlloc();
  if (DAT_004e4bf0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_004ab534(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_004e4bf0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004a8e40(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

