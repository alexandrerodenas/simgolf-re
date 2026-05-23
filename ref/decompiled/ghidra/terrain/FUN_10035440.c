/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035440 @ 0x10035440 */
/* Body size: 351 addresses */


undefined4 __thiscall FUN_10035440(void *this,int param_1)

{
  int iVar1;
  
  thunk_FUN_100018b0((int)this + *(int *)(*(int *)this + 4));
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + *(int *)(*(int *)this + 4) + 8) != 0) {
    *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
         *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2;
    thunk_FUN_10037930((int)this + *(int *)(*(int *)this + 4));
    return 0;
  }
  if ((*(int *)((int)this + *(int *)(*(int *)this + 4) + 0x20) != 0) &&
     ((param_1 == 0 ||
      (iVar1 = FUN_10034460(*(int *)((int)this + *(int *)(*(int *)this + 4) + 4)), iVar1 < param_1))
     )) {
    FUN_100369a0(*(int **)((int)this + *(int *)(*(int *)this + 4) + 0x20));
  }
  FUN_100355a0((int)this + *(int *)(*(int *)this + 4));
  if (((param_1 == 0) && ((*(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) & 1) != 0)) &&
     (FUN_10035910(this), *(int *)((int)this + *(int *)(*(int *)this + 4) + 8) != 0)) {
    *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
         *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2;
    FUN_10034a40((int)this + *(int *)(*(int *)this + 4));
    thunk_FUN_10037930((int)this + *(int *)(*(int *)this + 4));
    return 0;
  }
  return 1;
}

