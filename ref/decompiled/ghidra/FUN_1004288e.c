/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004288e @ 0x1004288E */
/* Body size: 81 addresses */


void FUN_1004288e(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1005ed18;
  puStack_10 = &LAB_10045744;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  ExceptionList = local_14;
  return;
}

