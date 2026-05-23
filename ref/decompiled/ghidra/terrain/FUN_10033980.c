/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033980 @ 0x10033980 */
/* Body size: 294 addresses */


int * __thiscall FUN_10033980(void *this,LPCSTR param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  void *this_00;
  int *piVar2;
  uint uVar3;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004125c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_100612bc;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
    local_8 = 0;
  }
  puVar1 = (undefined4 *)FUN_10037510(0x54,2,"ifstream.cpp",0x41);
  local_8 = 1;
  if (puVar1 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    local_24 = FUN_10033ef0(puVar1);
  }
  local_8 = local_8 & 0xffffff00;
  FUN_10035130(this,local_24,0);
  local_8 = 2;
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_100612a8;
  FUN_10033900((void *)((int)this + *(int *)(*(int *)this + 4)),1);
  uVar3 = param_2 | 1;
  this_00 = (void *)FUN_10033ab0(this);
  piVar2 = FUN_10035c30(this_00,param_1,uVar3,param_3);
  if (piVar2 == (int *)0x0) {
    *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
         *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2;
  }
  ExceptionList = local_10;
  return this;
}

