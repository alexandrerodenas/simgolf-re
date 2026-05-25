/* Ghidra decompiled: golf.exe */
/* Function: FUN_00848bfa @ 0x00848BFA */


uint FUN_00848bfa(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_20 [20];
  uint local_c;
  int local_8;
  
  local_8 = *param_3;
  local_c = local_c & 0xffff0000;
  uVar3 = FUN_0084aa1e(0x33);
  uVar3 = FUN_0084ad10(local_20,uVar3);
  iVar4 = (**(code **)(local_8 + 0x50))(0,0,uVar3);
  if (iVar4 == 0) {
    uVar3 = (**(code **)(local_8 + 0x78))();
    FUN_0084b1ee(param_3,uVar3);
    uVar5 = 0;
  }
  else {
    iVar6 = (**(code **)(local_8 + 0x74))(iVar4,0xffffffff);
    if (iVar6 == 0) {
      sVar1 = FUN_008491f2(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      local_c = CONCAT22(local_c._2_2_,sVar1);
      if (sVar1 == 1) {
        uVar2 = FUN_0084a69b(param_3,param_4,param_6);
        local_c = CONCAT22(local_c._2_2_,uVar2);
      }
    }
    else if (iVar6 == -1) {
      uVar3 = (**(code **)(local_8 + 0x78))();
      FUN_0084b1ee(param_3,uVar3);
    }
    (**(code **)(local_8 + 0x60))(iVar4);
    (**(code **)(local_8 + 0x1c))(iVar4);
    uVar5 = local_c & 0xffff;
  }
  return uVar5;
}

