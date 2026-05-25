/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003bd90 @ 0x1003BD90 */


void * __thiscall FUN_1003bd90(void *this,undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10052558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_1005389c;
  local_4 = 0;
  FUN_10001310((undefined4 *)((int)this + 8));
  *(undefined4 *)((int)this + 8) = &PTR_LAB_10053898;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined ***)this = &PTR_FUN_10053884;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  ExceptionList = local_c;
  return this;
}

