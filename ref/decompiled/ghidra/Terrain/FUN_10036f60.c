/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10036f60 @ 0x10036F60 */


void * __thiscall FUN_10036f60(void *this,char *param_1,char *param_2)

{
  bool bVar1;
  size_t sVar2;
  size_t sVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  int local_18;
  int local_c;
  
  sVar2 = _strlen(param_1);
  sVar3 = _strlen(param_2);
  if (sVar3 + sVar2 < *(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x30)) {
    local_18 = *(int *)((int)this + *(int *)(*(int *)this + 4) + 0x30) - (sVar3 + sVar2);
  }
  else {
    local_18 = 0;
  }
  local_c = local_18;
  if ((*(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) & 10) == 0) {
    while (iVar6 = local_c + -1, bVar1 = 0 < local_c, local_c = iVar6, bVar1) {
      uVar4 = FUN_10034240(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),
                           (uint)*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x2c));
      if (uVar4 == 0xffffffff) {
        *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
             *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 6;
      }
    }
  }
  if ((sVar2 != 0) &&
     (sVar5 = FUN_100371c0(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),param_1,sVar2),
     sVar5 != sVar2)) {
    *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
         *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 6;
  }
  if ((*(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) & 8) != 0) {
    while (iVar6 = local_c + -1, bVar1 = 0 < local_c, local_c = iVar6, bVar1) {
      uVar4 = FUN_10034240(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),
                           (uint)*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x2c));
      if (uVar4 == 0xffffffff) {
        *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
             *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 6;
      }
    }
  }
  sVar2 = FUN_100371c0(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),param_2,sVar3);
  if (sVar2 != sVar3) {
    *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
         *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 6;
  }
  if ((*(uint *)((int)this + *(int *)(*(int *)this + 4) + 0x24) & 2) != 0) {
    while (iVar6 = local_c + -1, 0 < local_c) {
      uVar4 = FUN_10034240(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),
                           (uint)*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x2c));
      local_c = iVar6;
      if (uVar4 == 0xffffffff) {
        *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) =
             *(uint *)((int)this + *(int *)(*(int *)this + 4) + 8) | 6;
      }
    }
  }
  return this;
}

