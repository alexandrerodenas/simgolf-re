/* Ghidra decompiled: sound.dll */
/* Function: FUN_10014820 @ 0x10014820 */


int __cdecl FUN_10014820(undefined4 *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  short *psVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  short *psVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  int local_38;
  uint local_34;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  local_28 = 0;
  bVar10 = 0;
  bVar4 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_20 = *(int *)(param_4 + 0x1e8);
    local_24 = *(int *)(param_4 + 0x1f8);
    local_34 = *(uint *)(param_4 + 0x220);
    if ((local_20 == 0x10000) && (local_24 == 0x10000)) {
      if (local_34 == 0x10000) {
        iVar5 = thunk_FUN_10014250(param_1,param_2,param_3,param_4,1);
        return iVar5;
      }
    }
    else if (local_34 == 0x10000) {
      iVar5 = thunk_FUN_10014510(param_1,param_2,param_3,param_4,1);
      return iVar5;
    }
    local_38 = param_4 + 0x1358;
    iVar5 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar5 + 0x20);
    if (local_8 < *(uint *)(iVar5 + 0x1c)) {
      local_8 = *(uint *)(iVar5 + 0x24);
    }
    local_c = *(short **)(iVar5 + 0x18);
    bVar14 = local_8 == *(uint *)(iVar5 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar14)) {
      bVar4 = true;
    }
    goto LAB_100149fb;
  }
  bVar2 = *(byte *)(param_4 + 0x9c);
  local_20 = *(int *)(param_4 + 0x78);
  local_24 = *(int *)(param_4 + 0x68);
  if (((bVar2 & 8) != 0) && (local_28 = *(uint *)(param_4 + 0xec) / param_3, local_28 == 0)) {
    local_28 = 1;
  }
  local_34 = *(uint *)(param_4 + 0x4c);
  if ((local_20 == 0x10000) && (local_24 == 0x10000)) {
    if (local_34 == 0x10000) {
      if (local_28 == 0) {
        iVar5 = thunk_FUN_10014250(param_1,param_2,param_3,param_4,param_5);
        return iVar5;
      }
      goto LAB_10014978;
    }
  }
  else {
LAB_10014978:
    if (local_34 == 0x10000) {
      iVar5 = thunk_FUN_10014510(param_1,param_2,param_3,param_4,param_5);
      return iVar5;
    }
  }
  local_38 = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((bVar2 & 2) != 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  bVar10 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    if (bVar14) {
      local_c = *(short **)(param_4 + 0xd8);
      local_8 = *(uint *)(param_4 + 0xd4);
      goto LAB_100149fb;
    }
    local_c = *(short **)(param_4 + 0x18);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(short **)(local_1c + 0x18);
  }
  local_8 = *(uint *)(param_4 + 0x20);
LAB_100149fb:
  puVar12 = (uint *)*param_1;
  uVar8 = param_3;
  psVar11 = (short *)*param_2;
  do {
    while( true ) {
      uVar7 = uVar8;
      if ((int)(psVar11 + 1) < (int)local_8) {
        iVar5 = (int)psVar11[1];
      }
      else {
        iVar5 = 0;
        if ((bVar14) && (iVar5 = (int)*local_c, bVar4)) {
          bVar14 = false;
        }
      }
      iVar5 = ((int)((iVar5 - *psVar11) * (uint)*(ushort *)(local_38 + 2)) >> 0x10) + (int)*psVar11;
      uVar6 = iVar5 * local_20;
      uVar8 = *puVar12;
      uVar1 = *puVar12;
      *puVar12 = *puVar12 + uVar6;
      if (SCARRY4(uVar1,uVar6)) {
        if (CARRY4(uVar8,uVar6)) {
          *puVar12 = 0x80000000;
        }
        else {
          *puVar12 = 0x7fffffff;
        }
      }
      puVar13 = puVar12 + 1;
      uVar6 = iVar5 * local_24;
      uVar8 = *puVar13;
      uVar1 = *puVar13;
      *puVar13 = *puVar13 + uVar6;
      if (SCARRY4(uVar1,uVar6)) {
        if (CARRY4(uVar8,uVar6)) {
          *puVar13 = 0x80000000;
        }
        else {
          *puVar13 = 0x7fffffff;
        }
      }
      puVar12 = puVar12 + 2;
      uVar8 = *(uint *)(local_38 + 2) + local_34;
      if (CARRY4(*(uint *)(local_38 + 2),local_34)) {
        *(short *)(local_38 + 6) = *(short *)(local_38 + 6) + 1;
      }
      *(uint *)(local_38 + 2) = uVar8;
      psVar11 = (short *)(*param_2 + (uVar8 >> 0x10) * 2);
      if ((int)psVar11 < (int)local_8) break;
      psVar3 = local_c;
      if (bVar10 == 0) {
        if (!bVar14) goto LAB_10014b8f;
        *(undefined4 *)(local_38 + 4) = 0;
        *param_2 = (int)local_c;
      }
      else {
        *(undefined4 *)(local_38 + 4) = 0;
        *param_2 = (int)local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar10 = 0;
          bVar14 = false;
        }
        else {
          psVar3 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      uVar8 = uVar7 - 1;
      psVar11 = local_c;
      local_c = psVar3;
      if (uVar7 - 1 == 0) goto LAB_10014b8f;
    }
    iVar5 = local_24 - local_28;
    if (local_24 < (int)local_28) {
      iVar5 = 0;
    }
    iVar9 = local_20 - local_28;
    if (local_20 < (int)local_28) {
      iVar9 = 0;
    }
    uVar8 = uVar7 - 1;
    local_24 = iVar5;
    local_20 = iVar9;
  } while (uVar7 - 1 != 0);
LAB_10014b8f:
  iVar5 = *(int *)(local_38 + 4);
  *(undefined4 *)(local_38 + 4) = 0;
  *param_2 = (int)psVar11;
  *param_1 = puVar12;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar5;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (uVar7 - 1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar5;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (uVar7 - 1);
}

