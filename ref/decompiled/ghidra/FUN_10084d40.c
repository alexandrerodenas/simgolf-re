/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10084d40 @ 0x10084D40 */
/* Body size: 130 addresses */


undefined4 FUN_10084d40(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10083310();
  DAT_10123750 = TlsAlloc();
  if (((DAT_10123750 != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_10123750,lpTlsValue), BVar1 != 0)) {
    FUN_10084e00((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}

