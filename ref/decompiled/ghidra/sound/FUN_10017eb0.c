/* Ghidra decompiled: sound.dll */
/* Function: FUN_10017eb0 @ 0x10017EB0 */


void __cdecl
FUN_10017eb0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  short *psVar8;
  int *piVar9;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  bVar3 = false;
  bVar7 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    iVar6 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar6 + 0x20);
    if (local_8 < *(uint *)(iVar6 + 0x1c)) {
      local_8 = *(uint *)(iVar6 + 0x24);
    }
    local_c = *(short **)(iVar6 + 0x18);
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
        goto LAB_10017f47;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10017f47:
  psVar8 = (short *)*param_2;
  piVar9 = (int *)*param_1;
  iVar6 = 0;
  iVar4 = param_3;
  do {
    while( true ) {
      iVar5 = iVar4;
      sVar2 = *psVar8;
      *piVar9 = (int)sVar2 << 0x10;
      piVar9[1] = (int)sVar2 << 0x10;
      piVar9 = piVar9 + 2;
      iVar6 = iVar6 + 1;
      if (1 < iVar6) break;
      iVar4 = iVar5 + -1;
      if (iVar5 + -1 == 0) goto LAB_10018014;
    }
    iVar6 = 0;
    psVar8 = psVar8 + 1;
    if ((int)local_8 <= (int)psVar8) {
      if (bVar7 == 0) {
        if (!bVar3) break;
        local_14 = local_14 + 1;
        *param_2 = local_c;
        psVar8 = local_c;
      }
      else {
        local_14 = local_14 + 1;
        *param_2 = local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        iVar6 = *(int *)(local_1c + 0xb4);
        if (iVar6 == 0) {
          bVar7 = 0;
          bVar3 = false;
          piVar1 = (int *)(local_1c + 0xd8);
          local_1c = iVar6;
          psVar8 = local_c;
          iVar6 = *piVar1;
        }
        else {
          local_1c = iVar6;
          psVar8 = local_c;
          local_c = *(short **)(iVar6 + 0xd8);
        }
      }
    }
    iVar4 = iVar5 + -1;
  } while (iVar5 + -1 != 0);
LAB_10018014:
  *param_2 = psVar8;
  *param_1 = piVar9;
  iVar6 = param_3 - (iVar5 + -1);
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar6;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar6;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return;
}

