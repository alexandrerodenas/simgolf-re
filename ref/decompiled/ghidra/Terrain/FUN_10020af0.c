/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10020af0 @ 0x10020AF0 */


void FUN_10020af0(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10060360;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_100219c0();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_100219c0();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}

