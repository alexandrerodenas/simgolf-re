/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004815c @ 0x1004815C */
/* Body size: 79 addresses */


void FUN_1004815c(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10053ab0;
  puStack_10 = &LAB_1004c09c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_10057e30 != (code *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*DAT_10057e30)();
  }
  local_8 = 0xffffffff;
  FUN_1004c174();
  return;
}

