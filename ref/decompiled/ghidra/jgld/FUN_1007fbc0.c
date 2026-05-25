/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007fbc0 @ 0x1007FBC0 */


void __cdecl
FUN_1007fbc0(uint param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011ed30;
  puStack_10 = &LAB_10085b38;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_100833f0(9);
  local_8 = 0;
  FUN_1007fc80(param_1,param_3,param_4,param_5);
  local_8 = 0xffffffff;
  FUN_1007fc1d();
  FUN_1007fc28();
  return;
}

