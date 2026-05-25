/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10015960 @ 0x10015960 */


void __thiscall
FUN_10015960(void *this,uint param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1005f548;
  puStack_10 = &LAB_10019ef4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_10019e10(this,9);
  local_8 = 0;
  FUN_10015a20(param_1,param_3,param_4,param_5);
  local_8 = 0xffffffff;
  FUN_100159bd();
  FUN_100159c8();
  return;
}

