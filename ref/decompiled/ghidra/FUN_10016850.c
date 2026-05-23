/* Ghidra decompiled: sound.dll */
/* Function: FUN_10016850 @ 0x10016850 */
/* Body size: 936 addresses */


int __cdecl FUN_10016850(undefined4 *param_1,int *param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  short *psVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  short *psVar10;
  int *piVar11;
  bool bVar12;
  int local_38;
  uint local_30;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  local_28 = 0;
  bVar9 = 0;
  bVar5 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_20 = *(int *)(param_4 + 0x1e8);
    local_24 = *(int *)(param_4 + 0x1f8);
    local_30 = *(uint *)(param_4 + 0x220);
    if ((local_20 == 0x10000) && (local_24 == 0x10000)) {
      if (local_30 == 0x10000) {
        iVar6 = thunk_FUN_10016340(param_1,param_2,param_3,param_4,1);
        return iVar6;
      }
    }
    else if (local_30 == 0x10000) {
      iVar6 = thunk_FUN_100165a0(param_1,param_2,param_3,param_4,1);
      return iVar6;
    }
    local_38 = param_4 + 0x1358;
    iVar6 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar6 + 0x20);
    if (local_8 < *(uint *)(iVar6 + 0x1c)) {
      local_8 = *(uint *)(iVar6 + 0x24);
    }
    local_c = *(short **)(iVar6 + 0x18);
    bVar12 = local_8 == *(uint *)(iVar6 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar12)) {
      bVar5 = true;
    }
    goto LAB_10016a26;
  }
  local_20 = *(int *)(param_4 + 0x78);
  local_24 = *(int *)(param_4 + 0x68);
  local_30 = *(uint *)(param_4 + 0x4c);
  if ((local_20 == 0x10000) && (local_24 == 0x10000)) {
    if (local_30 == 0x10000) {
      if ((*(byte *)(param_4 + 0x9c) & 8) == 0) {
        iVar6 = thunk_FUN_10016340(param_1,param_2,param_3,param_4,param_5);
        return iVar6;
      }
      goto LAB_10016985;
    }
  }
  else {
LAB_10016985:
    if (local_30 == 0x10000) {
      iVar6 = thunk_FUN_100165a0(param_1,param_2,param_3,param_4,param_5);
      return iVar6;
    }
  }
  bVar3 = *(byte *)(param_4 + 0x9c);
  if ((bVar3 & 8) != 0) {
    local_28 = *(uint *)(param_4 + 0xec) / param_3;
  }
  local_38 = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((bVar3 & 2) != 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  bVar9 = bVar3 & 1;
  if ((bVar3 & 1) == 0) {
    if (bVar12) {
      local_c = *(short **)(param_4 + 0xd8);
      local_8 = *(uint *)(param_4 + 0xd4);
      goto LAB_10016a26;
    }
    local_c = *(short **)(param_4 + 0x18);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(short **)(local_1c + 0x18);
  }
  local_8 = *(uint *)(param_4 + 0x20);
LAB_10016a26:
  piVar11 = (int *)*param_1;
  uVar2 = param_3;
  psVar10 = (short *)*param_2;
  do {
    while( true ) {
      uVar7 = uVar2;
      if ((int)(psVar10 + 1) < (int)local_8) {
        iVar6 = (int)psVar10[1];
      }
      else {
        iVar6 = 0;
        if ((bVar12) && (iVar6 = (int)*local_c, bVar5)) {
          bVar12 = false;
        }
      }
      iVar6 = ((int)((iVar6 - *psVar10) * (uint)*(ushort *)(local_38 + 2)) >> 0x10) + (int)*psVar10;
      *piVar11 = iVar6 * local_20;
      piVar11[1] = iVar6 * local_24;
      piVar11 = piVar11 + 2;
      puVar1 = (uint *)(local_38 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + local_30;
      *(short *)(local_38 + 6) = *(short *)(local_38 + 6) + (ushort)CARRY4(uVar2,local_30);
      psVar10 = (short *)(*param_2 + *(int *)(local_38 + 4) * 2);
      if ((int)psVar10 < (int)local_8) break;
      psVar4 = local_c;
      if (bVar9 == 0) {
        if (!bVar12) goto LAB_10016b71;
        *(undefined4 *)(local_38 + 4) = 0;
        *param_2 = (int)local_c;
      }
      else {
        local_14 = local_14 + 1;
        *(undefined4 *)(local_38 + 4) = 0;
        *param_2 = (int)local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar9 = 0;
          bVar12 = false;
        }
        else {
          psVar4 = *(short **)(local_1c + 0xd8);
        }
      }
      uVar2 = uVar7 - 1;
      psVar10 = local_c;
      local_c = psVar4;
      if (uVar7 - 1 == 0) goto LAB_10016b71;
    }
    iVar6 = local_24 - local_28;
    if (local_24 < (int)local_28) {
      iVar6 = 0;
    }
    iVar8 = local_20 - local_28;
    if (local_20 < (int)local_28) {
      iVar8 = 0;
    }
    uVar2 = uVar7 - 1;
    local_24 = iVar6;
    local_20 = iVar8;
  } while (uVar7 - 1 != 0);
LAB_10016b71:
  iVar6 = *(int *)(local_38 + 4);
  *(undefined4 *)(local_38 + 4) = 0;
  *param_2 = (int)psVar10;
  *param_1 = piVar11;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar6;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (uVar7 - 1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar6;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (uVar7 - 1);
}

