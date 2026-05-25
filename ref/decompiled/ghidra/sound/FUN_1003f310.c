/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003f310 @ 0x1003F310 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_1003f310(int param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            int param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_80 [16];
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  int local_30;
  int local_2c [3];
  float local_20;
  int local_1c;
  
  puVar7 = local_80;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  pfVar1 = (float *)(param_7 + 0x2268);
  puVar5 = (uint *)(param_7 + 0x2538);
  pfVar2 = (float *)(param_7 + 0x253c);
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  if (*param_4 == 1) {
    *pfVar2 = *(float *)(param_1 + *param_3 * 4) / _DAT_1005ec2c + *pfVar2 * _DAT_1005ec04;
  }
  else {
    *pfVar2 = *pfVar2 * _DAT_1005ec4c;
  }
  local_38 = *pfVar2 / _DAT_1005ec48;
  if ((*param_4 == 0) && (*pfVar2 < _DAT_1005ec44)) {
    local_38 = 8.0;
  }
  iVar6 = *puVar5 + 1;
  *(undefined4 *)(param_7 + 0x2268 + iVar6 * 0xf0) = 1;
  local_1c = 1;
  local_20 = *pfVar1;
  iVar4 = *param_2;
  for (local_30 = 1; local_30 <= iVar4; local_30 = local_30 + 1) {
    local_20 = local_20 + local_38;
    if (*(float *)(param_7 + 0x2264 + local_30 * 4) <= local_20) {
      local_20 = *(float *)(param_7 + 0x2264 + local_30 * 4);
      *(int *)(param_7 + 0x2264 + (local_30 + iVar6 * 0x3c) * 4) = local_30;
      local_1c = local_30;
    }
    else {
      *(float *)(param_7 + 0x2264 + local_30 * 4) = local_20;
      *(int *)(param_7 + 0x2264 + (local_30 + iVar6 * 0x3c) * 4) = local_1c;
    }
  }
  local_30 = local_1c + -1;
  local_20 = pfVar1[local_30];
  for (; 0 < local_30; local_30 = local_30 + -1) {
    local_20 = local_20 + local_38;
    if (*(float *)(param_7 + 0x2264 + local_30 * 4) <= local_20) {
      local_30 = *(int *)(param_7 + 0x2264 + (local_30 + iVar6 * 0x3c) * 4);
      local_20 = *(float *)(param_7 + 0x2264 + local_30 * 4);
      local_1c = local_30;
    }
    else {
      *(float *)(param_7 + 0x2264 + local_30 * 4) = local_20;
      *(int *)(param_7 + 0x2264 + (local_30 + iVar6 * 0x3c) * 4) = local_1c;
    }
  }
  *pfVar1 = *(float *)(param_1 + 4) / _DAT_1005ec2c + *pfVar1;
  local_40 = *pfVar1;
  *param_6 = 1;
  iVar4 = *param_2;
  local_3c = local_40;
  for (local_30 = 2; local_30 <= iVar4; local_30 = local_30 + 1) {
    *(float *)(param_7 + 0x2264 + local_30 * 4) =
         *(float *)(param_1 + local_30 * 4) / _DAT_1005ec2c +
         *(float *)(param_7 + 0x2264 + local_30 * 4);
    if (local_40 < *(float *)(param_7 + 0x2264 + local_30 * 4)) {
      local_40 = *(float *)(param_7 + 0x2264 + local_30 * 4);
    }
    if (*(float *)(param_7 + 0x2264 + local_30 * 4) < local_3c) {
      *param_6 = local_30;
      local_3c = *(float *)(param_7 + 0x2264 + local_30 * 4);
    }
  }
  iVar4 = *param_2;
  for (local_30 = 1; local_30 <= iVar4; local_30 = local_30 + 1) {
    *(float *)(param_7 + 0x2264 + local_30 * 4) =
         *(float *)(param_7 + 0x2264 + local_30 * 4) - local_3c;
  }
  local_34 = 0;
  for (local_30 = 0x14; local_30 < 0x29; local_30 = local_30 + 10) {
    if ((local_30 < *param_6) &&
       (*(float *)(param_7 + 0x2264 + (*param_6 - local_30) * 4) <
        (local_40 - local_3c) / _DAT_1005ec20)) {
      local_34 = local_30;
    }
  }
  *param_6 = *param_6 - local_34;
  local_34 = *puVar5;
  *param_5 = *param_6;
  for (local_30 = 1; local_30 < 3; local_30 = local_30 + 1) {
    local_34 = local_34 & 0x80000001;
    if ((int)local_34 < 0) {
      local_34 = (local_34 - 1 | 0xfffffffe) + 1;
    }
    local_34 = local_34 + 1;
    *param_5 = *(int *)(param_7 + 0x2264 + (*param_5 + local_34 * 0x3c) * 4);
    local_2c[local_30] = *param_5;
  }
  uVar3 = *puVar5 + 1 & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  *puVar5 = uVar3;
  return 0;
}

