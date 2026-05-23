/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003d1d0 @ 0x1003D1D0 */
/* Body size: 1779 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003d1d0(int param_1,int *param_2,int *param_3,int param_4,float *param_5,float *param_6,
            float *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 local_354 [16];
  int local_314;
  int local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  int local_2f0;
  float local_2ec [167];
  int local_50;
  int local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  float *local_2c;
  float *local_28;
  float *local_24;
  float *local_20;
  float *local_1c;
  float *local_18;
  int local_14;
  int local_10;
  float *local_c;
  int *local_8;
  
  puVar3 = local_354;
  for (iVar2 = 0xd4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  if (param_4 != 0) {
    param_4 = param_4 + -4;
  }
  local_8 = (int *)(param_8 + 0x688);
  local_10 = param_8 + 0x68c;
  local_14 = param_8 + 0x924;
  local_18 = (float *)(param_8 + 0xbbc);
  local_1c = (float *)(param_8 + 0xbc0);
  local_20 = (float *)(param_8 + 0xbc4);
  local_24 = (float *)(param_8 + 0xbc8);
  local_28 = (float *)(param_8 + 0xbcc);
  local_2c = (float *)(param_8 + 0xbd0);
  local_c = (float *)(param_8 + 0xbd4);
  local_38 = *local_c / (*param_5 + _DAT_1005ec28);
  local_30c = local_38;
  if (_DAT_1005ec24 < local_38) {
    local_30c = 8.0;
  }
  local_2f8 = local_30c;
  *local_c = *param_5;
  iVar2 = DAT_100b58a0;
  local_30 = DAT_100b58a0;
  for (local_48 = 1; local_48 <= iVar2; local_48 = local_48 + 1) {
    *(float *)(param_8 + 0x920 + local_48 * 4) =
         local_30c * *(float *)(param_8 + 0x920 + (*local_8 + local_48) * 4);
  }
  *local_8 = *param_2;
  if (*param_3 == 0) {
    local_30 = *param_2;
    for (local_48 = 1; local_48 <= local_30; local_48 = local_48 + 1) {
      iVar2 = FUN_10040f60(param_8);
      local_310 = (int)(iVar2 + (iVar2 >> 0x1f & 0x3fU)) >> 6;
      *(float *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4) = (float)local_310;
    }
    iVar2 = FUN_10040f60(param_8);
    iVar2 = (iVar2 + 0x8000) * (*param_2 + -1);
    local_2f0 = ((int)(iVar2 + (iVar2 >> 0x1f & 0xffffU)) >> 0x10) + 1 + DAT_100b58a0;
    local_2ec[0] = (*param_6 / _DAT_1005ec20) * _DAT_1005b8a8 * _DAT_1005ec1c;
    if (_DAT_1005ec18 < local_2ec[0]) {
      local_2ec[0] = 2000.0;
    }
    *(float *)(local_10 + -4 + local_2f0 * 4) =
         local_2ec[0] + *(float *)(local_10 + -4 + local_2f0 * 4);
    *(float *)(local_10 + local_2f0 * 4) = *(float *)(local_10 + local_2f0 * 4) - local_2ec[0];
  }
  else {
    FUN_10043204(param_2,SUB84((double)*param_2,0),(uint)((ulonglong)(double)*param_2 >> 0x20));
    local_2f4 = (float)(extraout_ST0 / (float10)_DAT_1005ec10);
    iVar2 = *param_2;
    for (local_48 = 1; local_48 <= iVar2; local_48 = local_48 + 1) {
      *(undefined4 *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4) = 0;
      if (local_48 < 0x1a) {
        *(float *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4) =
             (float)*(int *)(&DAT_10064a18 + local_48 * 4) * local_2f4;
      }
      local_304 = *(float *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4);
      local_3c = *local_18 * _DAT_1005ec04 +
                 *(float *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4) * _DAT_1005ec08;
      local_38 = *local_1c * _DAT_1005ec08 + local_3c;
      *(float *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4) =
           *local_20 * _DAT_1005ec00 + local_38;
      *local_20 = *local_1c;
      *local_1c = *local_18;
      *local_18 = local_304;
    }
    local_30 = *param_2;
    for (local_48 = 1; local_48 <= local_30; local_48 = local_48 + 1) {
      local_314 = FUN_10040f60(param_8);
      local_2ec[DAT_100b58a0 + local_48] = ((float)local_314 * _DAT_1005b8a8) / _DAT_1005ebfc;
      local_308 = local_2ec[DAT_100b58a0 + local_48];
      local_3c = *local_24 * _DAT_1005ebf4 + local_2ec[DAT_100b58a0 + local_48] * _DAT_1005ebf8;
      local_38 = *local_28 * _DAT_1005ebf8 + local_3c;
      local_2ec[DAT_100b58a0 + local_48] = *local_2c * _DAT_1005ec00 + local_38;
      *local_2c = *local_28;
      *local_28 = *local_24;
      *local_24 = local_308;
    }
    local_30 = *param_2;
    for (local_48 = 1; local_48 <= local_30; local_48 = local_48 + 1) {
      *(float *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4) =
           *(float *)(local_10 + -4 + (DAT_100b58a0 + local_48) * 4) +
           local_2ec[DAT_100b58a0 + local_48];
    }
  }
  local_44 = 0.0;
  iVar2 = *param_2;
  for (local_48 = 1; local_48 <= iVar2; local_48 = local_48 + 1) {
    local_50 = DAT_100b58a0 + local_48;
    local_2fc = 0.0;
    local_34 = DAT_100b58a0;
    for (local_4c = 1; local_4c <= DAT_100b58a0; local_4c = local_4c + 1) {
      local_2fc = *(float *)(param_1 + local_4c * 4) *
                  *(float *)(local_10 + -4 + (local_50 - local_4c) * 4) + local_2fc;
    }
    local_2fc = local_2fc * *param_7;
    *(float *)(local_14 + -4 + local_50 * 4) = local_2fc + *(float *)(local_10 + -4 + local_50 * 4);
  }
  iVar2 = *param_2;
  for (local_48 = 1; iVar1 = DAT_100b58a0, local_48 <= iVar2; local_48 = local_48 + 1) {
    local_50 = DAT_100b58a0 + local_48;
    local_2fc = 0.0;
    local_34 = DAT_100b58a0;
    for (local_4c = 1; local_4c <= DAT_100b58a0; local_4c = local_4c + 1) {
      local_2fc = *(float *)(param_1 + local_4c * 4) *
                  *(float *)(local_14 + -4 + (local_50 - local_4c) * 4) + local_2fc;
    }
    *(float *)(local_14 + -4 + local_50 * 4) = local_2fc + *(float *)(local_14 + -4 + local_50 * 4);
    local_44 = *(float *)(local_14 + -4 + local_50 * 4) * *(float *)(local_14 + -4 + local_50 * 4) +
               local_44;
  }
  local_30 = DAT_100b58a0;
  for (local_48 = 1; local_48 <= iVar1; local_48 = local_48 + 1) {
    *(undefined4 *)(local_10 + -4 + local_48 * 4) =
         *(undefined4 *)(local_10 + -4 + (*param_2 + local_48) * 4);
    *(undefined4 *)(local_14 + -4 + local_48 * 4) =
         *(undefined4 *)(local_14 + -4 + (*param_2 + local_48) * 4);
  }
  local_38 = *param_5 * *param_5;
  local_300 = (float)*param_2 * local_38;
  FUN_10043204(param_5,SUB84((double)(local_300 / local_44),0),
               (uint)((ulonglong)(double)(local_300 / local_44) >> 0x20));
  local_40 = (float)extraout_ST0_00;
  local_30 = *param_2;
  for (local_48 = 1; local_48 <= local_30; local_48 = local_48 + 1) {
    *(float *)(param_4 + local_48 * 4) =
         local_40 * *(float *)(local_14 + -4 + (DAT_100b58a0 + local_48) * 4);
  }
  FUN_100431ce();
  return;
}

