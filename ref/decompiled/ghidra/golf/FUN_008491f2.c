/* Ghidra decompiled: golf.exe */
/* Function: FUN_008491f2 @ 0x008491F2 */


uint FUN_008491f2(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 local_110 [260];
  uint local_c;
  int local_8;
  
  local_c._0_2_ = 1;
  uVar5 = *(undefined4 *)(param_2 + 0x18);
  local_8 = *param_3;
  iVar3 = (**(code **)(local_8 + 4))(param_1,local_110,0x104,uVar5);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    sVar1 = FUN_00849349(local_110,param_3,param_4,param_5,param_6,param_7);
    if (sVar1 == 0) {
      uVar4 = 0;
    }
    else {
      iVar3 = (**(code **)(local_8 + 0x10))(local_110,0x80000000,1,0,3,0x10000000,0);
      if (iVar3 == -1) {
        uVar5 = (**(code **)(local_8 + 0x78))(local_110);
        FUN_0084ae2d(param_3,uVar5);
        uVar4 = 0;
      }
      else {
        sVar1 = FUN_008499b9(iVar3,uVar5,param_3,0,param_4,param_6);
        local_c = CONCAT22(local_c._2_2_,sVar1);
        if (sVar1 == 1) {
          uVar2 = FUN_0084a4cb(param_3,param_4,param_6);
          local_c = CONCAT22(local_c._2_2_,uVar2);
        }
        if ((local_c & 0xffff) == 0) {
          FUN_0084a1c1(iVar3,param_2,local_8,param_4,param_6);
        }
        (**(code **)(local_8 + 0x1c))(iVar3);
        uVar4 = local_c & 0xffff;
      }
    }
  }
  return uVar4;
}

