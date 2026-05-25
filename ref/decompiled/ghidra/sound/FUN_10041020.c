/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041020 @ 0x10041020 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10041020(int *param_1,int param_2,int param_3,int *param_4,int *param_5,float *param_6,
            int *param_7,int *param_8,int *param_9,int *param_10,float *param_11,float *param_12,
            float *param_13,float *param_14)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 local_c0 [16];
  int local_80;
  int local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar4 = local_c0;
  for (iVar2 = 0x2f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_c = param_4[2];
  iVar3 = param_3 + local_c * -4;
  local_8 = *param_4;
  iVar2 = param_2 + local_8 * -4;
  local_3c = 0.0;
  local_30 = 0.0;
  local_28 = 0.0;
  local_50 = 0.0;
  *param_12 = 0.0;
  local_34 = 0.0;
  local_40 = 0.0;
  local_44 = 0.0;
  local_4c = 0.0;
  local_48 = 0.0;
  *param_8 = 0;
  local_1c = (param_1[1] - *param_1) + 1;
  local_2c = *param_1 + 1 + ((*param_5 + -1) * local_1c) / 2;
  local_20 = local_2c + -1 + local_1c / 2;
  local_14 = *(float *)(iVar2 + -4 + local_2c * 4) - *param_6;
  fVar5 = FUN_1003e380((float *)&DAT_10064e40,&local_14);
  local_38 = (float)fVar5;
  local_10 = local_20;
  for (local_24 = local_2c; local_24 <= local_10; local_24 = local_24 + 1) {
    local_54 = *(float *)(iVar3 + local_24 * 4);
    if (local_54 < _DAT_1005ec00) {
      local_54 = -local_54;
    }
    local_3c = local_3c + local_54;
    local_58 = *(float *)(iVar2 + local_24 * 4);
    if (local_58 < _DAT_1005ec00) {
      local_58 = -local_58;
    }
    local_30 = local_30 + local_58;
    local_5c = *(float *)(iVar2 + local_24 * 4) - *(float *)(iVar2 + -4 + local_24 * 4);
    if (local_5c < _DAT_1005ec00) {
      local_5c = -local_5c;
    }
    local_28 = local_28 + local_5c;
    fVar1 = *(float *)(iVar2 + local_24 * 4);
    local_50 = fVar1 * fVar1 + local_50;
    *param_12 = *(float *)(iVar2 + local_24 * 4) * *(float *)(iVar2 + -4 + local_24 * 4) + *param_12
    ;
    fVar1 = *(float *)(iVar3 + local_24 * 4);
    local_34 = fVar1 * fVar1 + local_34;
    fVar1 = *(float *)(iVar3 + (local_24 - *param_7) * 4);
    local_40 = fVar1 * fVar1 + local_40;
    fVar1 = *(float *)(iVar3 + (local_24 + *param_7) * 4);
    local_44 = fVar1 * fVar1 + local_44;
    local_4c = *(float *)(iVar3 + local_24 * 4) * *(float *)(iVar3 + (local_24 + *param_7) * 4) +
               local_4c;
    local_48 = *(float *)(iVar3 + local_24 * 4) * *(float *)(iVar3 + (local_24 - *param_7) * 4) +
               local_48;
    local_14 = *(float *)(iVar2 + local_24 * 4) + *param_6;
    fVar5 = FUN_1003e380((float *)&DAT_10064e40,&local_14);
    if ((float10)local_38 != fVar5) {
      *param_8 = *param_8 + 1;
      local_38 = -local_38;
    }
    *param_6 = -*param_6;
  }
  if (local_50 < _DAT_1005b8a8) {
    local_60 = 1.0;
  }
  else {
    local_60 = local_50;
  }
  *param_12 = *param_12 / local_60;
  local_64 = local_30 + local_30;
  if (local_64 < _DAT_1005b8a8) {
    local_64 = 1.0;
  }
  *param_11 = local_28 / local_64;
  if (local_40 < _DAT_1005b8a8) {
    local_68 = 1.0;
  }
  else {
    local_68 = local_40;
  }
  if (local_34 < _DAT_1005b8a8) {
    local_6c = 1.0;
  }
  else {
    local_6c = local_34;
  }
  *param_13 = (local_48 / local_6c) * (local_48 / local_68);
  if (local_44 < _DAT_1005b8a8) {
    local_70 = 1.0;
  }
  else {
    local_70 = local_44;
  }
  if (local_34 < _DAT_1005b8a8) {
    local_74 = 1.0;
  }
  else {
    local_74 = local_34;
  }
  *param_14 = (local_4c / local_74) * (local_4c / local_70);
  local_78 = *param_8 << 1;
  local_18 = (float)local_78;
  local_14 = (_DAT_1005ec30 / (float)local_1c) * local_18;
  iVar2 = FUN_1003e400(&local_14);
  *param_8 = iVar2;
  local_14 = (_DAT_1005ec30 / (float)local_1c) * (local_3c / _DAT_1005ec20);
  local_10 = FUN_1003e400(&local_14);
  local_7c = local_10;
  if (0x7fff < local_10) {
    local_7c = 0x7fff;
  }
  *param_9 = local_7c;
  local_14 = (_DAT_1005ec30 / (float)local_1c) * (local_30 / _DAT_1005ec20);
  local_10 = FUN_1003e400(&local_14);
  local_80 = local_10;
  if (0x7fff < local_10) {
    local_80 = 0x7fff;
  }
  *param_10 = local_80;
  local_8 = 0x100414e0;
  FUN_100431ce();
  return;
}

