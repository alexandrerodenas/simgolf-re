/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100364b0 @ 0x100364B0 */


int __thiscall FUN_100364b0(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  uVar1 = FUN_10036560((int)this);
  uVar2 = FUN_100344e0((int)this);
  if (uVar1 < uVar2) {
    param_1 = FUN_10035800(this,(char)param_1);
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0xc))(0xffffffff,1,1);
    if (iVar3 == -1) {
      param_1 = -1;
    }
    else {
      iVar3 = FUN_10034350((int)this);
      if ((iVar3 == 0) && (iVar3 = FUN_100347c0((int)this), iVar3 != 0)) {
        iVar3 = FUN_100347c0((int)this);
        iVar4 = FUN_100344e0((int)this);
        uVar1 = iVar3 - (iVar4 + 1);
        puVar5 = (undefined4 *)FUN_100344e0((int)this);
        iVar3 = FUN_100344e0((int)this);
        FUN_10024410((undefined4 *)(iVar3 + 1),puVar5,uVar1);
        pcVar6 = (char *)FUN_100344e0((int)this);
        *pcVar6 = (char)param_1;
      }
    }
  }
  return param_1;
}

