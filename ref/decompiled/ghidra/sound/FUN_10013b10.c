/* Ghidra decompiled: sound.dll */
/* Function: FUN_10013b10 @ 0x10013B10 */
/* Body size: 549 addresses */


void __cdecl
FUN_10013b10(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_EBX;
  short *psVar7;
  uint *puVar8;
  uint *puVar9;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar2;
  
  bVar3 = false;
  local_18 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_24 = *(int *)(param_4 + 0x1e8);
    local_20 = *(int *)(param_4 + 0x1f8);
    iVar5 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar5 + 0x20);
    if (local_8 < *(uint *)(iVar5 + 0x1c)) {
      local_8 = *(uint *)(iVar5 + 0x24);
    }
    local_c = *(short **)(iVar5 + 0x18);
  }
  else {
    local_24 = *(int *)(param_4 + 0x78);
    local_20 = *(int *)(param_4 + 0x68);
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    unaff_EBX = *(byte *)(param_4 + 0x9c) & 1;
    local_18 = unaff_EBX;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar3) {
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
  puVar8 = (uint *)*param_1;
  iVar5 = param_3;
  psVar7 = (short *)*param_2;
LAB_10013be2:
  do {
    iVar6 = iVar5;
    uVar4 = *psVar7 * local_24;
    uVar1 = *puVar8;
    uVar2 = *puVar8;
    *puVar8 = *puVar8 + uVar4;
    if (SCARRY4(uVar2,uVar4)) {
      if (CARRY4(uVar1,uVar4)) {
        *puVar8 = 0x80000000;
      }
      else {
        *puVar8 = 0x7fffffff;
      }
    }
    puVar9 = puVar8 + 1;
    uVar4 = psVar7[1] * local_20;
    uVar1 = *puVar9;
    uVar2 = *puVar9;
    *puVar9 = *puVar9 + uVar4;
    if (SCARRY4(uVar2,uVar4)) {
      if (CARRY4(uVar1,uVar4)) {
        *puVar9 = 0x80000000;
      }
      else {
        *puVar9 = 0x7fffffff;
      }
    }
    puVar8 = puVar8 + 2;
    psVar7 = psVar7 + 2;
    if ((int)local_8 <= (int)psVar7) {
      if (local_18 == 0) {
        if (!bVar3) goto LAB_10013cc4;
        local_14 = local_14 + 1;
        *(undefined4 *)(unaff_EBX + 4) = 0;
        *param_2 = local_c;
        iVar5 = iVar6 + -1;
        psVar7 = local_c;
        if (iVar6 + -1 != 0) goto LAB_10013be2;
      }
      local_14 = local_14 + 1;
      *param_2 = local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        local_18 = 0;
        bVar3 = false;
        psVar7 = local_c;
      }
      else {
        psVar7 = local_c;
        local_c = *(short **)(local_1c + 0xd8);
      }
    }
    iVar5 = iVar6 + -1;
    if (iVar6 + -1 == 0) {
LAB_10013cc4:
      *param_2 = psVar7;
      *param_1 = puVar8;
      iVar5 = param_3 - (iVar6 + -1);
      if (param_5 == 1) {
        *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar5;
        *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
        return;
      }
      *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar5;
      *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
      return;
    }
  } while( true );
}

