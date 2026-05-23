/* Ghidra decompiled: sound.dll */
/* Function: FUN_10014510 @ 0x10014510 */
/* Body size: 615 addresses */


void __cdecl
FUN_10014510(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar3;
  short sVar4;
  short *psVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  short *psVar12;
  uint *puVar13;
  uint *puVar14;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar2;
  
  local_28 = 0;
  bVar6 = false;
  bVar11 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_20 = *(int *)(param_4 + 0x1e8);
    local_24 = *(int *)(param_4 + 0x1f8);
    iVar9 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar9 + 0x20);
    if (local_8 < *(uint *)(iVar9 + 0x1c)) {
      local_8 = *(uint *)(iVar9 + 0x24);
    }
    local_c = *(short **)(iVar9 + 0x18);
  }
  else {
    bVar3 = *(byte *)(param_4 + 0x9c);
    local_20 = *(int *)(param_4 + 0x78);
    local_24 = *(int *)(param_4 + 0x68);
    if (((bVar3 & 8) != 0) && (local_28 = *(uint *)(param_4 + 0xec) / param_3, local_28 == 0)) {
      local_28 = 1;
    }
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((bVar3 & 2) != 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    bVar11 = bVar3 & 1;
    if ((bVar3 & 1) == 0) {
      if (bVar6) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
      }
      else {
        local_c = *(short **)(param_4 + 0x18);
        local_8 = *(uint *)(param_4 + 0x20);
      }
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_8 = *(uint *)(param_4 + 0x20);
      local_c = *(short **)(local_1c + 0x18);
    }
  }
  puVar13 = (uint *)*param_1;
  uVar1 = param_3;
  psVar12 = (short *)*param_2;
  do {
    while( true ) {
      uVar8 = uVar1;
      sVar4 = *psVar12;
      uVar7 = sVar4 * local_20;
      uVar1 = *puVar13;
      uVar2 = *puVar13;
      *puVar13 = *puVar13 + uVar7;
      if (SCARRY4(uVar2,uVar7)) {
        if (CARRY4(uVar1,uVar7)) {
          *puVar13 = 0x80000000;
        }
        else {
          *puVar13 = 0x7fffffff;
        }
      }
      puVar14 = puVar13 + 1;
      uVar7 = sVar4 * local_24;
      uVar1 = *puVar14;
      uVar2 = *puVar14;
      *puVar14 = *puVar14 + uVar7;
      if (SCARRY4(uVar2,uVar7)) {
        if (CARRY4(uVar1,uVar7)) {
          *puVar14 = 0x80000000;
        }
        else {
          *puVar14 = 0x7fffffff;
        }
      }
      puVar13 = puVar13 + 2;
      psVar12 = psVar12 + 1;
      if ((int)psVar12 < (int)local_8) break;
      psVar5 = local_c;
      if (bVar11 == 0) {
        if (!bVar6) goto LAB_10014706;
        *param_2 = local_c;
      }
      else {
        *param_2 = local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar11 = 0;
          bVar6 = false;
        }
        else {
          psVar5 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      uVar1 = uVar8 - 1;
      psVar12 = local_c;
      local_c = psVar5;
      if (uVar8 - 1 == 0) goto LAB_10014706;
    }
    iVar9 = local_24 - local_28;
    if (local_24 < (int)local_28) {
      iVar9 = 0;
    }
    iVar10 = local_20 - local_28;
    if (local_20 < (int)local_28) {
      iVar10 = 0;
    }
    uVar1 = uVar8 - 1;
    local_24 = iVar9;
    local_20 = iVar10;
  } while (uVar8 - 1 != 0);
LAB_10014706:
  *param_2 = psVar12;
  *param_1 = puVar13;
  iVar9 = param_3 - (uVar8 - 1);
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar9;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar9;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return;
}

