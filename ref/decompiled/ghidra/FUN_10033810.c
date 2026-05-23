/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033810 @ 0x10033810 */
/* Body size: 227 addresses */


int * __thiscall FUN_10033810(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1004120c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    ExceptionList = &local_10;
    *(undefined **)this = &DAT_100612bc;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
    local_8 = 0;
  }
  puVar1 = (undefined4 *)FUN_10037510(0x54,2,"ifstream.cpp",0x28);
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
  ExceptionList = local_10;
  return this;
}

