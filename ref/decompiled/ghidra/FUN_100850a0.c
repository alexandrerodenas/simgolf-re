/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100850a0 @ 0x100850A0 */
/* Body size: 90 addresses */


void FUN_100850a0(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1011f810;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10123754 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10123754)();
  }
  local_8 = 0xffffffff;
  FUN_1008510a();
  FUN_10085110();
  return;
}

