/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033de0 @ 0x10033DE0 */


void __thiscall FUN_10033de0(void *this,int param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10033ab0(this);
  pvVar1 = FUN_10035b80(pvVar1,param_1);
  if (pvVar1 == (void *)0x0) {
    FUN_10033d70((void *)((int)this + *(int *)(*(int *)this + 4)),
                 *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2);
  }
  return;
}

