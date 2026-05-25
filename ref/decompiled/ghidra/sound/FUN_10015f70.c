/* Ghidra decompiled: sound.dll */
/* Function: FUN_10015f70 @ 0x10015F70 */


int __cdecl FUN_10015f70(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short *psVar7;
  int *piVar8;
  bool bVar9;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  bVar6 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(int *)(param_4 + 0x1e8);
    local_28 = *(int *)(param_4 + 0x1f8);
    local_24 = *(uint *)(param_4 + 0x220);
    local_30 = param_4 + 0x1358;
    iVar4 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar4 + 0x20);
    if (local_8 < *(uint *)(iVar4 + 0x1c)) {
      local_8 = *(uint *)(iVar4 + 0x24);
    }
    local_c = *(short **)(iVar4 + 0x18);
    bVar9 = local_8 == *(uint *)(iVar4 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar9)) {
      local_34 = 1;
    }
    goto LAB_10016067;
  }
  local_2c = *(int *)(param_4 + 0x78);
  local_28 = *(int *)(param_4 + 0x68);
  local_30 = param_4 + 0xb8;
  if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  bVar6 = *(byte *)(param_4 + 0x9c) & 1;
  if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
    if (!bVar9) {
      local_c = *(short **)(param_4 + 0x18);
      goto LAB_10016058;
    }
    local_c = *(short **)(param_4 + 0xd8);
    local_8 = *(uint *)(param_4 + 0xd4);
  }
  else {
    local_1c = *(int *)(param_4 + 0xb4);
    local_c = *(short **)(local_1c + 0x18);
LAB_10016058:
    local_8 = *(uint *)(param_4 + 0x20);
  }
  local_24 = *(uint *)(param_4 + 0x4c);
LAB_10016067:
  piVar8 = (int *)*param_1;
  iVar4 = param_3;
  psVar7 = (short *)*param_2;
  do {
    while( true ) {
      iVar5 = iVar4;
      if ((int)(psVar7 + 2) < (int)local_8) {
        iVar4 = (int)psVar7[2];
      }
      else {
        iVar4 = 0;
        if ((bVar9) && (iVar4 = (int)*local_c, local_34 != 0)) {
          bVar9 = false;
        }
      }
      *piVar8 = (((int)((iVar4 - *psVar7) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + (int)*psVar7
                ) * local_2c;
      if ((int)(psVar7 + 2) < (int)local_8) {
        iVar4 = (int)psVar7[3];
      }
      else {
        iVar4 = 0;
        if ((bVar9) && (iVar4 = (int)local_c[1], local_34 != 0)) {
          bVar9 = false;
        }
      }
      piVar8[1] = (((int)((iVar4 - psVar7[1]) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) +
                  (int)psVar7[1]) * local_28;
      piVar8 = piVar8 + 2;
      puVar1 = (uint *)(local_30 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + local_24;
      *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)CARRY4(uVar2,local_24);
      psVar7 = (short *)(*param_2 + *(int *)(local_30 + 4) * 4);
      if ((int)psVar7 < (int)local_8) break;
      psVar3 = local_c;
      if (bVar6 == 0) {
        if (!bVar9) goto LAB_100161d2;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
      }
      else {
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar6 = 0;
          bVar9 = false;
        }
        else {
          psVar3 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      iVar4 = iVar5 + -1;
      psVar7 = local_c;
      local_c = psVar3;
      if (iVar5 + -1 == 0) goto LAB_100161d2;
    }
    iVar4 = iVar5 + -1;
  } while (iVar5 + -1 != 0);
LAB_100161d2:
  iVar4 = *(int *)(local_30 + 4);
  *(undefined4 *)(local_30 + 4) = 0;
  *param_2 = (int)psVar7;
  *param_1 = piVar8;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar4;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (iVar5 + -1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar4;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (iVar5 + -1);
}

