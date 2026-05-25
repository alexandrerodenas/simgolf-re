/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10033d00 @ 0x10033D00 */


undefined4 __thiscall FUN_10033d00(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10033da0(this);
  if (iVar1 == 0) {
    piVar2 = (int *)FUN_10033ab0(this);
    iVar1 = (**(code **)(*piVar2 + 8))(param_1,param_2);
    if (iVar1 != 0) {
      uVar3 = FUN_10033ab0(this);
      return uVar3;
    }
  }
  FUN_10033d70((void *)((int)this + *(int *)(*(int *)this + 4)),
               *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 2);
  return 0;
}

