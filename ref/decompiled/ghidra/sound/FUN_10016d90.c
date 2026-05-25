/* Ghidra decompiled: sound.dll */
/* Function: FUN_10016d90 @ 0x10016D90 */


int __cdecl FUN_10016d90(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  int *piVar10;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_1c;
  int local_14;
  byte *local_c;
  uint local_8;
  
  bVar4 = false;
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
    local_28 = *(int *)(param_4 + 0x68);
    local_24 = *(uint *)(param_4 + 0x4c);
    local_30 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar8 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar4) {
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
  piVar10 = (int *)*param_1;
  iVar7 = param_3;
  pbVar9 = (byte *)*param_2;
  do {
    while( true ) {
      iVar6 = iVar7;
      iVar7 = (uint)*pbVar9 * 0x100 + -0x8000;
      if ((int)(pbVar9 + 2) < (int)local_8) {
        iVar5 = (uint)pbVar9[2] * 0x100 + -0x8000;
      }
      else {
        iVar5 = 0;
        if (bVar4) {
          iVar5 = (uint)*local_c * 0x100 + -0x8000;
        }
      }
      *piVar10 = (((int)((iVar5 - iVar7) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + iVar7) *
                 local_2c;
      iVar7 = (uint)pbVar9[1] * 0x100 + -0x8000;
      if ((int)(pbVar9 + 2) < (int)local_8) {
        iVar5 = (uint)pbVar9[3] * 0x100 + -0x8000;
      }
      else {
        iVar5 = 0;
        if (bVar4) {
          iVar5 = (uint)local_c[1] * 0x100 + -0x8000;
        }
      }
      piVar10[1] = (((int)((iVar5 - iVar7) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + iVar7) *
                   local_28;
      piVar10 = piVar10 + 2;
      puVar1 = (uint *)(local_30 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + local_24;
      *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)CARRY4(uVar2,local_24);
      pbVar9 = (byte *)(*param_2 + *(int *)(local_30 + 4) * 2);
      if ((int)pbVar9 < (int)local_8) break;
      pbVar3 = local_c;
      if (bVar8 == 0) {
        if (!bVar4) goto LAB_10016ff6;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
      }
      else {
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar8 = 0;
          bVar4 = false;
        }
        else {
          pbVar3 = *(byte **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      iVar7 = iVar6 + -1;
      pbVar9 = local_c;
      local_c = pbVar3;
      if (iVar6 + -1 == 0) goto LAB_10016ff6;
    }
    iVar7 = iVar6 + -1;
  } while (iVar6 + -1 != 0);
LAB_10016ff6:
  iVar7 = *(int *)(local_30 + 4);
  *(undefined4 *)(local_30 + 4) = 0;
  *param_2 = (int)pbVar9;
  *param_1 = piVar10;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar7;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (iVar6 + -1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar7;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (iVar6 + -1);
}

