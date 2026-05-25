/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033be0 @ 0x10033BE0 */


void * __thiscall FUN_10033be0(void *this,undefined4 param_1,int param_2,int param_3,int param_4)

{
  void *this_00;
  void *local_24;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_100412fc;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_100612bc;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
    local_8 = 0;
  }
  this_00 = (void *)FUN_10037510(0x54,2,"ifstream.cpp",0x72);
  local_8 = 1;
  if (this_00 == (void *)0x0) {
    local_24 = (void *)0x0;
  }
  else {
    local_24 = FUN_10033fa0(this_00,param_1,param_2,param_3);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_10035130(this,local_24,0);
  local_8 = 2;
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_100612a8;
  FUN_10033900((void *)((int)this + *(int *)(*(int *)this + 4)),1);
  ExceptionList = local_10;
  return this;
}

