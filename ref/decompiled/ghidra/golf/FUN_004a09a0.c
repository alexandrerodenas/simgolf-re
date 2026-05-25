/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a09a0 @ 0x004A09A0 */


undefined4 __thiscall FUN_004a09a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(*(undefined4 *)(param_1 + 500)) {
  case 1:
  case 4:
  case 8:
  case 0x10:
    uVar1 = FUN_00489890(param_2,param_3);
    return uVar1;
  case 2:
    uVar1 = FUN_0048c640(param_2,param_3,0);
    return uVar1;
  default:
    return 0;
  }
}

