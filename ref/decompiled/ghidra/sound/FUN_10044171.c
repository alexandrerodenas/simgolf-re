/* Ghidra decompiled: sound.dll */
/* Function: FUN_10044171 @ 0x10044171 */


DWORD * FUN_10044171(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_100651b0);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_100458a1(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_100651b0,lpTlsValue);
      if (BVar1 != 0) {
        FUN_1004415e((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100441cc;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100441cc:
  SetLastError(dwErrCode);
  return lpTlsValue;
}

