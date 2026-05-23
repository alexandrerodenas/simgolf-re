/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484e30 @ 0x00484E30 */
/* Body size: 51 addresses */


undefined4 __thiscall FUN_00484e30(int *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x88))(param_2,param_3);
  if ((param_3 & 4) != 0) {
    return 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x8c))();
  return uVar1;
}

