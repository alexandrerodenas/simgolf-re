/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033fa0 @ 0x10033FA0 */


void * __thiscall FUN_10033fa0(void *this,undefined4 param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10041319;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_10035f10(this);
  local_8 = 0;
  *(undefined ***)this = &PTR_FUN_100612e0;
  FUN_10034810(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  ExceptionList = local_10;
  return this;
}

