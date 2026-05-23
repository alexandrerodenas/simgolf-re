/* Ghidra decompiled: golf.exe */
/* Function: FUN_00849349 @ 0x00849349 */
/* Body size: 252 addresses */


uint FUN_00849349(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_40 [52];
  int local_c;
  int local_8;
  
  local_8 = *param_2;
  local_c = 0;
  iVar2 = (**(code **)(local_8 + 0x3c))(param_4,param_3);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_00849707(param_2,param_3,&local_c);
    if (iVar2 == 0) {
      if (((local_c == 0x70) || (local_c == 5)) &&
         (iVar2 = (**(code **)(local_8 + 0x38))(param_3,param_4), iVar2 != 0)) {
        uVar3 = FUN_0084aa1e(0x2d);
        FUN_0084ad10(local_40,uVar3);
        FUN_00849654(param_2,param_3,local_40);
        iVar2 = FUN_00849707(param_2,param_3,&local_c);
        if (iVar2 != 0) {
          local_c = 0;
        }
      }
      if (local_c != 0) {
        uVar4 = FUN_0084b076(param_2,local_c,param_3);
        return uVar4 & 0xffff0000;
      }
    }
    sVar1 = FUN_00849445(param_2,param_3,param_5);
    if (sVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}

