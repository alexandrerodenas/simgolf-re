/* Ghidra decompiled: sound.dll */
/* Function: FUN_10014d20 @ 0x10014D20 */
/* Body size: 994 addresses */


int __cdecl FUN_10014d20(undefined4 *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  byte bVar3;
  short *psVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  short *psVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  int local_38;
  uint local_30;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar2;
  
  local_28 = 0;
  bVar10 = 0;
  bVar5 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_20 = *(int *)(param_4 + 0x1e8);
    local_24 = *(int *)(param_4 + 0x1f8);
    local_30 = *(uint *)(param_4 + 0x220);
    if ((local_20 == 0x10000) && (local_24 == 0x10000)) {
      if (local_30 == 0x10000) {
        iVar6 = thunk_FUN_10014250(param_1,param_2,param_3,param_4,1);
        return iVar6;
      }
    }
    else if (local_30 == 0x10000) {
      iVar6 = thunk_FUN_10014510(param_1,param_2,param_3,param_4,1);
      return iVar6;
    }
    local_38 = param_4 + 0x1358;
    iVar6 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar6 + 0x20);
    if (local_8 < *(uint *)(iVar6 + 0x1c)) {
      local_8 = *(uint *)(iVar6 + 0x24);
    }
    local_c = *(short **)(iVar6 + 0x18);
    bVar14 = local_8 == *(uint *)(iVar6 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar14)) {
      bVar5 = true;
    }
    goto LAB_10014efb;
  }
  bVar3 = *(byte *)(param_4 + 0x9c);
  local_20 = *(int *)(param_4 + 0x78);
  local_24 = *(int *)(param_4 + 0x68);
  if (((bVar3 & 8) != 0) && (local_28 = *(uint *)(param_4 + 0xec) / param_3, local_28 == 0)) {
    local_28 = 1;
  }
  local_30 = *(uint *)(param_4 + 0x4c);
  if ((local_20 == 0x10000) && (local_24 == 0x10000)) {
    if (local_30 == 0x10000) {
      if (local_28 == 0) {
        iVar6 = thunk_FUN_10014250(param_1,param_2,param_3,param_4,param_5);
        return iVar6;
      }
      goto LAB_10014e78;
    }
  }
  else {
LAB_10014e78:
    if (local_30 == 0x10000) {
      iVar6 = thunk_FUN_10014510(param_1,param_2,param_3,param_4,param_5);
      return iVar6;
    }
  }
  local_38 = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((bVar3 & 2) != 0)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  bVar10 = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    if (bVar14) {
      local_c = *(short **)(param_4 + 0xd8);
      local_8 = *(uint *)(param_4 + 0xd4);
      goto LAB_10014efb;
    }
    local_c = *(short **)(param_4 + 0x18);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(short **)(local_1c + 0x18);
  }
  local_8 = *(uint *)(param_4 + 0x20);
LAB_10014efb:
  puVar12 = (uint *)*param_1;
  uVar1 = param_3;
  psVar11 = (short *)*param_2;
  do {
    while( true ) {
      uVar8 = uVar1;
      if ((int)(psVar11 + 1) < (int)local_8) {
        iVar6 = (int)psVar11[1];
      }
      else {
        iVar6 = 0;
        if ((bVar14) && (iVar6 = (int)*local_c, bVar5)) {
          bVar14 = false;
        }
      }
      iVar6 = ((int)((iVar6 - *psVar11) * (uint)*(ushort *)(local_38 + 2)) >> 0x10) + (int)*psVar11;
      uVar7 = iVar6 * local_20;
      uVar1 = *puVar12;
      uVar2 = *puVar12;
      *puVar12 = *puVar12 + uVar7;
      if (SCARRY4(uVar2,uVar7)) {
        if (CARRY4(uVar1,uVar7)) {
          *puVar12 = 0x80000000;
        }
        else {
          *puVar12 = 0x7fffffff;
        }
      }
      puVar13 = puVar12 + 1;
      uVar7 = iVar6 * local_24;
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
      puVar12 = puVar12 + 2;
      puVar13 = (uint *)(local_38 + 2);
      uVar1 = *puVar13;
      *puVar13 = *puVar13 + local_30;
      *(short *)(local_38 + 6) = *(short *)(local_38 + 6) + (ushort)CARRY4(uVar1,local_30);
      psVar11 = (short *)(*param_2 + *(int *)(local_38 + 4) * 2);
      if ((int)psVar11 < (int)local_8) break;
      psVar4 = local_c;
      if (bVar10 == 0) {
        if (!bVar14) goto LAB_1001507b;
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
          psVar4 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      uVar1 = uVar8 - 1;
      psVar11 = local_c;
      local_c = psVar4;
      if (uVar8 - 1 == 0) goto LAB_1001507b;
    }
    iVar6 = local_24 - local_28;
    if (local_24 < (int)local_28) {
      iVar6 = 0;
    }
    iVar9 = local_20 - local_28;
    if (local_20 < (int)local_28) {
      iVar9 = 0;
    }
    uVar1 = uVar8 - 1;
    local_24 = iVar6;
    local_20 = iVar9;
  } while (uVar8 - 1 != 0);
LAB_1001507b:
  iVar6 = *(int *)(local_38 + 4);
  *(undefined4 *)(local_38 + 4) = 0;
  *param_2 = (int)psVar11;
  *param_1 = puVar12;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar6;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (uVar8 - 1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar6;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (uVar8 - 1);
}

