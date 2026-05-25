/* Ghidra decompiled: sound.dll */
/* Function: FUN_10027e20 @ 0x10027E20 */


int __cdecl FUN_10027e20(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte *pbVar11;
  ushort *puVar12;
  ushort *puVar13;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_14;
  byte *local_c;
  uint local_8;
  ushort uVar3;
  
  bVar5 = false;
  bVar10 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(int *)(param_4 + 0x1e8);
    local_28 = *(int *)(param_4 + 0x1f8);
    local_30 = param_4 + 0x1358;
    iVar9 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar9 + 0x20);
    if (local_8 < *(uint *)(iVar9 + 0x1c)) {
      local_8 = *(uint *)(iVar9 + 0x24);
      local_c = *(byte **)(iVar9 + 0x18);
    }
    else {
      local_c = *(byte **)(iVar9 + 0x18);
    }
  }
  else {
    local_2c = *(int *)(param_4 + 0x78);
    local_28 = *(int *)(param_4 + 0x68);
    local_30 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    bVar10 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar5) {
        local_c = *(byte **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
      }
      else {
        local_c = *(byte **)(param_4 + 0x18);
        local_8 = *(uint *)(param_4 + 0x20);
      }
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_8 = *(uint *)(param_4 + 0x20);
      local_c = *(byte **)(local_1c + 0x18);
    }
  }
  puVar12 = (ushort *)*param_1;
  iVar9 = param_3;
  pbVar11 = (byte *)*param_2;
LAB_10027f26:
  do {
    iVar8 = iVar9;
    iVar9 = (uint)*pbVar11 * 0x100 + -0x8000;
    if ((int)(pbVar11 + 1) < (int)local_8) {
      iVar7 = (uint)pbVar11[1] * 0x100 + -0x8000;
    }
    else {
      iVar7 = 0;
      if (bVar5) {
        iVar7 = (uint)*local_c * 0x100 + -0x8000;
      }
    }
    iVar9 = ((int)((iVar7 - iVar9) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + iVar9;
    uVar2 = *puVar12;
    uVar6 = (ushort)((uint)(iVar9 * local_2c) >> 0x10);
    uVar3 = *puVar12;
    *puVar12 = *puVar12 + uVar6;
    if (SCARRY2(uVar3,uVar6)) {
      if (CARRY2(uVar2,uVar6)) {
        *puVar12 = 0x8000;
      }
      else {
        *puVar12 = 0x7fff;
      }
    }
    puVar13 = puVar12 + 1;
    uVar2 = *puVar13;
    uVar6 = (ushort)((uint)(iVar9 * local_28) >> 0x10);
    uVar3 = *puVar13;
    *puVar13 = *puVar13 + uVar6;
    if (SCARRY2(uVar3,uVar6)) {
      if (CARRY2(uVar2,uVar6)) {
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
    pbVar11 = (byte *)(*param_2 + *(int *)(local_30 + 4));
    if ((int)local_8 <= (int)pbVar11) {
      if (bVar10 == 0) {
        if (!bVar5) goto LAB_10028085;
        local_14 = local_14 + 1;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
        iVar9 = iVar8 + -1;
        pbVar11 = local_c;
        if (iVar8 + -1 != 0) goto LAB_10027f26;
      }
      local_14 = local_14 + 1;
      *(undefined4 *)(local_30 + 4) = 0;
      *param_2 = (int)local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar10 = 0;
        bVar5 = false;
        pbVar11 = local_c;
      }
      else {
        pbVar11 = local_c;
        local_c = *(byte **)(local_1c + 0xd8);
      }
    }
    iVar9 = iVar8 + -1;
    if (iVar8 + -1 == 0) {
LAB_10028085:
      iVar9 = *(int *)(local_30 + 4);
      *(undefined4 *)(local_30 + 4) = 0;
      *param_2 = (int)pbVar11;
      *param_1 = puVar12;
      if (param_5 == 1) {
        *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar9;
        *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
        return param_3 - (iVar8 + -1);
      }
      *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar9;
      *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
      return param_3 - (iVar8 + -1);
    }
  } while( true );
}

