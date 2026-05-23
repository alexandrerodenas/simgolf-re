/* Ghidra decompiled: sound.dll */
/* Function: FUN_10027730 @ 0x10027730 */
/* Body size: 725 addresses */


int __cdecl FUN_10027730(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar4;
  short *psVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  short *psVar11;
  ushort *puVar12;
  ushort *puVar13;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  ushort uVar3;
  
  bVar6 = false;
  bVar10 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(int *)(param_4 + 0x1e8);
    local_28 = *(int *)(param_4 + 0x1f8);
    local_30 = param_4 + 0x1358;
    iVar8 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar8 + 0x20);
    if (local_8 < *(uint *)(iVar8 + 0x1c)) {
      local_8 = *(uint *)(iVar8 + 0x24);
      local_c = *(short **)(iVar8 + 0x18);
    }
    else {
      local_c = *(short **)(iVar8 + 0x18);
    }
  }
  else {
    local_2c = *(int *)(param_4 + 0x78);
    local_28 = *(int *)(param_4 + 0x68);
    local_30 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    bVar10 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
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
  puVar12 = (ushort *)*param_1;
  iVar8 = param_3;
  psVar11 = (short *)*param_2;
  do {
    while( true ) {
      iVar9 = iVar8;
      if ((int)(psVar11 + 1) < (int)local_8) {
        iVar8 = (int)psVar11[1];
      }
      else {
        iVar8 = 0;
        if (bVar6) {
          iVar8 = (int)*local_c;
        }
      }
      iVar8 = ((int)((iVar8 - *psVar11) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + (int)*psVar11;
      uVar2 = *puVar12;
      uVar7 = (ushort)((uint)(iVar8 * local_2c) >> 0x10);
      uVar3 = *puVar12;
      *puVar12 = *puVar12 + uVar7;
      if (SCARRY2(uVar3,uVar7)) {
        if (CARRY2(uVar2,uVar7)) {
          *puVar12 = 0x8000;
        }
        else {
          *puVar12 = 0x7fff;
        }
      }
      puVar13 = puVar12 + 1;
      uVar2 = *puVar13;
      uVar7 = (ushort)((uint)(iVar8 * local_28) >> 0x10);
      uVar3 = *puVar13;
      *puVar13 = *puVar13 + uVar7;
      if (SCARRY2(uVar3,uVar7)) {
        if (CARRY2(uVar2,uVar7)) {
          *puVar13 = 0x8000;
        }
        else {
          *puVar13 = 0x7fff;
        }
      }
      puVar12 = puVar12 + 2;
      puVar1 = (uint *)(local_30 + 2);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 + 0x5ce1;
      *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)(0xffffa31e < uVar4);
      psVar11 = (short *)(*param_2 + *(int *)(local_30 + 4) * 2);
      if ((int)psVar11 < (int)local_8) break;
      psVar5 = local_c;
      if (bVar10 == 0) {
        if (!bVar6) goto LAB_1002797e;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
      }
      else {
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar10 = 0;
          bVar6 = false;
        }
        else {
          psVar5 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      iVar8 = iVar9 + -1;
      psVar11 = local_c;
      local_c = psVar5;
      if (iVar9 + -1 == 0) goto LAB_1002797e;
    }
    iVar8 = iVar9 + -1;
  } while (iVar9 + -1 != 0);
LAB_1002797e:
  iVar8 = *(int *)(local_30 + 4);
  *(undefined4 *)(local_30 + 4) = 0;
  *param_2 = (int)psVar11;
  *param_1 = puVar12;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar8;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (iVar9 + -1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar8;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (iVar9 + -1);
}

