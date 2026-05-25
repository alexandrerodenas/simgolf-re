/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003c640 @ 0x1003C640 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003c640(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5e4 [16];
  int local_5a4;
  undefined1 local_5a0 [40];
  undefined1 local_578 [400];
  int local_3e8;
  int local_3e4;
  undefined4 *local_3e0;
  int local_3dc;
  undefined4 *local_3d8;
  int local_3d4;
  int local_3d0;
  int *local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  float *local_3a0;
  float local_39c;
  float local_398 [2];
  undefined1 local_390 [16];
  int local_380;
  int local_37c;
  int local_378;
  int local_374;
  float *local_370;
  undefined1 local_36c [624];
  float local_fc;
  undefined1 local_f8 [240];
  int local_8;
  
  puVar2 = local_5e4;
  for (iVar1 = 0x178; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  if (param_2 != 0) {
    param_2 = param_2 + -4;
  }
  if (param_5 != 0) {
    param_5 = param_5 + -4;
  }
  local_3b4 = param_6 + 0x10;
  local_3b8 = param_6 + 0x880;
  local_3bc = param_6 + 0x10f0;
  local_3c0 = param_6 + 0x1bd0;
  local_370 = (float *)(param_6 + 0x20b0);
  local_3c8 = param_6 + 0x20b4;
  local_3cc = (int *)(param_6 + 0x20dc);
  local_3d4 = param_6 + 0x20e0;
  local_3a4 = param_6 + 0x20ec;
  local_374 = param_6 + 0x2104;
  local_3d8 = (undefined4 *)(param_6 + 0x211c);
  local_3e0 = (undefined4 *)(param_6 + 0x213c);
  local_3c4 = param_6 + 0x2148;
  local_3a0 = (float *)(param_6 + 0x21c0);
  iVar1 = 0x2d0 - DAT_100b58a4;
  for (local_3a8 = 0xb5; local_3a8 <= iVar1; local_3a8 = local_3a8 + 1) {
    *(undefined4 *)(param_6 + -0x2c4 + local_3a8 * 4) =
         *(undefined4 *)(param_6 + -0x2c4 + (DAT_100b58a4 + local_3a8) * 4);
    *(undefined4 *)(param_6 + 0x5ac + local_3a8 * 4) =
         *(undefined4 *)(param_6 + 0x5ac + (DAT_100b58a4 + local_3a8) * 4);
  }
  iVar1 = 0x21c - DAT_100b58a4;
  for (local_3a8 = 0xe5; local_3a8 <= iVar1; local_3a8 = local_3a8 + 1) {
    *(undefined4 *)(param_6 + 0x183c + local_3a8 * 4) =
         *(undefined4 *)(param_6 + 0x183c + (DAT_100b58a4 + local_3a8) * 4);
  }
  iVar1 = 0x2d0 - DAT_100b58a4;
  for (local_3a8 = 0x19; local_3a8 <= iVar1; local_3a8 = local_3a8 + 1) {
    *(undefined4 *)(param_6 + 0x108c + local_3a8 * 4) =
         *(undefined4 *)(param_6 + 0x108c + (DAT_100b58a4 + local_3a8) * 4);
  }
  local_3ac = 1;
  iVar1 = *local_3cc;
  for (local_3a8 = 1; local_3a8 <= iVar1 + -1; local_3a8 = local_3a8 + 1) {
    if (DAT_100b58a4 < *(int *)(param_6 + 0x20b0 + local_3a8 * 4)) {
      *(int *)(param_6 + 0x20b0 + local_3ac * 4) =
           *(int *)(param_6 + 0x20b0 + local_3a8 * 4) - DAT_100b58a4;
      local_3ac = local_3ac + 1;
    }
  }
  *local_3cc = local_3ac;
  *local_3d8 = *(undefined4 *)(param_6 + 0x2124);
  *(undefined4 *)(param_6 + 0x2120) = *(undefined4 *)(param_6 + 0x2128);
  for (local_3a8 = 1; iVar1 = DAT_100b58a4, local_3a8 < 3; local_3a8 = local_3a8 + 1) {
    *(int *)(param_6 + 0x20e4 + local_3a8 * 8) =
         *(int *)(param_6 + 0x20e4 + (local_3a8 * 2 + 2) * 4) - DAT_100b58a4;
    *(int *)(param_6 + 0x20e8 + local_3a8 * 8) =
         *(int *)(param_6 + 0x20e8 + (local_3a8 * 2 + 2) * 4) - DAT_100b58a4;
    *(int *)(param_6 + 0x20fc + local_3a8 * 8) =
         *(int *)(param_6 + 0x20fc + (local_3a8 * 2 + 2) * 4) - DAT_100b58a4;
    *(int *)(param_6 + 0x2100 + local_3a8 * 8) =
         *(int *)(param_6 + 0x2100 + (local_3a8 * 2 + 2) * 4) - DAT_100b58a4;
    *(undefined4 *)(param_6 + 0x20dc + local_3a8 * 4) = *(undefined4 *)(local_3d4 + local_3a8 * 4);
    local_3d8[local_3a8 * 2] = local_3d8[local_3a8 * 2 + 2];
    *(undefined4 *)(param_6 + 0x2120 + local_3a8 * 8) =
         *(undefined4 *)(param_6 + 0x2120 + (local_3a8 * 2 + 2) * 4);
    *(undefined4 *)(param_6 + 0x2138 + local_3a8 * 4) = local_3e0[local_3a8];
    iVar1 = DAT_100b58a0;
    for (local_3ac = 1; local_3ac <= iVar1; local_3ac = local_3ac + 1) {
      *(undefined4 *)(param_6 + 0x211c + (local_3ac + local_3a8 * 10) * 4) =
           *(undefined4 *)(param_6 + 0x211c + (local_3ac + (local_3a8 + 1) * 10) * 4);
    }
  }
  local_39c = 0.0;
  local_8 = DAT_100b58a4;
  for (local_3a8 = 1; local_3a8 <= iVar1; local_3a8 = local_3a8 + 1) {
    *(float *)(param_6 + -0x2c4 + ((0x2d0 - DAT_100b58a4) + local_3a8) * 4) =
         *(float *)(param_1 + local_3a8 * 4) * _DAT_1005ebcc - *local_370;
    local_39c = local_39c + *(float *)(param_6 + -0x2c4 + ((0x2d0 - DAT_100b58a4) + local_3a8) * 4);
  }
  if ((float)DAT_100b58a4 < local_39c) {
    *local_370 = *local_370 + _DAT_1005b8a8;
  }
  local_5a4 = -DAT_100b58a4;
  if (local_39c < (float)local_5a4) {
    *local_370 = *local_370 + _DAT_1005ebe0;
  }
  local_3a8 = 0x2d1 - DAT_100b58a4;
  FUN_10040da0(param_6 + -0x2c4 + local_3a8 * 4,param_6 + 0x5ac + local_3a8 * 4,&DAT_100b58a4,
               (float *)&DAT_10064a14,local_3a0);
  FUN_10040ab0(local_3b8,local_3c8,local_3cc,(int *)&DAT_100648e8,(int *)&DAT_100648ec,
               (int *)&DAT_100648f0,&DAT_100b58a4,param_6);
  FUN_10040740(local_3c8,local_3cc,&DAT_100648e8,(undefined4 *)(local_3d4 + 8),local_3a4,
               (int *)&DAT_100648f4,&DAT_100b58a4,(int *)&DAT_100648f8,(int *)&DAT_100648fc,
               (int *)&DAT_10064900);
  FUN_100404d0(local_3b4 + 0x390,local_3bc + 0x600,(int *)&DAT_10064908,&DAT_100b58a4);
  FUN_10040330(local_3bc + 0x330,local_3c0,(int *)&DAT_10064908,&DAT_100b58a4,local_398);
  FUN_10040000(local_3c0,(int *)&DAT_100648fc,0x10064914,(int *)&DAT_1006490c,(int)local_f8,
               &local_3e4,&local_3e8,&local_3dc);
  for (local_fc = 1.4013e-45; (int)local_fc < 3; local_fc = (float)((int)local_fc + 1)) {
    FUN_1003f720(local_3a4 + 0x10,local_3b4,local_3bc,0x10064a04,(int *)&local_fc,
                 (float *)(local_f8 + local_3e4 * 4 + -4),(float *)(local_f8 + local_3e8 * 4 + -4),
                 &local_3dc,(int)local_398,local_3d4,(int)local_3d8,&DAT_100648f4,param_6);
  }
  FUN_1003f310((int)local_f8,(int *)&DAT_1006490c,&local_3e4,local_3d8 + 7,param_3,&local_378,
               param_6);
  local_3d0 = *(int *)(&DAT_10064910 + local_378 * 4);
  FUN_1003edc0(&local_3d0,(int)local_3d8,(int *)(local_3d4 + 8),(int *)&DAT_100648f4,local_3a4,
               local_374,(int)local_390,&DAT_100b58a4,(int *)&DAT_100648fc);
  local_3b0 = (*(int *)(local_374 + 0x14) + 1) - *(int *)(local_374 + 0x10);
  FUN_1003ed00(&local_3b0,local_3b8 + -0x2d4 + *(int *)(local_374 + 0x10) * 4,(int)local_36c);
  local_8 = (local_37c - local_380) + 1;
  FUN_1003ec60(&local_8,(int)(local_36c + (local_380 - *(int *)(local_374 + 0x10)) * 4),
               (float *)(local_3e0 + 2));
  FUN_1003e9f0(&DAT_100b58a0,(int *)&DAT_10064910,&local_3b0,(int)local_36c,(int)local_578,
               (int)local_5a0);
  FUN_1003e6d0(&DAT_100b58a0,(int)local_578,(int)local_5a0,local_3c4 + 0x50);
  FUN_1003e600(&DAT_100b58a0,local_3c4 + 0x28,local_3c4 + 0x50);
  *(undefined4 *)(param_2 + 4) = local_3d8[2];
  *(undefined4 *)(param_2 + 8) = local_3d8[3];
  *param_4 = *local_3e0;
  iVar1 = DAT_100b58a0;
  for (local_3a8 = 1; local_3a8 <= iVar1; local_3a8 = local_3a8 + 1) {
    *(undefined4 *)(param_5 + local_3a8 * 4) = *(undefined4 *)(local_3c4 + -4 + local_3a8 * 4);
  }
  local_8 = 0x1003d033;
  FUN_100431ce();
  return;
}

