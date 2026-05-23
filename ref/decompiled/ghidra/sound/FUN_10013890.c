/* Ghidra decompiled: sound.dll */
/* Function: FUN_10013890 @ 0x10013890 */
/* Body size: 500 addresses */


void __cdecl
FUN_10013890(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  short *psVar8;
  uint *puVar9;
  uint *puVar10;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  uint uVar2;
  
  bVar3 = false;
  bVar7 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    iVar5 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar5 + 0x20);
    if (local_8 < *(uint *)(iVar5 + 0x1c)) {
      local_8 = *(uint *)(iVar5 + 0x24);
    }
    local_c = *(short **)(iVar5 + 0x18);
  }
  else {
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar7 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar3) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_10013927;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10013927:
  puVar9 = (uint *)*param_1;
  iVar5 = param_3;
  psVar8 = (short *)*param_2;
LAB_10013939:
  do {
    iVar6 = iVar5;
    uVar4 = *psVar8 * 0x10000;
    uVar1 = *puVar9;
    uVar2 = *puVar9;
    *puVar9 = *puVar9 + uVar4;
    if (SCARRY4(uVar2,uVar4)) {
      if (CARRY4(uVar1,uVar4)) {
        *puVar9 = 0x80000000;
      }
      else {
        *puVar9 = 0x7fffffff;
      }
    }
    puVar10 = puVar9 + 1;
    uVar4 = psVar8[1] * 0x10000;
    uVar1 = *puVar10;
    uVar2 = *puVar10;
    *puVar10 = *puVar10 + uVar4;
    if (SCARRY4(uVar2,uVar4)) {
      if (CARRY4(uVar1,uVar4)) {
        *puVar10 = 0x80000000;
      }
      else {
        *puVar10 = 0x7fffffff;
      }
    }
    puVar9 = puVar9 + 2;
    psVar8 = psVar8 + 2;
    if ((int)local_8 <= (int)psVar8) {
      if (bVar7 == 0) {
        if (!bVar3) goto LAB_10013a13;
        local_14 = local_14 + 1;
        *param_2 = local_c;
        iVar5 = iVar6 + -1;
        psVar8 = local_c;
        if (iVar6 + -1 != 0) goto LAB_10013939;
      }
      local_14 = local_14 + 1;
      *param_2 = local_c;
      local_8 = *(uint *)(local_1c + 0xd4);
      local_1c = *(int *)(local_1c + 0xb4);
      if (local_1c == 0) {
        bVar7 = 0;
        bVar3 = false;
        psVar8 = local_c;
      }
      else {
        psVar8 = local_c;
        local_c = *(short **)(local_1c + 0xd8);
      }
    }
    iVar5 = iVar6 + -1;
    if (iVar6 + -1 == 0) {
LAB_10013a13:
      *param_2 = psVar8;
      *param_1 = puVar9;
      iVar5 = param_3 - (iVar6 + -1);
      if (param_5 == 1) {
        *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar5;
        *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
        return;
      }
      *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar5;
      *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
      return;
    }
  } while( true );
}

