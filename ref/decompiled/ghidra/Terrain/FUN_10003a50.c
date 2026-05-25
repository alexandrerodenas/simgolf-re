/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10003a50 @ 0x10003A50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10003a50(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  int iVar1;
  void *this;
  void *this_00;
  undefined4 *puVar2;
  float10 fVar3;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 local_74 [16];
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puVar2 = local_74;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  fVar3 = thunk_FUN_10001880(param_1);
  local_8 = (float)fVar3;
  FUN_10019214(this);
  local_c = (float)extraout_ST0;
  FUN_10019164(this_00);
  local_10 = (float)extraout_ST0_00;
  local_14 = 1.0;
  local_18 = 0.0;
  local_1c = 0.0;
  local_20 = 0.0;
  local_24 = 1.0;
  local_28 = 0.0;
  local_2c = 0.0;
  local_30 = 0.0;
  local_34 = 1.0;
  if (((param_2 == _DAT_1005f1e0) || (param_3 != _DAT_1005f1e0)) || (param_4 != _DAT_1005f1e0)) {
    if (((param_2 == _DAT_1005f1e0) && (param_3 != _DAT_1005f1e0)) && (param_4 == _DAT_1005f1e0)) {
      local_14 = local_c;
      local_2c = -local_10;
      local_34 = local_c;
      *param_5 = local_10 * param_5[2] + local_c * *param_5;
      param_5[2] = local_c * param_5[2] + local_2c * *param_5;
      local_1c = local_10;
    }
    else if (((param_2 == _DAT_1005f1e0) && (param_3 == _DAT_1005f1e0)) &&
            (param_4 != _DAT_1005f1e0)) {
      local_14 = local_c;
      local_18 = -local_10;
      local_24 = local_c;
      *param_5 = local_18 * param_5[1] + local_c * *param_5;
      param_5[1] = local_c * param_5[1] + local_10 * *param_5;
      local_20 = local_10;
    }
  }
  else {
    local_24 = local_c;
    local_28 = -local_10;
    local_34 = local_c;
    param_5[1] = local_28 * param_5[2] + local_c * param_5[1];
    param_5[2] = local_c * param_5[2] + local_10 * param_5[1];
    local_30 = local_10;
  }
  local_8 = 2.529007e-29;
  __chkesp();
  return;
}

