/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002fb70 @ 0x1002FB70 */
/* Body size: 126 addresses */


void __thiscall FUN_1002fb70(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  void *this_00;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1005907b;
  local_c = ExceptionList;
  if (DAT_100b4a20 != (void *)0x0) {
    ExceptionList = &local_c;
    this_00 = operator_new(0x10);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = thunk_FUN_10008810(this_00,0xe,this);
    }
    *(undefined4 *)(iVar1 + 8) = param_1;
    *(undefined4 *)(iVar1 + 0xc) = param_3;
    local_4 = 0xffffffff;
    thunk_FUN_1000c3d0(DAT_100b4a20,iVar1);
  }
  ExceptionList = local_c;
  return;
}

