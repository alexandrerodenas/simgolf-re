/* Ghidra decompiled: sound.dll */
/* Function: FUN_100442fd @ 0x100442FD */
/* Body size: 79 addresses */


void FUN_100442fd(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1005ede0;
  puStack_10 = &LAB_10045744;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_100651b4 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_100651b4)();
  }
  local_8 = 0xffffffff;
  FUN_10044284();
  return;
}

