/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041c39 @ 0x10041C39 */


void * __thiscall FUN_10041c39(void *this,char *param_1,char *param_2)

{
  uint *puVar1;
  bool bVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  int local_8;
  
  sVar3 = _strlen(param_1);
  sVar4 = _strlen(param_2);
  uVar5 = *(uint *)(*(int *)(*(int *)this + 4) + 0x30 + (int)this);
  if (sVar4 + sVar3 < uVar5) {
    local_8 = (uVar5 - sVar4) - sVar3;
  }
  else {
    local_8 = 0;
  }
  if (((*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x24) & 10) == 0) &&
     (iVar8 = local_8 + -1, bVar2 = 0 < local_8, iVar7 = local_8, local_8 = iVar8, bVar2)) {
    do {
      uVar5 = FUN_10041da5(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),
                           (uint)*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x2c));
      if (uVar5 == 0xffffffff) {
        puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
        *puVar1 = *puVar1 | 6;
      }
      iVar7 = iVar7 + -1;
      local_8 = local_8 + -1;
    } while (iVar7 != 0);
  }
  if ((sVar3 != 0) &&
     (sVar6 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this) + 0x14))
                        (param_1,sVar3), sVar6 != sVar3)) {
    puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
    *puVar1 = *puVar1 | 6;
  }
  if (((*(byte *)(*(int *)(*(int *)this + 4) + 0x24 + (int)this) & 8) != 0) &&
     (iVar7 = local_8 + -1, bVar2 = 0 < local_8, iVar8 = local_8, local_8 = iVar7, bVar2)) {
    do {
      uVar5 = FUN_10041da5(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),
                           (uint)*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x2c));
      if (uVar5 == 0xffffffff) {
        puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
        *puVar1 = *puVar1 | 6;
      }
      iVar8 = iVar8 + -1;
      local_8 = local_8 + -1;
    } while (iVar8 != 0);
  }
  sVar3 = (**(code **)(**(int **)(*(int *)(*(int *)this + 4) + 4 + (int)this) + 0x14))
                    (param_2,sVar4);
  if (sVar3 != sVar4) {
    puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
    *puVar1 = *puVar1 | 6;
  }
  if (((*(byte *)(*(int *)(*(int *)this + 4) + 0x24 + (int)this) & 2) != 0) && (0 < local_8)) {
    do {
      uVar5 = FUN_10041da5(*(void **)((int)this + *(int *)(*(int *)this + 4) + 4),
                           (uint)*(byte *)((int)this + *(int *)(*(int *)this + 4) + 0x2c));
      if (uVar5 == 0xffffffff) {
        puVar1 = (uint *)(*(int *)(*(int *)this + 4) + 8 + (int)this);
        *puVar1 = *puVar1 | 6;
      }
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return this;
}

