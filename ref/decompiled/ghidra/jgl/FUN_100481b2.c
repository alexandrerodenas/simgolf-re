/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100481b2 @ 0x100481B2 */


void FUN_100481b2(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10053ac8;
  puStack_10 = &LAB_1004c09c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10056644 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10056644)();
  }
  local_8 = 0xffffffff;
  FUN_1004815c();
  return;
}

