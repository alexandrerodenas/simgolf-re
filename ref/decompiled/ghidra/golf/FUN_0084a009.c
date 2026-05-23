/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084a009 @ 0x0084A009 */
/* Body size: 440 addresses */


undefined4
FUN_0084a009(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_34;
  int local_28;
  int local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  undefined1 local_c [4];
  int local_8;
  
  local_8 = *param_5;
  local_10 = (**(code **)(local_8 + 0x2c))(0x40,0x800);
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(local_8 + 0x24))(param_1,param_3,0,0);
    local_1c = 0x4754700a;
    local_18 = 0x5b60268d;
    for (; param_4 != 0; param_4 = param_4 - local_20) {
      if (param_4 < 0x800) {
        local_34 = param_4;
      }
      else {
        local_34 = 0x800;
      }
      local_14 = local_34;
      iVar1 = (**(code **)(local_8 + 0x14))(param_1,local_10,local_34,&local_20,0);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(local_8 + 0x78))(0);
        FUN_0084aeb3(param_5,uVar2);
        (**(code **)(local_8 + 0x30))(local_10);
        return 0;
      }
      if (local_20 == 0) {
        uVar2 = (**(code **)(local_8 + 0x78))(0);
        FUN_0084aeb3(param_5,uVar2);
        (**(code **)(local_8 + 0x30))(local_10);
        return 0;
      }
      for (local_28 = 0; local_28 < local_20; local_28 = local_28 + 1) {
        uVar3 = local_1c ^ local_18;
        *(byte *)(local_10 + local_28) =
             *(byte *)(local_10 + local_28) ^
             (byte)uVar3 ^ (byte)(uVar3 >> 8) ^ (byte)(uVar3 >> 0x10) ^ (byte)(uVar3 >> 0x18);
        local_18 = local_18 * 0x100 + (uint)*(byte *)(local_10 + local_28);
      }
      iVar1 = (**(code **)(local_8 + 0x18))(param_2,local_10,local_20,local_c,0);
      if (iVar1 == 0) {
        uVar2 = (**(code **)(local_8 + 0x78))();
        FUN_0084af1f(param_5,uVar2);
        (**(code **)(local_8 + 0x30))(local_10);
        return 0;
      }
    }
    (**(code **)(local_8 + 0x30))(local_10);
    uVar2 = 1;
  }
  return uVar2;
}

