/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003c220 @ 0x1003C220 */
/* Body size: 1043 addresses */


void __cdecl
FUN_1003c220(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            uint *param_6,uint *param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 local_7c [16];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = local_7c;
  for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  lVar5 = __ftol();
  *param_6 = (uint)lVar5;
  local_8 = DAT_100b58a0;
  for (local_18 = 1; local_18 <= local_8; local_18 = local_18 + 1) {
    lVar5 = __ftol();
    param_7[local_18 + -1] = (uint)lVar5;
  }
  if ((*param_1 == 0) || (param_1[1] == 0)) {
    if (DAT_100b58a8 == 0) {
      *param_5 = param_1[1] + *param_1 * 2;
    }
    else {
      *param_5 = 0;
      if (*param_1 != param_1[1]) {
        *param_5 = 0x7f;
      }
    }
  }
  else {
    *param_5 = *(int *)(&DAT_10064594 + *param_2 * 4);
  }
  local_1c = 0x20;
  local_10 = 0x10;
  if ((int)*param_6 < 0x400) {
    local_2c = *param_6;
  }
  else {
    local_2c = 0x3ff;
  }
  *param_6 = local_2c;
  for (; 0 < local_10; local_10 = local_10 / 2) {
    if ((int)(&DAT_100647e4)[local_1c] < (int)*param_6) {
      local_1c = local_1c - local_10;
    }
    if ((int)*param_6 < (int)(&DAT_100647e4)[local_1c]) {
      local_1c = local_1c + local_10;
    }
  }
  if ((int)(&DAT_100647e4)[local_1c] < (int)*param_6) {
    local_1c = local_1c + -1;
  }
  *param_6 = 0x1f - local_1c / 2;
  for (local_18 = 1; local_18 < 3; local_18 = local_18 + 1) {
    local_20 = param_7[local_18 + -1];
    bVar4 = (int)local_20 < 0;
    if (bVar4) {
      local_20 = -local_20;
    }
    local_28 = (uint)bVar4;
    local_30 = (int)(local_20 + ((int)local_20 >> 0x1f & 0x1ffU)) >> 9;
    if (0x3f < local_30) {
      local_30 = 0x3f;
    }
    local_20 = *(uint *)(&DAT_100646e8 + local_30 * 4);
    if (local_28 != 0) {
      local_20 = -local_20;
    }
    param_7[local_18 + -1] = local_20;
  }
  local_8 = DAT_100b58a0;
  for (local_18 = 3; local_18 <= local_8; local_18 = local_18 + 1) {
    local_20 = (int)param_7[local_18 + -1] / 2;
    local_34 = local_20 + *(int *)(&DAT_10064684 + ((DAT_100b58a0 + 1) - local_18) * 4);
    lVar5 = __ftol();
    local_38 = (int)lVar5;
    if (local_38 < -0x7f) {
      local_38 = -0x7f;
    }
    local_c = local_38;
    if (local_38 < 0x80) {
      local_3c = local_38;
    }
    else {
      local_3c = 0x7f;
    }
    local_20 = local_3c;
    local_14 = *(uint *)(&DAT_100646c4 + ((DAT_100b58a0 + 1) - local_18) * 4);
    local_24 = 0;
    if (local_3c < 0) {
      local_24 = -1;
    }
    uVar1 = FUN_1003e2c0((int *)&DAT_10064554,&local_14);
    local_20 = (int)local_20 / (int)uVar1;
    if (local_24 == -1) {
      local_20 = local_20 - 1;
    }
    param_7[local_18 + -1] = local_20;
  }
  if ((DAT_100b58a8 != 0) && ((*param_5 == 0 || (*param_5 == 0x7f)))) {
    param_7[4] = *(uint *)(&DAT_10064558 + ((*param_7 & 0x1e) / 2) * 4);
    param_7[5] = *(uint *)(&DAT_10064558 + ((param_7[1] & 0x1e) / 2) * 4);
    param_7[6] = *(uint *)(&DAT_10064558 + ((param_7[2] & 0x1e) / 2) * 4);
    param_7[7] = *(uint *)(&DAT_10064558 + ((*param_6 & 0x1e) / 2) * 4);
    param_7[8] = *(int *)(&DAT_10064558 + ((param_7[3] & 0x1e) / 2) * 4) / 2;
    param_7[9] = *(uint *)(&DAT_10064558 + ((param_7[3] & 0x1e) / 2) * 4) & 1;
  }
  local_8 = 0x1003c62f;
  FUN_100431ce();
  return;
}

