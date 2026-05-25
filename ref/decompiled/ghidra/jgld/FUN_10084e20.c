/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10084e20 @ 0x10084E20 */


DWORD * FUN_10084e20(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  DWORD DVar2;
  DWORD *local_8;
  
  dwErrCode = GetLastError();
  local_8 = TlsGetValue(DAT_10123750);
  if (local_8 == (DWORD *)0x0) {
    local_8 = (DWORD *)__calloc_dbg(1,0x74,2,"tidtable.c",0xe7);
    if (local_8 != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_10123750,local_8);
      if (BVar1 != 0) {
        FUN_10084e00((int)local_8);
        DVar2 = GetCurrentThreadId();
        *local_8 = DVar2;
        local_8[1] = 0xffffffff;
        goto LAB_10084ea7;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10084ea7:
  SetLastError(dwErrCode);
  return local_8;
}

