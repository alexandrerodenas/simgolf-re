/* Ghidra decompiled: sound.dll */
/* Function: FUN_10013dd0 @ 0x10013DD0 */
/* Body size: 888 addresses */


int __cdecl FUN_10013dd0(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  short *psVar8;
  uint *puVar9;
  uint *puVar10;
  bool bVar11;
  int local_34;
  int local_30;
  int local_28;
  uint local_24;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar2;
  
  bVar7 = 0;
  bVar3 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    local_30 = *(int *)(param_4 + 0x1e8);
    local_28 = *(int *)(param_4 + 0x1f8);
    local_24 = *(uint *)(param_4 + 0x220);
    iVar4 = *(int *)(param_4 + 8);
    local_34 = param_4 + 0x1358;
    local_8 = *(uint *)(iVar4 + 0x20);
    if (local_8 < *(uint *)(iVar4 + 0x1c)) {
      local_8 = *(uint *)(iVar4 + 0x24);
    }
    local_c = *(short **)(iVar4 + 0x18);
    bVar11 = local_8 == *(uint *)(iVar4 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar11)) {
      bVar3 = true;
    }
  }
  else {
    local_24 = *(uint *)(param_4 + 0x4c);
    local_30 = *(int *)(param_4 + 0x78);
    local_28 = *(int *)(param_4 + 0x68);
    if (local_24 == 0x10000) {
      if ((local_30 == 0x10000) && (local_28 == 0x10000)) {
        iVar4 = thunk_FUN_10013890(param_1,param_2,param_3,param_4,param_5);
        return iVar4;
      }
      iVar4 = thunk_FUN_10013b10(param_1,param_2,param_3,param_4,param_5);
      return iVar4;
    }
    local_34 = param_4 + 0xb8;
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    bVar7 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar11) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_10013f26;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10013f26:
  puVar9 = (uint *)*param_1;
  iVar4 = param_3;
  psVar8 = (short *)*param_2;
LAB_10013f3b:
  do {
    iVar6 = iVar4;
    if ((int)(psVar8 + 2) < (int)local_8) {
      iVar4 = (int)psVar8[2];
    }
    else {
      iVar4 = 0;
      if ((bVar11) && (iVar4 = (int)*local_c, bVar3)) {
        bVar11 = false;
      }
    }
    uVar5 = (((int)((iVar4 - *psVar8) * (uint)*(ushort *)(local_34 + 2)) >> 0x10) + (int)*psVar8) *
            local_30;
    uVar1 = *puVar9;
    uVar2 = *puVar9;
    *puVar9 = *puVar9 + uVar5;
    if (SCARRY4(uVar2,uVar5)) {
      if (CARRY4(uVar1,uVar5)) {
        *puVar9 = 0x80000000;
      }
      else {
        *puVar9 = 0x7fffffff;
      }
    }
    puVar10 = puVar9 + 1;
    if ((int)(psVar8 + 2) < (int)local_8) {
      iVar4 = (int)psVar8[3];
    }
    else {
      iVar4 = 0;
      if ((bVar11) && (iVar4 = (int)local_c[1], bVar3)) {
        bVar11 = false;
      }
    }
    uVar5 = (((int)((iVar4 - psVar8[1]) * (uint)*(ushort *)(local_34 + 2)) >> 0x10) + (int)psVar8[1]
            ) * local_28;
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
    puVar9 = puVar9 + 2;
    puVar10 = (uint *)(local_34 + 2);
    uVar1 = *puVar10;
    *puVar10 = *puVar10 + local_24;
    *(short *)(local_34 + 6) = *(short *)(local_34 + 6) + (ushort)CARRY4(uVar1,local_24);
    psVar8 = (short *)(*param_2 + *(int *)(local_34 + 4) * 4);
    if ((int)local_8 <= (int)psVar8) {
      if (bVar7 == 0) {
        if (!bVar11) goto LAB_100140c1;
        local_14 = local_14 + 1;
        *(undefined4 *)(local_34 + 4) = 0;
        *param_2 = (int)local_c;
        iVar4 = iVar6 + -1;
        psVar8 = local_c;
        if (iVar6 + -1 != 0) goto LAB_10013f3b;
      }
      local_14 = local_14 + 1;
      *(undefined4 *)(local_34 + 4) = 0;
      *param_2 = (int)local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar7 = 0;
        bVar11 = false;
        psVar8 = local_c;
      }
      else {
        psVar8 = local_c;
        local_c = *(short **)(local_1c + 0xd8);
      }
    }
    iVar4 = iVar6 + -1;
    if (iVar6 + -1 == 0) {
LAB_100140c1:
      iVar4 = *(int *)(local_34 + 4);
      *(undefined4 *)(local_34 + 4) = 0;
      *param_2 = (int)psVar8;
      *param_1 = puVar9;
      if (param_5 == 1) {
        *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar4;
        *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
        return param_3 - (iVar6 + -1);
      }
      *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar4;
      *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
      return param_3 - (iVar6 + -1);
    }
  } while( true );
}

