/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009a9b0 @ 0x1009A9B0 */
/* Body size: 762 addresses */


undefined4 __cdecl FUN_1009a9b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_10126d00 == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_10126d90) || (param_1[5] != DAT_10126da0)) {
    if (DAT_10128a20 == 0) {
      FUN_1009acb0(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_1009acb0(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10128ac0 == 0) {
        FUN_1009acb0(1,1,param_1[5],(uint)DAT_10128ac2,(uint)DAT_10128ac6,(uint)DAT_10128ac4,0,
                     (uint)DAT_10128ac8,(uint)DAT_10128aca,(uint)DAT_10128acc,(uint)DAT_10128ace);
      }
      else {
        FUN_1009acb0(1,0,param_1[5],(uint)DAT_10128ac2,0,0,(uint)DAT_10128ac6,(uint)DAT_10128ac8,
                     (uint)DAT_10128aca,(uint)DAT_10128acc,(uint)DAT_10128ace);
      }
      if (DAT_10128a6c == 0) {
        FUN_1009acb0(0,1,param_1[5],(uint)DAT_10128a6e,(uint)DAT_10128a72,(uint)DAT_10128a70,0,
                     (uint)DAT_10128a74,(uint)DAT_10128a76,(uint)DAT_10128a78,(uint)DAT_10128a7a);
      }
      else {
        FUN_1009acb0(0,0,param_1[5],(uint)DAT_10128a6e,0,0,(uint)DAT_10128a72,(uint)DAT_10128a74,
                     (uint)DAT_10128a76,(uint)DAT_10128a78,(uint)DAT_10128a7a);
      }
    }
  }
  if (DAT_10126d94 < DAT_10126da4) {
    if ((param_1[7] < DAT_10126d94) || (DAT_10126da4 < param_1[7])) {
      return 0;
    }
    if ((DAT_10126d94 < param_1[7]) && (param_1[7] < DAT_10126da4)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_10126da4) || (DAT_10126d94 < param_1[7])) {
      return 1;
    }
    if ((DAT_10126da4 < param_1[7]) && (param_1[7] < DAT_10126d94)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_10126d94) {
    if (iVar2 < DAT_10126d98) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_10126da8) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

