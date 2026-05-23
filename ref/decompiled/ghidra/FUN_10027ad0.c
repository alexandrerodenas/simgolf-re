/* Ghidra decompiled: sound.dll */
/* Function: FUN_10027ad0 @ 0x10027AD0 */
/* Body size: 666 addresses */


int __cdecl FUN_10027ad0(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  short *psVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  short *psVar8;
  undefined2 *puVar9;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  bVar4 = false;
  bVar7 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_2c = *(int *)(param_4 + 0x1e8);
    local_28 = *(int *)(param_4 + 0x1f8);
    local_30 = param_4 + 0x1358;
    iVar5 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar5 + 0x20);
    if (local_8 < *(uint *)(iVar5 + 0x1c)) {
      local_8 = *(uint *)(iVar5 + 0x24);
      local_c = *(short **)(iVar5 + 0x18);
    }
    else {
      local_c = *(short **)(iVar5 + 0x18);
    }
  }
  else {
    local_2c = *(int *)(param_4 + 0x78);
    local_28 = *(int *)(param_4 + 0x68);
    local_30 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar7 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar4) {
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
  puVar9 = (undefined2 *)*param_1;
  iVar5 = param_3;
  psVar8 = (short *)*param_2;
  do {
    while( true ) {
      iVar6 = iVar5;
      if ((int)(psVar8 + 1) < (int)local_8) {
        iVar5 = (int)psVar8[1];
      }
      else {
        iVar5 = 0;
        if (bVar4) {
          iVar5 = (int)*local_c;
        }
      }
      iVar5 = ((int)((iVar5 - *psVar8) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + (int)*psVar8;
      *puVar9 = (short)((uint)(iVar5 * local_2c) >> 0x10);
      puVar9[1] = (short)((uint)(iVar5 * local_28) >> 0x10);
      puVar9 = puVar9 + 2;
      puVar1 = (uint *)(local_30 + 2);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 0x5ce1;
      *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)(0xffffa31e < uVar2);
      psVar8 = (short *)(*param_2 + *(int *)(local_30 + 4) * 2);
      if ((int)psVar8 < (int)local_8) break;
      psVar3 = local_c;
      if (bVar7 == 0) {
        if (!bVar4) goto LAB_10027ce3;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
      }
      else {
        local_14 = local_14 + 1;
        *(undefined4 *)(local_30 + 4) = 0;
        *param_2 = (int)local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar7 = 0;
          bVar4 = false;
        }
        else {
          psVar3 = *(short **)(local_1c + 0xd8);
        }
      }
      iVar5 = iVar6 + -1;
      psVar8 = local_c;
      local_c = psVar3;
      if (iVar6 + -1 == 0) goto LAB_10027ce3;
    }
    iVar5 = iVar6 + -1;
  } while (iVar6 + -1 != 0);
LAB_10027ce3:
  iVar5 = *(int *)(local_30 + 4);
  *(undefined4 *)(local_30 + 4) = 0;
  *param_2 = (int)psVar8;
  *param_1 = puVar9;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar5;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (iVar6 + -1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar5;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (iVar6 + -1);
}

