/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10098f40 @ 0x10098F40 */
/* Body size: 1389 addresses */


void __cdecl FUN_10098f40(undefined1 param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int local_c;
  int local_8;
  
  switch(param_1) {
  case 0x25:
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 0x41:
    FID_conflict__store_str(*(char **)(param_5 + 0x1c + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x42:
    FID_conflict__store_str(*(char **)(param_5 + 0x68 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 0x48:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(param_2[2],2,param_3,param_4);
    break;
  case 0x49:
    DAT_10129b9c = DAT_10129b8c;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_100995b0(local_8,2,param_3,param_4);
    break;
  case 0x4d:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(param_2[1],2,param_3,param_4);
    break;
  case 0x53:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(*param_2,2,param_3,param_4);
    break;
  case 0x55:
    local_c = param_2[6];
    goto LAB_100992ed;
  case 0x57:
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_100992ed:
    DAT_10129b9c = DAT_10129b8c;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_100995b0(local_8,2,param_3,param_4);
    break;
  case 0x58:
    DAT_10129b8c = 0;
    FUN_10099710(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 0x59:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 0x5a:
  case 0x7a:
    FUN_1009a570();
    FID_conflict__store_str((&PTR_DAT_10126d88)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 0x61:
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 0x62:
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 99:
    if (DAT_10129b8c == 0) {
      FUN_10099710(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10099710(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_10129b8c = 0;
      FUN_10099710(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_10099710(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 100:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(param_2[3],2,param_3,param_4);
    break;
  case 0x6a:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(param_2[7] + 1,3,param_3,param_4);
    break;
  case 0x6d:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(param_2[4] + 1,2,param_3,param_4);
    break;
  case 0x70:
    if (param_2[2] < 0xc) {
      FID_conflict__store_str(*(char **)(param_5 + 0x98),param_3,(int *)param_4);
    }
    else {
      FID_conflict__store_str(*(char **)(param_5 + 0x9c),param_3,(int *)param_4);
    }
    break;
  case 0x77:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(param_2[6],1,param_3,param_4);
    break;
  case 0x78:
    if (DAT_10129b8c == 0) {
      FUN_10099710(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_10129b8c = 0;
      FUN_10099710(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 0x79:
    DAT_10129b9c = DAT_10129b8c;
    FUN_100995b0(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}

