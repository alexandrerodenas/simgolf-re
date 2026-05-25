/* Ghidra decompiled: sound.dll */
/* Function: FUN_10017c10 @ 0x10017C10 */


void __cdecl
FUN_10017c10(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  short *psVar10;
  uint *puVar11;
  uint *puVar12;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar3;
  
  bVar4 = false;
  bVar9 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    iVar8 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar8 + 0x20);
    if (local_8 < *(uint *)(iVar8 + 0x1c)) {
      local_8 = *(uint *)(iVar8 + 0x24);
    }
    local_c = *(short **)(iVar8 + 0x18);
  }
  else {
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar9 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar4) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_10017ca7;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10017ca7:
  psVar10 = (short *)*param_2;
  iVar8 = 0;
  iVar5 = param_3;
  puVar12 = (uint *)*param_1;
  do {
    puVar11 = puVar12;
    iVar7 = iVar5;
    uVar6 = *psVar10 * 0x10000;
    uVar2 = *puVar11;
    uVar3 = *puVar11;
    *puVar11 = *puVar11 + uVar6;
    if (SCARRY4(uVar3,uVar6)) {
      if (CARRY4(uVar2,uVar6)) {
        uVar6 = 0x80000000;
        *puVar11 = 0x80000000;
      }
      else {
        uVar6 = 0x7fffffff;
        *puVar11 = 0x7fffffff;
      }
    }
    puVar12 = puVar11 + 1;
    uVar2 = *puVar12;
    uVar3 = *puVar12;
    *puVar12 = *puVar12 + uVar6;
    if (SCARRY4(uVar3,uVar6)) {
      if (CARRY4(uVar2,uVar6)) {
        *puVar12 = 0x80000000;
      }
      else {
        *puVar12 = 0x7fffffff;
      }
      iVar8 = iVar8 + 1;
      if (1 < iVar8) goto LAB_10017d0e;
    }
    else {
LAB_10017d0e:
      iVar8 = 0;
      psVar10 = psVar10 + 1;
      if ((int)local_8 <= (int)psVar10) {
        if (bVar9 == 0) {
          if (!bVar4) break;
          local_14 = local_14 + 1;
          *param_2 = local_c;
          psVar10 = local_c;
        }
        else {
          local_14 = local_14 + 1;
          *param_2 = local_c;
          local_8 = *(uint *)(local_1c + 0xd4);
          iVar8 = *(int *)(local_1c + 0xb4);
          if (iVar8 == 0) {
            bVar9 = 0;
            bVar4 = false;
            piVar1 = (int *)(local_1c + 0xd8);
            local_1c = iVar8;
            psVar10 = local_c;
            iVar8 = *piVar1;
          }
          else {
            local_1c = iVar8;
            psVar10 = local_c;
            local_c = *(short **)(iVar8 + 0xd8);
          }
        }
      }
    }
    iVar5 = iVar7 + -1;
    puVar12 = puVar11 + 2;
  } while (iVar5 != 0);
  *param_2 = psVar10;
  *param_1 = puVar11 + 2;
  iVar8 = param_3 - (iVar7 + -1);
  if (param_5 != 1) {
    *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar8;
    *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
    return;
  }
  *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar8;
  *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
  return;
}

