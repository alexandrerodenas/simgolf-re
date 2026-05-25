/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10032730 @ 0x10032730 */


void __cdecl
FUN_10032730(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      local_10 = (&DAT_10067968)[param_4];
    }
    else {
      local_10 = *(int *)(&DAT_1006799c + param_4 * 4);
    }
    local_10 = local_10 + 1;
    iVar1 = (int)(local_10 + (param_3 - 0x46) * 0x16d + -0xd + ((int)(param_3 - 1) >> 2)) % 7;
    if (iVar1 < param_6) {
      local_c = (param_5 + -1) * 7 + local_10 + (param_6 - iVar1);
    }
    else {
      local_c = param_5 * 7 + local_10 + (param_6 - iVar1);
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        local_14 = *(int *)(&DAT_1006796c + param_4 * 4);
      }
      else {
        local_14 = *(int *)(&DAT_100679a0 + param_4 * 4);
      }
      if (local_14 < local_c) {
        local_c = local_c + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      local_18 = (&DAT_10067968)[param_4];
    }
    else {
      local_18 = *(int *)(&DAT_1006799c + param_4 * 4);
    }
    local_c = local_18 + param_7;
  }
  if (param_1 == 1) {
    DAT_10067954 = local_c;
    DAT_10067958 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    DAT_10067950 = param_3;
  }
  else {
    DAT_10067964 = local_c;
    DAT_10067968 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000 +
                   DAT_100678c4 * 1000;
    if (DAT_10067968 < 0) {
      DAT_10067968 = DAT_10067968 + 86400000;
      DAT_10067964 = local_c + -1;
    }
    else if (86399999 < DAT_10067968) {
      DAT_10067968 = DAT_10067968 + -86400000;
      DAT_10067964 = local_c + 1;
    }
    DAT_10067960 = param_3;
  }
  return;
}

