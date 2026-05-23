/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004410 @ 0x10004410 */
/* Body size: 222 addresses */


void FUN_10004410(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *this;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 local_98 [16];
  float local_58;
  float local_54 [3];
  float local_48 [3];
  float local_3c [3];
  float local_30 [3];
  float local_24 [3];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float *local_8;
  
  puVar6 = local_98;
  for (iVar5 = 0x25; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0xcccccccc;
    puVar6 = puVar6 + 1;
  }
  thunk_FUN_10003050(&local_18);
  local_58 = local_8[3] * param_2[3];
  fVar7 = thunk_FUN_10003c90(local_8,param_2);
  local_c = (float)((float10)local_58 - fVar7);
  pfVar1 = thunk_FUN_100039b0(local_8,local_48,param_2[3]);
  pfVar4 = local_54;
  pfVar2 = thunk_FUN_100039b0(param_2,local_30,local_8[3]);
  pfVar3 = local_3c;
  this = thunk_FUN_10003e50(local_8,local_24,param_2);
  pfVar3 = thunk_FUN_10003790(this,pfVar3,(int)pfVar2);
  pfVar4 = thunk_FUN_10003790(pfVar3,pfVar4,(int)pfVar1);
  local_18 = *pfVar4;
  local_14 = pfVar4[1];
  local_10 = pfVar4[2];
  *param_1 = local_18;
  param_1[1] = local_14;
  param_1[2] = local_10;
  param_1[3] = local_c;
  local_8 = (float *)0x100044e8;
  __chkesp();
  return;
}

