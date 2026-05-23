/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10034180 @ 0x10034180 */
/* Body size: 185 addresses */


undefined4 __thiscall FUN_10034180(void *this,uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_10036370(this);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_100345d0(this);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = FUN_10034350((int)this);
  if (iVar1 == 0) {
    uVar2 = FUN_100342c0((int)this);
    uVar3 = FUN_100342a0((int)this);
    FUN_10034320(this,uVar3,uVar2);
  }
  if (param_1 != 0xffffffff) {
    iVar1 = FUN_10034350((int)this);
    if (iVar1 == 0) {
      uVar4 = FUN_100342e0((int)this);
      uVar5 = FUN_10034300((int)this);
      if (uVar4 < uVar5) {
        FUN_10034240(this,param_1);
        return 1;
      }
    }
    iVar1 = FUN_1001ffe0(*(uint *)((int)this + 0x4c),(char *)&param_1,1);
    if (iVar1 != 1) {
      return 0xffffffff;
    }
  }
  return 1;
}

