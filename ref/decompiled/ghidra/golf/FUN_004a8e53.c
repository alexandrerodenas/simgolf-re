/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a8e53 @ 0x004A8E53 */


DWORD * FUN_004a8e53(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_004e4bf0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_004ab534(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_004e4bf0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004a8e40(lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_004a8eae;
      }
    }
    FUN_004a6937(0x10);
  }
LAB_004a8eae:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

