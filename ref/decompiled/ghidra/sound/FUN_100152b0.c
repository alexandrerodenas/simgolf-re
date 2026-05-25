/* Ghidra decompiled: sound.dll */
/* Function: FUN_100152b0 @ 0x100152B0 */


int __cdecl FUN_100152b0(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_1c;
  int local_14;
  byte *local_c;
  uint local_8;
  uint uVar2;
  
  bVar4 = false;
  bVar9 = 0;
  local_14 = 0;
  local_1c = 0;
  local_34 = 0;
  if (param_5 == 1) {
    local_2c = *(int *)(param_4 + 0x1e8);
    local_28 = *(int *)(param_4 + 0x1f8);
    local_24 = *(uint *)(param_4 + 0x220);
    local_30 = param_4 + 0x1358;
    iVar8 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar8 + 0x20);
    if (local_8 < *(uint *)(iVar8 + 0x1c)) {
      local_8 = *(uint *)(iVar8 + 0x24);
    }
    local_c = *(byte **)(iVar8 + 0x18);
  }
  else {
    local_2c = *(int *)(param_4 + 0x78);
    local_28 = *(int *)(param_4 + 0x68);
    local_24 = *(uint *)(param_4 + 0x4c);
    local_30 = param_4 + 0xb8;
    local_34 = param_4;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar9 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar4) {
        local_c = *(byte **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_10015391;
      }
      local_c = *(byte **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(byte **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10015391:
  puVar11 = (uint *)*param_1;
  iVar8 = param_3;
  pbVar10 = (byte *)*param_2;
  do {
    while( true ) {
      iVar7 = iVar8;
      iVar8 = (uint)*pbVar10 * 0x100 + -0x8000;
      if ((int)(pbVar10 + 2) < (int)local_8) {
        iVar5 = (uint)pbVar10[2] * 0x100 + -0x8000;
      }
      else {
        iVar5 = 0;
        if (bVar4) {
          iVar5 = (uint)*local_c * 0x100 + -0x8000;
        }
      }
      uVar6 = (((int)((iVar5 - iVar8) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + iVar8) *
              local_2c;
      uVar1 = *puVar11;
      uVar2 = *puVar11;
      *puVar11 = *puVar11 + uVar6;
      if (SCARRY4(uVar2,uVar6)) {
        if (CARRY4(uVar1,uVar6)) {
          *puVar11 = 0x80000000;
        }
        else {
          *puVar11 = 0x7fffffff;
        }
      }
      puVar12 = puVar11 + 1;
      iVar8 = (uint)pbVar10[1] * 0x100 + -0x8000;
      if ((int)(pbVar10 + 2) < (int)local_8) {
        iVar5 = (uint)pbVar10[3] * 0x100 + -0x8000;
      }
      else {
        iVar5 = 0;
        if (bVar4) {
          iVar5 = (uint)local_c[1] * 0x100 + -0x8000;
        }
      }
      uVar6 = (((int)((iVar5 - iVar8) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + iVar8) *
              local_28;
      uVar1 = *puVar12;
      uVar2 = *puVar12;
      *puVar12 = *puVar12 + uVar6;
      if (SCARRY4(uVar2,uVar6)) {
        if (CARRY4(uVar1,uVar6)) {
          *puVar12 = 0x80000000;
        }
        else {
          *puVar12 = 0x7fffffff;
        }
      }
      puVar11 = puVar11 + 2;
      puVar12 = (uint *)(local_30 + 2);
      uVar1 = *puVar12;
      *puVar12 = *puVar12 + local_24;
      *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)CARRY4(uVar1,local_24);
      pbVar10 = (byte *)(*param_2 + *(int *)(local_30 + 4) * 2);
      if ((int)pbVar10 < (int)local_8) break;
      pbVar3 = local_c;
      if (bVar9 == 0) {
        if (!bVar4) goto LAB_10015545;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
      }
      else {
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar9 = 0;
          bVar4 = false;
        }
        else {
          pbVar3 = *(byte **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      iVar8 = iVar7 + -1;
      pbVar10 = local_c;
      local_c = pbVar3;
      if (iVar7 + -1 == 0) goto LAB_10015545;
    }
    iVar8 = iVar7 + -1;
  } while (iVar7 + -1 != 0);
LAB_10015545:
  iVar8 = *(int *)(local_30 + 4);
  *(undefined4 *)(local_30 + 4) = 0;
  *param_2 = (int)pbVar10;
  *param_1 = puVar11;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar8;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (iVar7 + -1);
  }
  *(int *)(local_34 + 0x88) = *(int *)(local_34 + 0x88) + iVar8;
  *(int *)(local_34 + 0xcc) = *(int *)(local_34 + 0xcc) + local_14;
  return param_3 - (iVar7 + -1);
}

