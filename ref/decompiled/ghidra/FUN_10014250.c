/* Ghidra decompiled: sound.dll */
/* Function: FUN_10014250 @ 0x10014250 */
/* Body size: 549 addresses */


void __cdecl
FUN_10014250(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  short *psVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar2;
  
  bVar8 = 0;
  bVar3 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    iVar6 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar6 + 0x20);
    if (local_8 < *(uint *)(iVar6 + 0x1c)) {
      local_8 = *(uint *)(iVar6 + 0x24);
    }
    local_c = *(short **)(iVar6 + 0x18);
    bVar12 = local_8 == *(uint *)(iVar6 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar12)) {
      bVar3 = true;
    }
  }
  else {
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar12 = false;
    }
    else {
      bVar12 = true;
    }
    bVar8 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar12) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_10014306;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10014306:
  puVar10 = (uint *)*param_1;
  iVar6 = param_3;
  psVar9 = (short *)*param_2;
  do {
    while( true ) {
      iVar7 = iVar6;
      uVar5 = *psVar9 * 0x10000;
      uVar1 = *puVar10;
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar5;
      if (SCARRY4(uVar2,uVar5)) {
        if (CARRY4(uVar1,uVar5)) {
          uVar5 = 0x80000000;
          *puVar10 = 0x80000000;
        }
        else {
          uVar5 = 0x7fffffff;
          *puVar10 = 0x7fffffff;
        }
      }
      puVar11 = puVar10 + 1;
      uVar1 = *puVar11;
      uVar2 = *puVar11;
      *puVar11 = *puVar11 + uVar5;
      if (SCARRY4(uVar2,uVar5)) {
        if (CARRY4(uVar1,uVar5)) {
          *puVar11 = 0x80000000;
        }
        else {
          *puVar11 = 0x7fffffff;
        }
      }
      puVar10 = puVar10 + 2;
      psVar9 = psVar9 + 1;
      if ((int)psVar9 < (int)local_8) break;
      psVar4 = local_c;
      if (bVar8 == 0) {
        if (!bVar12) goto LAB_10014404;
        *param_2 = local_c;
        if (bVar3) {
          bVar12 = false;
        }
      }
      else {
        *param_2 = local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar8 = 0;
          bVar12 = false;
        }
        else {
          psVar4 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      iVar6 = iVar7 + -1;
      psVar9 = local_c;
      local_c = psVar4;
      if (iVar7 + -1 == 0) goto LAB_10014404;
    }
    iVar6 = iVar7 + -1;
  } while (iVar7 + -1 != 0);
LAB_10014404:
  *param_2 = psVar9;
  *param_1 = puVar10;
  iVar6 = param_3 - (iVar7 + -1);
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar6;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar6;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return;
}

