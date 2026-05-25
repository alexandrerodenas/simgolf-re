/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036ea0 @ 0x10036EA0 */


void * __thiscall FUN_10036ea0(void *this,undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100414fa;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_100613a4;
    FUN_10034a90((undefined4 *)((int)this + 8));
    local_8 = 0;
  }
  FUN_10036b20(this,param_1,0);
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_100613a0;
  ExceptionList = local_10;
  return this;
}

