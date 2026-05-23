/* Ghidra decompiled: sound.dll */
/* Function: FUN_10017520 @ 0x10017520 */
/* Body size: 724 addresses */


int __cdecl FUN_10017520(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

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
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_1c;
  int local_14;
  byte *local_c;
  uint local_8;
  uint uVar2;
  
  bVar3 = false;
  bVar8 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(int *)(param_4 + 0x1e8);
    local_28 = *(int *)(param_4 + 0x1f8);
    local_24 = *(uint *)(param_4 + 0x220);
    local_30 = param_4 + 0x1358;
    iVar7 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar7 + 0x20);
    if (local_8 < *(uint *)(iVar7 + 0x1c)) {
      local_8 = *(uint *)(iVar7 + 0x24);
    }
    local_c = *(byte **)(iVar7 + 0x18);
  }
  else {
    local_2c = *(int *)(param_4 + 0x78);
    local_24 = 0x8000;
    local_28 = *(int *)(param_4 + 0x68);
    local_30 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar8 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar3) {
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
  puVar10 = (uint *)*param_1;
  iVar7 = param_3;
  pbVar9 = (byte *)*param_2;
LAB_1001761a:
  do {
    iVar6 = iVar7;
    iVar7 = (uint)*pbVar9 * 0x100 + -0x8000;
    if ((int)(pbVar9 + 1) < (int)local_8) {
      iVar4 = (uint)pbVar9[1] * 0x100 + -0x8000;
    }
    else {
      iVar4 = 0;
      if (bVar3) {
        iVar4 = (uint)*local_c * 0x100 + -0x8000;
      }
    }
    iVar7 = ((int)((iVar4 - iVar7) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + iVar7;
    uVar5 = iVar7 * local_2c;
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
    uVar5 = iVar7 * local_28;
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
    puVar11 = (uint *)(local_30 + 2);
    uVar1 = *puVar11;
    *puVar11 = *puVar11 + local_24;
    *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)CARRY4(uVar1,local_24);
    pbVar9 = (byte *)(*param_2 + *(int *)(local_30 + 4));
    if ((int)local_8 <= (int)pbVar9) {
      if (bVar8 == 0) {
        if (!bVar3) goto LAB_1001776d;
        local_14 = local_14 + 1;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
        iVar7 = iVar6 + -1;
        pbVar9 = local_c;
        if (iVar6 + -1 != 0) goto LAB_1001761a;
      }
      local_14 = local_14 + 1;
      *(undefined4 *)(local_30 + 4) = 0;
      *param_2 = (int)local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar8 = 0;
        bVar3 = false;
        pbVar9 = local_c;
      }
      else {
        pbVar9 = local_c;
        local_c = *(byte **)(local_1c + 0xd8);
      }
    }
    iVar7 = iVar6 + -1;
    if (iVar6 + -1 == 0) {
LAB_1001776d:
      iVar7 = *(int *)(local_30 + 4);
      *(undefined4 *)(local_30 + 4) = 0;
      *param_2 = (int)pbVar9;
      *param_1 = puVar10;
      if (param_5 == 1) {
        *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar7;
        *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
        return param_3 - (iVar6 + -1);
      }
      *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar7;
      *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
      return param_3 - (iVar6 + -1);
    }
  } while( true );
}

