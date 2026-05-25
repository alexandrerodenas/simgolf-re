/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035770 @ 0x10035770 */


void * __thiscall FUN_10035770(void *this,char param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
  bVar1 = IsEmpty((int)this + *(int *)(*(int *)this + 4));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_100355a0((int)this + *(int *)(*(int *)this + 4));
    iVar2 = FUN_10035800(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),param_1);
    if (iVar2 == -1) {
      FUN_10033d70((void *)((int)this + *(int *)(*(int *)this + 4)),
                   *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2);
    }
    FUN_10034a40((int)this + *(int *)(*(int *)this + 4));
  }
  return this;
}

