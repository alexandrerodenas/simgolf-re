/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10032430 @ 0x10032430 */
/* Body size: 762 addresses */


undefined4 __cdecl FUN_10032430(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_100678c0 == 0) {
    return 0;
  }
  if ((param_1[5] != DAT_10067950) || (param_1[5] != DAT_10067960)) {
    if (DAT_10110a48 == 0) {
      FUN_10032730(1,1,param_1[5],4,1,0,0,2,0,0,0);
      FUN_10032730(0,1,param_1[5],10,5,0,0,2,0,0,0);
    }
    else {
      if (DAT_10110ae8 == 0) {
        FUN_10032730(1,1,param_1[5],(uint)DAT_10110aea,(uint)DAT_10110aee,(uint)DAT_10110aec,0,
                     (uint)DAT_10110af0,(uint)DAT_10110af2,(uint)DAT_10110af4,(uint)DAT_10110af6);
      }
      else {
        FUN_10032730(1,0,param_1[5],(uint)DAT_10110aea,0,0,(uint)DAT_10110aee,(uint)DAT_10110af0,
                     (uint)DAT_10110af2,(uint)DAT_10110af4,(uint)DAT_10110af6);
      }
      if (DAT_10110a94 == 0) {
        FUN_10032730(0,1,param_1[5],(uint)DAT_10110a96,(uint)DAT_10110a9a,(uint)DAT_10110a98,0,
                     (uint)DAT_10110a9c,(uint)DAT_10110a9e,(uint)DAT_10110aa0,(uint)DAT_10110aa2);
      }
      else {
        FUN_10032730(0,0,param_1[5],(uint)DAT_10110a96,0,0,(uint)DAT_10110a9a,(uint)DAT_10110a9c,
                     (uint)DAT_10110a9e,(uint)DAT_10110aa0,(uint)DAT_10110aa2);
      }
    }
  }
  if (DAT_10067954 < DAT_10067964) {
    if ((param_1[7] < DAT_10067954) || (DAT_10067964 < param_1[7])) {
      return 0;
    }
    if ((DAT_10067954 < param_1[7]) && (param_1[7] < DAT_10067964)) {
      return 1;
    }
  }
  else {
    if ((param_1[7] < DAT_10067964) || (DAT_10067954 < param_1[7])) {
      return 1;
    }
    if ((DAT_10067964 < param_1[7]) && (param_1[7] < DAT_10067954)) {
      return 0;
    }
  }
  iVar2 = (*param_1 + param_1[1] * 0x3c + param_1[2] * 0xe10) * 1000;
  if (param_1[7] == DAT_10067954) {
    if (iVar2 < DAT_10067958) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (iVar2 < DAT_10067968) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

