/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036a50 @ 0x10036A50 */


void * __thiscall FUN_10036a50(void *this,int param_1)

{
  if (param_1 != 0) {
    *(undefined **)this = &DAT_10061394;
    FUN_10034a90((undefined4 *)((int)this + 8));
  }
  *(undefined ***)((int)this + *(int *)(*(int *)this + 4)) = &PTR_FUN_10061390;
  *(undefined4 *)((int)this + 4) = 0;
  return this;
}

