/* Ghidra decompiled: sound.dll */
/* Function: FUN_10018110 @ 0x10018110 */


int __cdecl FUN_10018110(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  short *psVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  short *psVar9;
  uint *puVar10;
  uint *puVar11;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar2;
  
  bVar4 = false;
  bVar8 = 0;
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
    bVar8 = *(byte *)(param_4 + 0x9c) & 1;
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
  puVar10 = (uint *)*param_1;
  iVar5 = param_3;
  psVar9 = (short *)*param_2;
  do {
    while( true ) {
      iVar7 = iVar5;
      if ((int)(psVar9 + 1) < (int)local_8) {
        iVar5 = (int)psVar9[1];
      }
      else {
        iVar5 = 0;
        if (bVar4) {
          iVar5 = (int)*local_c;
        }
      }
      iVar5 = ((int)((iVar5 - *psVar9) * (uint)*(ushort *)(local_30 + 2)) >> 0x10) + (int)*psVar9;
      uVar6 = iVar5 * local_2c;
      uVar1 = *puVar10;
      uVar2 = *puVar10;
      *puVar10 = *puVar10 + uVar6;
      if (SCARRY4(uVar2,uVar6)) {
        if (CARRY4(uVar1,uVar6)) {
          *puVar10 = 0x80000000;
        }
        else {
          *puVar10 = 0x7fffffff;
        }
      }
      puVar11 = puVar10 + 1;
      uVar6 = iVar5 * local_28;
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
      puVar10 = puVar10 + 2;
      puVar11 = (uint *)(local_30 + 2);
      uVar1 = *puVar11;
      *puVar11 = *puVar11 + 0x5ce1;
      *(short *)(local_30 + 6) = *(short *)(local_30 + 6) + (ushort)(0xffffa31e < uVar1);
      psVar9 = (short *)(*param_2 + *(int *)(local_30 + 4) * 2);
      if ((int)psVar9 < (int)local_8) break;
      psVar3 = local_c;
      if (bVar8 == 0) {
        if (!bVar4) goto LAB_10018354;
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
          psVar3 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      iVar5 = iVar7 + -1;
      psVar9 = local_c;
      local_c = psVar3;
      if (iVar7 + -1 == 0) goto LAB_10018354;
    }
    iVar5 = iVar7 + -1;
  } while (iVar7 + -1 != 0);
LAB_10018354:
  iVar5 = *(int *)(local_30 + 4);
  *(undefined4 *)(local_30 + 4) = 0;
  *param_2 = (int)psVar9;
  *param_1 = puVar10;
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar5;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return param_3 - (iVar7 + -1);
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar5;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return param_3 - (iVar7 + -1);
}

