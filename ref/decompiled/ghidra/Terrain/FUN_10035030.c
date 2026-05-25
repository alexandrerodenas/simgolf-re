/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035030 @ 0x10035030 */


void * __thiscall FUN_10035030(void *this,int param_1)

{
  if (param_1 != 0) {
    *(undefined **)this = &DAT_10061328;
    FUN_10034a90((undefined4 *)((int)this + 0xc));
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_10061324;
  *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) =
       *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) | 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}

