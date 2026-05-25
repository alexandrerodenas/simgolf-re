/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003b230 @ 0x1003B230 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003b230(int param_1,int *param_2,float *param_3,int param_4,int param_5,undefined4 *param_6,
            int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_3e4 [10];
  undefined4 auStack_3bc [6];
  float local_3a4;
  float local_3a0;
  int local_39c;
  int local_398;
  undefined1 local_394 [640];
  undefined4 local_114 [10];
  float local_ec;
  undefined1 local_e8 [64];
  float local_a8;
  int local_a4;
  int local_a0;
  undefined1 local_9c [64];
  float local_5c;
  undefined1 local_58 [64];
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  int local_8;
  
  puVar2 = local_3e4;
  for (iVar1 = 0xf8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  if (param_4 != 0) {
    param_4 = param_4 + -4;
  }
  if (param_5 != 0) {
    param_5 = param_5 + -4;
  }
  local_8 = param_7 + 0xa8;
  local_c = (int *)(param_7 + 0x648);
  if (*param_2 < 0x9d) {
    local_398 = *param_2;
  }
  else {
    local_398 = 0x9c;
  }
  if (local_398 < 0x14) {
    local_39c = 0x14;
  }
  else {
    local_39c = local_398;
  }
  *param_2 = local_39c;
  iVar1 = DAT_100b58a0;
  local_10 = (float)DAT_100b58a0;
  for (local_a0 = 1; local_a0 <= iVar1; local_a0 = local_a0 + 1) {
    local_18 = *(float *)(param_4 + local_a0 * 4);
    local_3a0 = local_18;
    if (_DAT_1005ebd4 < local_18) {
      local_3a0 = 0.99;
    }
    local_14 = local_3a0;
    if (local_3a0 < _DAT_1005ebd0) {
      local_3a4 = -0.99;
    }
    else {
      local_3a4 = local_3a0;
    }
    *(float *)(param_4 + local_a0 * 4) = local_3a4;
  }
  FUN_1003da50(&DAT_100b58a0,param_1 + 4,param_2,param_3,param_4 + 4,&DAT_100b58a4,(int)local_9c,
               (int)local_e8,(int)local_58,(int)local_394,(int *)&local_5c,&local_a8,param_7);
  if (0 < (int)local_5c) {
    local_10 = local_5c;
    for (local_a4 = 1; local_a4 <= (int)local_10; local_a4 = local_a4 + 1) {
      FUN_1003d8d0(auStack_3bc + local_a4 * 10,local_114,&DAT_100b58a0,(float *)&DAT_10063efc,
                   &local_ec);
      FUN_1003d1d0((int)local_114,(int *)(&local_ec + local_a4),
                   (int *)(local_9c + local_a4 * 4 + -4),local_8 + *local_c * 4,
                   (float *)(local_58 + local_a4 * 4 + -4),&local_a8,&local_ec,param_7);
      FUN_1003d0a0(local_8 + *local_c * 4,(int *)(&local_ec + local_a4),param_7);
      *local_c = *local_c + (int)(&local_ec)[local_a4];
    }
    for (local_a0 = 1; local_a0 < 0xb5; local_a0 = local_a0 + 1) {
      *(float *)(param_5 + local_a0 * 4) = *(float *)(local_8 + -4 + local_a0 * 4) / _DAT_1005ebcc;
    }
    *param_6 = 0xb4;
    *local_c = *local_c + -0xb4;
    local_10 = (float)*local_c;
    for (local_a0 = 1; local_a0 <= (int)local_10; local_a0 = local_a0 + 1) {
      *(undefined4 *)(local_8 + -4 + local_a0 * 4) = *(undefined4 *)(local_8 + 0x2cc + local_a0 * 4)
      ;
    }
  }
  local_8 = 0x1003b59b;
  FUN_100431ce();
  return;
}

