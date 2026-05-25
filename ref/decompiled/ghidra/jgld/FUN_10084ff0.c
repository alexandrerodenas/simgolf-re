/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10084ff0 @ 0x10084FF0 */


void FUN_10084ff0(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1011f7f8;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10084e20();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10084e20();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
  _abort();
}

