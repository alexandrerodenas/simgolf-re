/* Ghidra decompiled: sound.dll */
/* Function: FUN_10015aa0 @ 0x10015AA0 */
/* Body size: 452 addresses */


void __cdecl
FUN_10015aa0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  short *psVar6;
  int *piVar7;
  int local_1c;
  int local_14;
  short *local_c;
  uint local_8;
  
  bVar2 = false;
  bVar5 = 0;
  local_14 = 0;
  local_1c = 0;
  if (param_5 == 1) {
    iVar3 = *(int *)(param_4 + 8);
    local_8 = *(uint *)(iVar3 + 0x20);
    if (local_8 < *(uint *)(iVar3 + 0x1c)) {
      local_8 = *(uint *)(iVar3 + 0x24);
    }
    local_c = *(short **)(iVar3 + 0x18);
  }
  else {
    if (((*(byte *)(param_4 + 0x98) & 1) == 0) || ((*(byte *)(param_4 + 0x9c) & 2) != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    bVar5 = *(byte *)(param_4 + 0x9c) & 1;
    if ((*(byte *)(param_4 + 0x9c) & 1) == 0) {
      if (bVar2) {
        local_c = *(short **)(param_4 + 0xd8);
        local_8 = *(uint *)(param_4 + 0xd4);
        goto LAB_10015b37;
      }
      local_c = *(short **)(param_4 + 0x18);
    }
    else {
      local_1c = *(int *)(param_4 + 0xb4);
      local_c = *(short **)(local_1c + 0x18);
    }
    local_8 = *(uint *)(param_4 + 0x20);
  }
LAB_10015b37:
  piVar7 = (int *)*param_1;
  iVar3 = param_3;
  psVar6 = (short *)*param_2;
  do {
    while( true ) {
      iVar4 = iVar3;
      *piVar7 = (int)*psVar6 << 0x10;
      piVar7[1] = (int)psVar6[1] << 0x10;
      piVar7 = piVar7 + 2;
      psVar6 = psVar6 + 2;
      if ((int)psVar6 < (int)local_8) break;
      psVar1 = local_c;
      if (bVar5 == 0) {
        if (!bVar2) goto LAB_10015bf3;
        *param_2 = local_c;
      }
      else {
        *param_2 = local_c;
        local_8 = *(uint *)(local_1c + 0xd4);
        local_1c = *(int *)(local_1c + 0xb4);
        if (local_1c == 0) {
          bVar5 = 0;
          bVar2 = false;
        }
        else {
          psVar1 = *(short **)(local_1c + 0xd8);
        }
      }
      local_14 = local_14 + 1;
      iVar3 = iVar4 + -1;
      psVar6 = local_c;
      local_c = psVar1;
      if (iVar4 + -1 == 0) goto LAB_10015bf3;
    }
    iVar3 = iVar4 + -1;
  } while (iVar4 + -1 != 0);
LAB_10015bf3:
  *param_2 = psVar6;
  *param_1 = piVar7;
  iVar3 = param_3 - (iVar4 + -1);
  if (param_5 == 1) {
    *(int *)(param_4 + 0x16c) = *(int *)(param_4 + 0x16c) + iVar3;
    *(int *)(param_4 + 0x1360) = *(int *)(param_4 + 0x1360) + local_14;
    return;
  }
  *(int *)(param_4 + 0x88) = *(int *)(param_4 + 0x88) + iVar3;
  *(int *)(param_4 + 0xcc) = *(int *)(param_4 + 0xcc) + local_14;
  return;
}

