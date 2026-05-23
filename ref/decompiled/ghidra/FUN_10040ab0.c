/* Ghidra decompiled: sound.dll */
/* Function: FUN_10040ab0 @ 0x10040AB0 */
/* Body size: 749 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_10040ab0(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            int *param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 local_84 [16];
  float local_44;
  float local_40;
  float *local_3c;
  float local_38;
  int *local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  int *local_20;
  uint *local_1c;
  uint *local_18;
  float *local_14;
  int local_10;
  float *local_c;
  float *local_8;
  
  puVar3 = local_84;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = (float *)(param_8 + 0x21c4);
  local_c = (float *)(param_8 + 0x21c8);
  local_3c = (float *)(param_8 + 0x21cc);
  local_10 = param_8 + 0x21d0;
  local_14 = (float *)(param_8 + 0x2210);
  local_18 = (uint *)(param_8 + 0x2214);
  local_1c = (uint *)(param_8 + 0x2218);
  local_34 = (int *)(param_8 + 0x221c);
  local_20 = (int *)(param_8 + 0x2220);
  if (param_2 != 0) {
    param_2 = param_2 + -4;
  }
  if (param_1 != 0) {
    local_24 = *param_5;
    param_1 = param_1 + local_24 * -4;
  }
  if (*local_20 != 0) {
    *local_34 = *local_34 - *param_7;
  }
  local_28 = *param_6;
  local_30 = *param_6 - *param_7;
  while (local_30 = local_30 + 1, local_30 <= local_28) {
    *local_8 = (*local_8 * _DAT_1005ec68 +
               *(float *)(param_1 + local_30 * 4) * *(float *)(param_1 + -4 + local_30 * 4)) /
               _DAT_1005ebfc;
    local_2c = *(float *)(param_1 + -4 + local_30 * 4);
    *local_c = (*local_c * _DAT_1005ec68 + local_2c * local_2c) / _DAT_1005ebfc;
    if (*local_c != _DAT_1005ec00) {
      if (*local_8 < _DAT_1005ec00) {
        local_40 = -*local_8;
      }
      else {
        local_40 = *local_8;
      }
      if (local_40 <= *local_c) {
        *local_3c = *local_8 / *local_c;
      }
      else {
        fVar4 = FUN_1003e380((float *)&DAT_10064e3c,local_8);
        *local_3c = (float)fVar4;
      }
    }
    local_38 = *(float *)(local_10 + -4 + *local_18 * 4);
    *local_14 = (*local_14 - *(float *)(local_10 + -4 + *local_1c * 4)) + *local_3c;
    *(float *)(local_10 + -4 + *local_1c * 4) = *local_14;
    *(float *)(local_10 + -4 + *local_18 * 4) = *local_3c;
    uVar1 = *local_18 & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    *local_18 = uVar1 + 1;
    uVar1 = *local_1c & 0x8000000f;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff0) + 1;
    }
    *local_1c = uVar1 + 1;
    local_2c = *local_14 - local_38;
    local_44 = local_2c;
    if (local_2c < _DAT_1005ec00) {
      local_44 = -local_2c;
    }
    if (local_44 <= _DAT_1005ecac) {
      if ((*local_20 != 0) && (9 < local_30 - *local_34)) {
        *local_20 = 0;
      }
    }
    else {
      if (*local_20 == 0) {
        if (*param_3 <= *param_4) {
          *(int *)(param_2 + *param_3 * 4) = local_30 + -9;
          *param_3 = *param_3 + 1;
        }
        *local_20 = 1;
      }
      *local_34 = local_30;
    }
  }
  local_8 = (float *)0x10040d99;
  FUN_100431ce();
  return;
}

