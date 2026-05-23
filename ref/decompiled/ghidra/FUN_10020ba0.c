/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10020ba0 @ 0x10020BA0 */
/* Body size: 90 addresses */


void FUN_10020ba0(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_10060378;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (PTR_FUN_10066518 != (undefined *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*(code *)PTR_FUN_10066518)();
  }
  local_8 = 0xffffffff;
  FUN_10020c0a();
  FUN_10020c10();
  return;
}

