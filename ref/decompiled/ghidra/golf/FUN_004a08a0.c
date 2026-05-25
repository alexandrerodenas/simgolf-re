/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a08a0 @ 0x004A08A0 */


undefined4 __thiscall
FUN_004a08a0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  *(uint *)(param_1 + 500) = param_2 & 0x1f;
  switch(param_2 & 0x1f) {
  case 1:
    uVar1 = FUN_0049ed20(param_3,param_4,param_5,param_6);
    return uVar1;
  case 2:
    uVar1 = FUN_0048a5d0(param_3,param_4,param_5,param_6);
    return uVar1;
  default:
    return 3;
  case 4:
    uVar1 = FUN_004a2400(param_3,param_4,param_5,param_6);
    return uVar1;
  case 8:
    uVar1 = FUN_004a3880(param_3,param_4,param_5,param_6);
    return uVar1;
  case 0x10:
    uVar1 = FUN_0049d6d0(param_3,param_4,param_5,param_6);
    return uVar1;
  }
}

