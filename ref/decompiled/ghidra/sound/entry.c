/* Ghidra decompiled: sound.dll */
/* Function: entry @ 0x100430FE */


int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  iVar2 = DAT_100b552c;
  if (param_2 != 0) {
    if ((param_2 != 1) && (param_2 != 2)) goto LAB_10043146;
    if ((DAT_100b7094 != (code *)0x0) &&
       (iVar2 = (*DAT_100b7094)(param_1,param_2,param_3), iVar2 == 0)) {
      return 0;
    }
    iVar2 = FUN_10043025(param_1,param_2);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_10043146:
  iVar2 = thunk_FUN_10009210(param_1,param_2);
  if (param_2 == 1) {
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_10043025(param_1,0);
  }
  if ((param_2 != 0) && (param_2 != 3)) {
    return iVar2;
  }
  iVar3 = FUN_10043025(param_1,param_2);
  param_2 = iVar2;
  if (iVar3 == 0) {
    param_2 = 0;
  }
  if (param_2 != 0) {
    if (DAT_100b7094 != (code *)0x0) {
      iVar2 = (*DAT_100b7094)(param_1,iVar1,param_3);
      return iVar2;
    }
    return param_2;
  }
  return 0;
}

