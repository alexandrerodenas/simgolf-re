/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30006990 @ 0x30006990 */


int __cdecl FUN_30006990(int *param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_3[2] < 0x20) {
    iVar2 = 0;
  }
  else {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_24 = param_3[3];
    uVar3 = param_3[2] / 2 + 0xfU & 0xfffffff0;
    local_28 = uVar3;
    FUN_30006830(param_1,param_4,param_5,&local_30);
    local_2c = param_3[1];
    local_24 = param_3[3];
    local_30 = *param_3 + uVar3;
    local_28 = param_3[2] - uVar3;
    FUN_30006830(param_2,param_4,param_5,&local_30);
    iVar2 = (param_3[3] * param_3[2] - param_1[3] * param_1[2]) - param_2[3] * param_2[2];
  }
  if (0x1f < param_3[3]) {
    local_30 = *param_3;
    local_2c = param_3[1];
    local_28 = param_3[2];
    uVar3 = param_3[3] / 2 + 0xfU & 0xfffffff0;
    local_24 = uVar3;
    FUN_30006830(&local_20,param_4,param_5,&local_30);
    local_30 = *param_3;
    local_28 = param_3[2];
    local_2c = param_3[1] + uVar3;
    local_24 = param_3[3] - uVar3;
    FUN_30006830(&local_10,param_4,param_5,&local_30);
    iVar1 = (param_3[3] * param_3[2] - local_4 * local_8) - local_14 * local_18;
    if (iVar2 < iVar1) {
      *param_1 = local_20;
      param_1[1] = local_1c;
      param_1[2] = local_18;
      param_1[3] = local_14;
      *param_2 = local_10;
      param_2[1] = local_c;
      param_2[2] = local_8;
      param_2[3] = local_4;
      return iVar1;
    }
  }
  return iVar2;
}

