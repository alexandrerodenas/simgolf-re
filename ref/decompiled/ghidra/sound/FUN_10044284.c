/* Ghidra decompiled: sound.dll */
/* Function: FUN_10044284 @ 0x10044284 */


void FUN_10044284(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1005edc8;
  puStack_10 = &LAB_10045744;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_10044171();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_10044171();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
  FUN_10049638();
  return;
}

