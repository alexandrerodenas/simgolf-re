/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036c90 @ 0x10036C90 */
/* Body size: 270 addresses */


int * __thiscall FUN_10036c90(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_68 [20];
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10041499;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_10034e10((int)this + *(int *)(*(int *)this + 4));
  if (((iVar1 != 0) && (iVar1 = FUN_10033ad0((int)this + *(int *)(*(int *)this + 4)), iVar1 != 0))
     && (local_18 = (undefined4 *)FUN_10033ad0((int)this + *(int *)(*(int *)this + 4)),
        local_14 = local_18, local_18 != (undefined4 *)0x0)) {
    (**(code **)*local_18)(1);
  }
  *(undefined4 *)((int)this + *(int *)(*(int *)this + 4) + 4) = 0;
  puVar2 = FUN_10034a90(local_68);
  local_8 = 0;
  FUN_10034e30((void *)((int)this + *(int *)(*(int *)this + 4)),(int)puVar2);
  local_8 = 0xffffffff;
  FUN_10034cd0(local_68);
  FUN_10033900((void *)((int)this + *(int *)(*(int *)this + 4)),0);
  FUN_10034d80((void *)((int)this + *(int *)(*(int *)this + 4)),param_1);
  ExceptionList = local_10;
  return this;
}

