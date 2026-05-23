/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003f720 @ 0x1003F720 */
/* Body size: 2199 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003f720(int param_1,int param_2,int param_3,int param_4,int *param_5,float *param_6,
            float *param_7,int *param_8,int param_9,int param_10,int param_11,undefined4 param_12,
            int param_13)

{
  int iVar1;
  undefined4 *puVar2;
  float10 extraout_ST0;
  float10 fVar3;
  undefined4 local_120 [16];
  float local_e0;
  float local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  float local_a4;
  float local_a0;
  float *local_9c;
  int local_98;
  int local_94;
  float local_90;
  int local_8c;
  float *local_88;
  float local_84;
  int local_80;
  float local_7c [10];
  int *local_54;
  int *local_50;
  float *local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  float *local_8;
  
  puVar2 = local_120;
  for (iVar1 = 0x47; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = (float *)(param_13 + 0x2224);
  local_9c = (float *)(param_13 + 0x2228);
  local_88 = (float *)(param_13 + 0x222c);
  local_4c = (float *)(param_13 + 0x2230);
  local_2c = (int *)(param_13 + 0x2248);
  local_30 = (int *)(param_13 + 0x224c);
  local_34 = (int *)(param_13 + 0x2250);
  local_38 = (int *)(param_13 + 0x2254);
  local_44 = (int *)(param_13 + 0x2258);
  local_50 = (int *)(param_13 + 0x2260);
  local_48 = (int *)(param_13 + 0x225c);
  local_54 = (int *)(param_13 + 0x2264);
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  if (param_4 != 0) {
    param_4 = param_4 + -4;
  }
  if (param_2 != 0) {
    local_c = *(int *)(param_4 + 4);
    param_2 = param_2 + local_c * -4;
  }
  if (param_3 != 0) {
    local_10 = *(int *)(param_4 + 0xc);
    param_3 = param_3 + local_10 * -4;
  }
  if (param_9 != 0) {
    param_9 = param_9 + -4;
  }
  if (param_10 != 0) {
    param_10 = param_10 + -4;
  }
  if (param_11 != 0) {
    param_11 = param_11 + -4;
  }
  if (*param_5 == 1) {
    *local_4c = *(float *)(param_13 + 0x2238);
    *(undefined4 *)(param_13 + 0x2234) = *(undefined4 *)(param_13 + 0x223c);
    *(undefined4 *)(param_13 + 0x2238) = *(undefined4 *)(param_13 + 0x2240);
    *(undefined4 *)(param_13 + 0x223c) = *(undefined4 *)(param_13 + 0x2244);
    if (*param_6 < _DAT_1005b8a8) {
      local_a4 = 1.0;
    }
    else {
      local_a4 = *param_6;
    }
    *local_88 = *param_7 / local_a4;
  }
  FUN_10041020((int *)(param_1 + 4),param_2 + local_c * 4,param_3 + local_10 * 4,
               (int *)(param_4 + 4),param_5,local_8,param_8,(int *)local_7c,&local_98,&local_94,
               &local_84,&local_90,&local_24,&local_28);
  if (*local_38 < 1) {
    local_a8 = 1;
  }
  else {
    local_a8 = *local_38;
  }
  local_1c = (((float)*local_34 / (float)local_a8 + *local_9c) * _DAT_1005ec68) / _DAT_1005ebfc;
  local_ac = FUN_1003e400(&local_1c);
  *local_9c = (float)local_ac;
  if (*local_30 < 1) {
    local_b0 = 1;
  }
  else {
    local_b0 = *local_30;
  }
  local_a0 = ((float)*local_38 * *local_9c) / (float)local_b0;
  local_14 = DAT_10064e10 + -1;
  for (local_3c = 1; (local_3c <= local_14 && (local_a0 <= (float)(&DAT_10064e10)[local_3c]));
      local_3c = local_3c + 1) {
  }
  local_7c[1] = *local_88;
  if (*local_2c < 1) {
    local_b4 = 1;
  }
  else {
    local_b4 = *local_2c;
  }
  local_7c[2] = (float)local_98 / (float)local_b4;
  local_7c[3] = (float)(int)local_7c[0];
  local_7c[4] = local_90;
  local_7c[5] = local_84;
  local_7c[6] = (float)*(undefined4 *)(param_9 + 8);
  local_7c[7] = local_24;
  local_7c[8] = local_28;
  local_4c[*param_5 + 3] = *(float *)(local_3c * 0x28 + 0x10064c7c);
  for (local_40 = 1; local_40 < 9; local_40 = local_40 + 1) {
    local_4c[*param_5 + 3] =
         *(float *)((local_40 + local_3c * 10) * 4 + 0x10064c54) * local_7c[local_40] +
         local_4c[*param_5 + 3];
  }
  if (local_4c[*param_5 + 3] <= _DAT_1005ec00) {
    *(undefined4 *)(param_11 + 0x18 + *param_5 * 4) = 0;
  }
  else {
    *(undefined4 *)(param_11 + 0x18 + *param_5 * 4) = 1;
  }
  local_8c = -1;
  if (*param_5 != 1) {
    if ((((*(uint *)(param_10 + 4) & 2) == 0) && (*(int *)(param_10 + 8) != 1)) ||
       ((*(uint *)(param_10 + 0xc) & 1) != 0)) {
      local_b8 = 0;
    }
    else {
      local_b8 = 1;
    }
    local_80 = local_b8;
    local_bc = *(int *)(param_11 + 0x10) * 4 + *(int *)(param_11 + 0xc) * 8 +
               *(int *)(param_11 + 0x14) * 2 + *(int *)(param_11 + 0x18);
    local_8c = local_bc;
    switch(local_bc) {
    case 0:
      break;
    case 1:
    default:
      if ((local_b8 != 0) && (*(int *)(param_11 + 0x1c) == 1)) {
        *(undefined4 *)(param_11 + 0x14) = 1;
      }
      break;
    case 2:
      if ((*(int *)(param_11 + 0x1c) == 0) || (local_4c[2] < -local_4c[3])) {
        *(undefined4 *)(param_11 + 0x14) = 0;
      }
      else {
        *(undefined4 *)(param_11 + 0x18) = 1;
      }
      break;
    case 3:
      break;
    case 4:
      *(undefined4 *)(param_11 + 0x10) = 0;
      break;
    case 5:
      if (-local_4c[2] <= local_4c[1]) {
        *(undefined4 *)(param_11 + 0x14) = 1;
      }
      else {
        *(undefined4 *)(param_11 + 0x10) = 0;
      }
      break;
    case 6:
      if (((*(int *)(param_11 + 4) == 1) || (*(int *)(param_11 + 0x1c) == 1)) ||
         (*local_4c < local_4c[3])) {
        *(undefined4 *)(param_11 + 0x18) = 1;
      }
      else {
        *(undefined4 *)(param_11 + 0xc) = 1;
      }
      break;
    case 7:
      if (local_b8 != 0) {
        *(undefined4 *)(param_11 + 0x10) = 0;
      }
      break;
    case 8:
      if (local_b8 != 0) {
        *(undefined4 *)(param_11 + 0x10) = 1;
      }
      break;
    case 9:
      break;
    case 10:
      if (-local_4c[1] <= local_4c[2]) {
        *(undefined4 *)(param_11 + 0x10) = 1;
      }
      else {
        *(undefined4 *)(param_11 + 0x14) = 0;
      }
      break;
    case 0xb:
      *(undefined4 *)(param_11 + 0x10) = 1;
      break;
    case 0xc:
      break;
    case 0xd:
      if ((*(int *)(param_11 + 0x1c) != 0) || (-local_4c[2] <= local_4c[3])) {
        *(undefined4 *)(param_11 + 0x14) = 1;
      }
      else {
        *(undefined4 *)(param_11 + 0x18) = 0;
      }
      break;
    case 0xe:
      if ((local_b8 != 0) && (*(int *)(param_11 + 0x1c) == 0)) {
        *(undefined4 *)(param_11 + 0x14) = 0;
      }
      break;
    case 0xf:
    }
  }
  if (*(int *)(param_11 + 0x18 + *param_5 * 4) == 0) {
    local_14 = local_94;
    local_18 = *local_44 * 3;
    local_c0 = local_18;
    if (local_94 <= local_18) {
      local_c0 = local_94;
    }
    local_c4 = *local_48 * 0x3f + local_c0 * 8;
    local_1c = (float)local_c4 / _DAT_1005ebfc;
    iVar1 = FUN_1003e400(&local_1c);
    *local_48 = iVar1;
    *local_38 = (int)(*local_48 + (*local_48 >> 0x1f & 7U)) >> 3;
    *local_44 = local_94;
    local_14 = local_98;
    local_18 = *local_50 * 3;
    local_c8 = local_18;
    if (local_98 <= local_18) {
      local_c8 = local_98;
    }
    local_cc = *local_54 * 0x3f + local_c8 * 8;
    local_1c = (float)local_cc / _DAT_1005ebfc;
    iVar1 = FUN_1003e400(&local_1c);
    *local_54 = iVar1;
    *local_30 = (int)(*local_54 + (*local_54 >> 0x1f & 7U)) >> 3;
    *local_50 = local_98;
  }
  else {
    local_d0 = *local_2c * 0x3f + local_98;
    local_1c = (float)local_d0 / _DAT_1005ebfc;
    iVar1 = FUN_1003e400(&local_1c);
    *local_2c = iVar1;
    local_d4 = *local_34 * 0x3f + local_94;
    local_1c = (float)local_d4 / _DAT_1005ebfc;
    iVar1 = FUN_1003e400(&local_1c);
    *local_34 = iVar1;
  }
  local_d8 = *local_30 * *local_2c;
  FUN_10043204(local_2c,SUB84((double)local_d8,0),(uint)((ulonglong)(double)local_d8 >> 0x20));
  fVar3 = (extraout_ST0 * (float10)_DAT_1005ec60) / (float10)_DAT_1005ec58;
  local_20 = (float)fVar3;
  local_dc = local_20;
  if (fVar3 < (float10)_DAT_1005b8a8) {
    local_dc = 1.0;
  }
  local_1c = local_dc;
  if (_DAT_1005ec50 < local_dc) {
    local_e0 = 20.0;
  }
  else {
    local_e0 = local_dc;
  }
  *local_8 = local_e0;
  FUN_100431ce();
  return;
}

