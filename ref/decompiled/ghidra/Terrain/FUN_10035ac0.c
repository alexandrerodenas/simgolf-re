/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035ac0 @ 0x10035AC0 */


void * __thiscall FUN_10035ac0(void *this,undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004141a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_10061338;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
    local_8 = 0;
  }
  FUN_10035130(this,param_1,0);
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_10061334;
  ExceptionList = local_10;
  return this;
}

