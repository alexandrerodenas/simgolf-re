/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10018420 @ 0x10018420 */


void FUN_10018420(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1005fe58;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*(code *)param_4)();
  }
  local_8 = 0xffffffff;
  FUN_10018495();
  FUN_100184b1();
  return;
}

