/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100359c0 @ 0x100359C0 */


void * __thiscall FUN_100359c0(void *this,int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100413ea;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_10061338;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
    local_8 = 0;
  }
  FUN_10035030(this,0);
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_10061334;
  ExceptionList = local_10;
  return this;
}

