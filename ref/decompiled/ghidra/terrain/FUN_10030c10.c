/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10030c10 @ 0x10030C10 */
/* Body size: 1389 addresses */


void __cdecl FUN_10030c10(char param_1,int *param_2,int *param_3,uint *param_4,int param_5)

{
  int local_c;
  int local_8;
  
  switch(param_1) {
  case '%':
    *(undefined1 *)*param_3 = 0x25;
    *param_3 = *param_3 + 1;
    *param_4 = *param_4 - 1;
    break;
  case 'A':
    FID_conflict__store_str(*(char **)(param_5 + 0x1c + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 'B':
    FID_conflict__store_str(*(char **)(param_5 + 0x68 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 'H':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(param_2[2],2,param_3,param_4);
    break;
  case 'I':
    DAT_10110b5c = DAT_10110b4c;
    local_8 = param_2[2] % 0xc;
    if (local_8 == 0) {
      local_8 = 0xc;
    }
    FUN_10031280(local_8,2,param_3,param_4);
    break;
  case 'M':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(param_2[1],2,param_3,param_4);
    break;
  case 'S':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(*param_2,2,param_3,param_4);
    break;
  case 'U':
    local_c = param_2[6];
    goto LAB_10030fbd;
  case 'W':
    if (param_2[6] == 0) {
      local_c = 6;
    }
    else {
      local_c = param_2[6] + -1;
    }
LAB_10030fbd:
    DAT_10110b5c = DAT_10110b4c;
    if (param_2[7] < local_c) {
      local_8 = 0;
    }
    else {
      local_8 = param_2[7] / 7;
      if (local_c <= param_2[7] % 7) {
        local_8 = local_8 + 1;
      }
    }
    FUN_10031280(local_8,2,param_3,param_4);
    break;
  case 'X':
    DAT_10110b4c = 0;
    FUN_100313e0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
    break;
  case 'Y':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280((param_2[5] / 100 + 0x13) * 100 + param_2[5] % 100,4,param_3,param_4);
    break;
  case 'Z':
  case 'z':
    FUN_10031ff0((void *)(param_1 + -0x25));
    FID_conflict__store_str((&PTR_DAT_10067948)[param_2[8] != 0],param_3,(int *)param_4);
    break;
  case 'a':
    FID_conflict__store_str(*(char **)(param_5 + param_2[6] * 4),param_3,(int *)param_4);
    break;
  case 'b':
    FID_conflict__store_str(*(char **)(param_5 + 0x38 + param_2[4] * 4),param_3,(int *)param_4);
    break;
  case 'c':
    if (DAT_10110b4c == 0) {
      FUN_100313e0(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_100313e0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    else {
      DAT_10110b4c = 0;
      FUN_100313e0(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
      if (*param_4 != 0) {
        *(undefined1 *)*param_3 = 0x20;
        *param_3 = *param_3 + 1;
        *param_4 = *param_4 - 1;
        FUN_100313e0(*(byte **)(param_5 + 0xa8),(int)param_2,param_3,param_4,param_5);
      }
    }
    break;
  case 'd':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(param_2[3],2,param_3,param_4);
    break;
  case 'j':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(param_2[7] + 1,3,param_3,param_4);
    break;
  case 'm':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(param_2[4] + 1,2,param_3,param_4);
    break;
  case 'p':
    if (param_2[2] < 0xc) {
      FID_conflict__store_str(*(char **)(param_5 + 0x98),param_3,(int *)param_4);
    }
    else {
      FID_conflict__store_str(*(char **)(param_5 + 0x9c),param_3,(int *)param_4);
    }
    break;
  case 'w':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(param_2[6],1,param_3,param_4);
    break;
  case 'x':
    if (DAT_10110b4c == 0) {
      FUN_100313e0(*(byte **)(param_5 + 0xa0),(int)param_2,param_3,param_4,param_5);
    }
    else {
      DAT_10110b4c = 0;
      FUN_100313e0(*(byte **)(param_5 + 0xa4),(int)param_2,param_3,param_4,param_5);
    }
    break;
  case 'y':
    DAT_10110b5c = DAT_10110b4c;
    FUN_10031280(param_2[5] % 100,2,param_3,param_4);
  }
  return;
}

