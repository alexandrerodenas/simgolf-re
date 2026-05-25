/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035200 @ 0x10035200 */


void * __thiscall FUN_10035200(void *this,int *param_1,int param_2)

{
  undefined4 uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004139a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_10061328;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
    local_8 = 0;
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_10061324;
  uVar1 = FUN_10033ad0((int)param_1 + *(int *)(*param_1 + 4));
  FUN_10034d80((void *)((int)this + *(int *)(*(int *)this + 4)),uVar1);
  *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) =
       *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) | 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_10;
  return this;
}

