/* Ghidra decompiled: sound.dll */
/* Function: FUN_100440ec @ 0x100440EC */


undefined4 FUN_100440ec(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1004767b();
  DAT_100651b0 = TlsAlloc();
  if (DAT_100651b0 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_100458a1(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100651b0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1004415e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}

