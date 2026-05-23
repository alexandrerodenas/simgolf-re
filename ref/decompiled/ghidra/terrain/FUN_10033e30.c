/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033e30 @ 0x10033E30 */
/* Body size: 94 addresses */


void __thiscall FUN_10033e30(void *this,LPCSTR param_1,uint param_2,uint param_3)

{
  int iVar1;
  void *this_00;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_10033da0(this);
  if (iVar1 == 0) {
    uVar3 = param_2 | 1;
    this_00 = (void *)FUN_10033ab0(this);
    piVar2 = FUN_10035c30(this_00,param_1,uVar3,param_3);
    if (piVar2 != (int *)0x0) {
      return;
    }
  }
  FUN_10033d70((void *)((int)this + *(int *)(*(int *)this + 4)),
               *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2);
  return;
}

