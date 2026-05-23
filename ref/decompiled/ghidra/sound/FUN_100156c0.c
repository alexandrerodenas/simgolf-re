/* Ghidra decompiled: sound.dll */
/* Function: FUN_100156c0 @ 0x100156C0 */
/* Body size: 758 addresses */


int __cdecl FUN_100156c0(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  uint *puVar10;
  uint *puVar11;
  bool bVar12;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_20;
  int local_18;
  byte *local_10;
  uint local_c;
  uint uVar2;
  
  bVar12 = true;
  bVar8 = 0;
  local_18 = 0;
  bVar3 = false;
  local_20 = 0;
  if (param_5 == 1) {
    local_30 = *(int *)(param_4 + 0x1e8);
    local_2c = *(int *)(param_4 + 0x1f8);
    local_28 = *(uint *)(param_4 + 0x220);
    local_34 = param_4 + 0x1358;
    iVar7 = *(int *)(param_4 + 8);
    local_c = *(uint *)(iVar7 + 0x20);
    if (local_c < *(uint *)(iVar7 + 0x1c)) {
      local_c = *(uint *)(iVar7 + 0x24);
    }
    local_10 = *(byte **)(iVar7 + 0x18);
    bVar12 = local_c == *(uint *)(iVar7 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar12)) {
      bVar3 = true;
    }
  }
  else {
    local_30 = *(int *)(param_4 + 0x78);
    local_2c = *(int *)(param_4 + 0x68);
    local_28 = *(uint *)(param_4 + 0x4c);
    local_34 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar12 = false;
    }
    bVar8 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar12) {
        local_10 = *(byte **)(param_4 + 0xd8);
        local_c = *(uint *)(param_4 + 0xd4);
        goto LAB_100157ba;
      }
      local_10 = *(byte **)(param_4 + 0x18);
    }
    else {
      local_20 = *(int *)(param_4 + 0xb4);
      local_10 = *(byte **)(local_20 + 0x18);
    }
    local_c = *(uint *)(param_4 + 0x20);
  }
LAB_100157ba:
  puVar10 = (uint *)*param_1;
  iVar7 = param_3;
  pbVar9 = (byte *)*param_2;
LAB_100157cf:
  do {
    iVar6 = iVar7;
    iVar7 = (uint)*pbVar9 * 0x100 + -0x8000;
    if ((int)(pbVar9 + 1) < (int)local_c) {
      iVar4 = (uint)pbVar9[1] * 0x100 + -0x8000;
    }
    else {
      iVar4 = 0;
      if ((bVar12) && (iVar4 = (uint)*local_10 * 0x100 + -0x8000, bVar3)) {
        bVar12 = false;
      }
    }
    iVar7 = ((int)((iVar4 - iVar7) * (uint)*(ushort *)(local_34 + 2)) >> 0x10) + iVar7;
    uVar5 = iVar7 * local_30;
    uVar1 = *puVar10;
    uVar2 = *puVar10;
    *puVar10 = *puVar10 + uVar5;
    if (SCARRY4(uVar2,uVar5)) {
      if (CARRY4(uVar1,uVar5)) {
        *puVar10 = 0x80000000;
      }
      else {
        *puVar10 = 0x7fffffff;
      }
    }
    puVar11 = puVar10 + 1;
    uVar5 = iVar7 * local_2c;
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
    puVar11 = (uint *)(local_34 + 2);
    uVar1 = *puVar11;
    *puVar11 = *puVar11 + local_28;
    *(short *)(local_34 + 6) = *(short *)(local_34 + 6) + (ushort)CARRY4(uVar1,local_28);
    pbVar9 = (byte *)(*param_2 + *(int *)(local_34 + 4));
    if ((int)local_c <= (int)pbVar9) {
      if (bVar8 == 0) {
        if (!bVar12) goto LAB_1001592f;
        local_18 = local_18 + 1;
        *(undefined4 *)(local_34 + 4) = 0;
        *param_2 = (int)local_10;
        iVar7 = iVar6 + -1;
        pbVar9 = local_10;
        if (iVar6 + -1 != 0) goto LAB_100157cf;
      }
      local_18 = local_18 + 1;
      *(undefined4 *)(local_34 + 4) = 0;
      *param_2 = (int)local_10;
      local_c = *(uint *)(local_20 + 0xd4);
      local_20 = *(int *)(local_20 + 0xb4);
      if (local_20 == 0) {
        bVar8 = 0;
        bVar12 = false;
        pbVar9 = local_10;
      }
      else {
        pbVar9 = local_10;
        local_10 = *(byte **)(local_20 + 0xd8);
      }
    }
    iVar7 = iVar6 + -1;
    if (iVar6 + -1 == 0) {
LAB_1001592f:
      iVar7 = *(int *)(local_34 + 4);
      *(undefined4 *)(local_34 + 4) = 0;
      *param_2 = (int)pbVar9;
      *param_1 = puVar10;
      if (param_5 == 1) {
        *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar7;
        *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_18;
        return param_3 - (iVar6 + -1);
      }
      *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar7;
      *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_18;
      return param_3 - (iVar6 + -1);
    }
  } while( true );
}

