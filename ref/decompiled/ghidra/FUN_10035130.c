/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035130 @ 0x10035130 */
/* Body size: 196 addresses */


int * __thiscall FUN_10035130(void *this,undefined4 param_1,int param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004136a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_10061328;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
    local_8 = 0;
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_10061324;
  FUN_10034d80((void *)((int)this + *(int *)(*(int *)this + 4)),param_1);
  *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) =
       *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) | 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  ExceptionList = local_10;
  return this;
}

