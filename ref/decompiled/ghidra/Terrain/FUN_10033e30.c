/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033e30 @ 0x10033E30 */


void __thiscall FUN_10033e30(void *this,LPCSTR param_1,uint param_2,uint param_3)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  iVar1 = FUN_10033da0(this);
  if (iVar1 == 0) {
    uVar3 = param_2 | 1;
    pvVar2 = (void *)FUN_10033ab0(this);
    pvVar2 = FUN_10035c30(pvVar2,param_1,uVar3,param_3);
    if (pvVar2 != (void *)0x0) {
      return;
    }
  }
  FUN_10033d70((void *)((int)this + *(int *)(*(int *)this + 4)),
               *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2);
  return;
}

