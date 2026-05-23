/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1006d250 @ 0x1006D250 */
/* Body size: 893 addresses */


void __cdecl FUN_1006d250(undefined4 *param_1,void *param_2,void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_a8 [16];
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [15];
  undefined4 uStack_8;
  
  puVar2 = local_a8;
  for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (param_2 != (void *)0x0) {
    FUN_10078980((int)param_1,param_2);
  }
  if (param_3 != (void *)0x0) {
    FUN_10078980((int)param_1,param_3);
  }
  FUN_10078ed0((int)param_1,(void *)param_1[0x2b]);
  FUN_10078ed0((int)param_1,(void *)param_1[0x3b]);
  FUN_10078ed0((int)param_1,(void *)param_1[0x3a]);
  FUN_10078ed0((int)param_1,(void *)param_1[0x7b]);
  FUN_10078ed0((int)param_1,(void *)param_1[0x7c]);
  FUN_10078ed0((int)param_1,(void *)param_1[0x59]);
  FUN_10078ed0((int)param_1,(void *)param_1[0x5a]);
  FUN_10078ed0((int)param_1,(void *)param_1[0x5b]);
  if ((param_1[0x1b] & 0x1000) != 0) {
    FUN_10078750((int)param_1,(void *)param_1[0x45]);
  }
  if ((param_1[0x1b] & 0x2000) != 0) {
    FUN_10078ed0((int)param_1,(void *)param_1[0x62]);
  }
  if ((param_1[0x1b] & 0x4000) != 0) {
    FUN_10078ed0((int)param_1,(void *)param_1[0x7d]);
  }
  if (param_1[0x5c] != 0) {
    local_58 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    for (local_54 = 0; local_54 < local_58; local_54 = local_54 + 1) {
      FUN_10078ed0((int)param_1,*(void **)(param_1[0x5c] + local_54 * 4));
    }
    FUN_10078ed0((int)param_1,(void *)param_1[0x5c]);
  }
  if (param_1[0x5d] != 0) {
    local_60 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    for (local_5c = 0; local_5c < local_60; local_5c = local_5c + 1) {
      FUN_10078ed0((int)param_1,*(void **)(param_1[0x5d] + local_5c * 4));
    }
    FUN_10078ed0((int)param_1,(void *)param_1[0x5d]);
  }
  if (param_1[0x5e] != 0) {
    local_68 = 1 << (8U - (char)param_1[0x56] & 0x1f);
    for (local_64 = 0; local_64 < local_68; local_64 = local_64 + 1) {
      FUN_10078ed0((int)param_1,*(void **)(param_1[0x5e] + local_64 * 4));
    }
    FUN_10078ed0((int)param_1,(void *)param_1[0x5e]);
  }
  FUN_10078ed0((int)param_1,(void *)param_1[0x84]);
  FUN_1009be70((int)(param_1 + 0x1d));
  FUN_10078ed0((int)param_1,(void *)param_1[0x6c]);
  FUN_1007f3a0(local_44,param_1,0x40);
  local_48 = param_1[0x10];
  local_4c = param_1[0x11];
  local_50 = param_1[0x12];
  _memset(param_1,0,0x21c);
  param_1[0x10] = local_48;
  param_1[0x11] = local_4c;
  param_1[0x12] = local_50;
  FUN_1007f3a0(param_1,local_44,0x40);
  uStack_8 = 0x1006d5c9;
  __chkesp();
  return;
}

