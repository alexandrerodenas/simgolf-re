/* Ghidra decompiled: sound.dll */
/* Function: FUN_100165a0 @ 0x100165A0 */


void __cdecl
FUN_100165a0(undefined4 *param_1,undefined4 *param_2,uint param_3,int param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  short *psVar10;
  int *piVar11;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  bVar4 = false;
  bVar9 = 0;
  local_14 = 0;
  local_28 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_20 = *(int *)(param_4 + 0x1e8);
    local_24 = *(int *)(param_4 + 0x1f8);
    iVar7 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar7 + 0x20);
    if (local_8 < *(uint *)(iVar7 + 0x1c)) {
      local_8 = *(uint *)(iVar7 + 0x24);
    }
    local_c = *(short **)(iVar7 + 0x18);
  }
  else {
    bVar1 = *(byte *)(param_4 + 0x9c);
    local_20 = *(int *)(param_4 + 0x78);
    local_24 = *(int *)(param_4 + 0x68);
    if (((bVar1 & 8) != 0) && (local_28 = *(uint *)(param_4 + 0xec) / param_3, local_28 == 1)) {
      local_28 = 1;
    }
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((bVar1 & 2) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    bVar9 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
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
  piVar11 = (int *)*param_1;
  uVar5 = param_3;
  psVar10 = (short *)*param_2;
  do {
    while( true ) {
      uVar6 = uVar5;
      sVar2 = *psVar10;
      *piVar11 = sVar2 * local_20;
      piVar11[1] = sVar2 * local_24;
      piVar11 = piVar11 + 2;
      psVar10 = psVar10 + 1;
      if ((int)psVar10 < (int)local_8) break;
      psVar3 = local_c;
      if (bVar9 == 0) {
        if (!bVar4) goto LAB_10016748;
        *param_2 = local_c;
      }
      else {
        local_14 = local_14 + 1;
        *param_2 = local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar9 = 0;
          bVar4 = false;
        }
        else {
          psVar3 = *(short **)(local_1c + 0xd8);
        }
      }
      uVar5 = uVar6 - 1;
      psVar10 = local_c;
      local_c = psVar3;
      if (uVar6 - 1 == 0) goto LAB_10016748;
    }
    iVar7 = local_24 - local_28;
    if (local_24 < (int)local_28) {
      iVar7 = 0;
    }
    iVar8 = local_20 - local_28;
    if (local_20 < (int)local_28) {
      iVar8 = 0;
    }
    uVar5 = uVar6 - 1;
    local_24 = iVar7;
    local_20 = iVar8;
  } while (uVar6 - 1 != 0);
LAB_10016748:
  *param_2 = psVar10;
  *param_1 = piVar11;
  iVar7 = param_3 - (uVar6 - 1);
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar7;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar7;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return;
}

