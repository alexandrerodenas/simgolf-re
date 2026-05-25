/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002fd80 @ 0x1002FD80 */


void __thiscall FUN_1002fd80(void *this,undefined4 param_1)

{
  void *this_00;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_100590db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x108) = param_1;
  if (DAT_100b4a20 != (void *)0x0) {
    this_00 = operator_new(0x10);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = thunk_FUN_10008810(this_00,0xf,this);
    }
    *(undefined4 *)(iVar1 + 8) = param_1;
    local_4 = 0xffffffff;
    thunk_FUN_1000c3d0(DAT_100b4a20,iVar1);
  }
  ExceptionList = local_c;
  return;
}

