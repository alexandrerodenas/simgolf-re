/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100218e0 @ 0x100218E0 */


undefined4 FUN_100218e0(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10019d30();
  DAT_10066520 = TlsAlloc();
  if (((DAT_10066520 != 0xffffffff) &&
      (lpTlsValue = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0x61), lpTlsValue != (DWORD *)0x0))
     && (BVar1 = TlsSetValue(DAT_10066520,lpTlsValue), BVar1 != 0)) {
    FUN_100219a0((int)lpTlsValue);
    DVar2 = GetCurrentThreadId();
    *lpTlsValue = DVar2;
    lpTlsValue[1] = 0xffffffff;
    return 1;
  }
  return 0;
}

