/* Ghidra decompiled: sound.dll */
/* Function: FUN_10016340 @ 0x10016340 */


void __cdecl
FUN_10016340(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short *psVar7;
  int *piVar8;
  bool bVar9;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  bVar6 = 0;
  bVar2 = false;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    iVar4 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar4 + 0x20);
    if (local_8 < *(uint *)(iVar4 + 0x1c)) {
      local_8 = *(uint *)(iVar4 + 0x24);
    }
    local_c = *(short **)(iVar4 + 0x18);
    bVar9 = local_8 == *(uint *)(iVar4 + 0x24);
    if (((*(byte *)(param_4 + 0x58) & 0x20) != 0) && (bVar9)) {
      bVar2 = true;
    }
  }
  else {
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    bVar6 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar9) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_100163f6;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_100163f6:
  piVar8 = (int *)*param_1;
  iVar4 = param_3;
  psVar7 = (short *)*param_2;
  do {
    while( true ) {
      iVar5 = iVar4;
      sVar1 = *psVar7;
      *piVar8 = (int)sVar1 << 0x10;
      piVar8[1] = (int)sVar1 << 0x10;
      piVar8 = piVar8 + 2;
      psVar7 = psVar7 + 1;
      if ((int)psVar7 < (int)local_8) break;
      psVar3 = local_c;
      if (bVar6 == 0) {
        if (!bVar9) goto LAB_100164a3;
        *param_2 = local_c;
        if (bVar2) {
          bVar9 = false;
        }
      }
      else {
        *param_2 = local_c;
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
      if (iVar5 + -1 == 0) goto LAB_100164a3;
    }
    iVar4 = iVar5 + -1;
  } while (iVar5 + -1 != 0);
LAB_100164a3:
  *param_2 = psVar7;
  *param_1 = piVar8;
  iVar4 = param_3 - (iVar5 + -1);
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar4;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar4;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return;
}

