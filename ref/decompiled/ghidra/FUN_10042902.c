/* Ghidra decompiled: sound.dll */
/* Function: FUN_10042902 @ 0x10042902 */
/* Body size: 106 addresses */


void FUN_10042902(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  int local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1005ed28;
  puStack_10 = &LAB_10045744;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 1) {
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_1004296c();
  ExceptionList = local_14;
  return;
}

