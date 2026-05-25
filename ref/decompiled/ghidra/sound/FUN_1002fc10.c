/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002fc10 @ 0x1002FC10 */


undefined4 __fastcall FUN_1002fc10(int param_1)

{
  void *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005909b;
  local_c = ExceptionList;
  if (DAT_100b4a20 == (void *)0x0) {
    return 1;
  }
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xf8) != 0) {
    ExceptionList = &local_c;
    *(int *)(*(int *)(param_1 + 0xf8) + 0x1414) = param_1 + 0xf8;
  }
  this = operator_new(0x10);
  local_4 = 0;
  if (this == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = thunk_FUN_10008810(this,0x10,param_1);
  }
  local_4 = 0xffffffff;
  thunk_FUN_1000c3d0(DAT_100b4a20,uVar1);
  ExceptionList = local_c;
  return 0;
}

