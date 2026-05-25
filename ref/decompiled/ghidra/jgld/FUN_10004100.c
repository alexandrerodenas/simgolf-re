/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004100 @ 0x10004100 */


void FUN_10004100(float *param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_88 [16];
  float local_48 [4];
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float *local_8;
  
  puVar3 = local_88;
  for (iVar2 = 0x21; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  thunk_FUN_10003050(&local_18);
  thunk_FUN_10003050(&local_28);
  if (param_1 != (float *)0x0) {
    local_28 = *param_1;
    local_24 = param_1[1];
    local_20 = param_1[2];
    local_1c = param_1[3];
    local_c = 0.0;
    local_18 = *local_8;
    local_14 = local_8[1];
    local_10 = local_8[2];
    pfVar1 = (float *)thunk_FUN_10004410(local_38,&local_18);
    local_18 = *pfVar1;
    local_14 = pfVar1[1];
    local_10 = pfVar1[2];
    local_c = pfVar1[3];
    thunk_FUN_10004530(&local_28);
    pfVar1 = (float *)thunk_FUN_10004410(local_48,&local_28);
    local_18 = *pfVar1;
    local_14 = pfVar1[1];
    local_10 = pfVar1[2];
    local_c = pfVar1[3];
    *local_8 = local_18;
    local_8[1] = local_14;
    local_8[2] = local_10;
  }
  local_8 = (float *)0x100041ed;
  __chkesp();
  return;
}

