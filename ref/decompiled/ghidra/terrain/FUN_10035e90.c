/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10035e90 @ 0x10035E90 */
/* Body size: 117 addresses */


int __thiscall FUN_10035e90(void *this,int param_1)

{
  int iVar1;
  int local_8;
  
  if ((param_1 != DAT_100612d4) && (param_1 != DAT_100612d8)) {
    return -1;
  }
  FUN_10034090((int)this);
  if ((*(int *)((int)this + 0x4c) == -1) || (iVar1 = (**(code **)(*(int *)this + 4))(), iVar1 == -1)
     ) {
    local_8 = -1;
  }
  else {
    local_8 = FUN_1002db50(*(uint *)((int)this + 0x4c),param_1);
  }
  FUN_10034150((int)this);
  return local_8;
}

