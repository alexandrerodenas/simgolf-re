/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a7625 @ 0x004A7625 */


int FUN_004a7625(undefined8 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined1 local_2c [24];
  int local_14 [4];
  
  FUN_004abb8a(*param_1,local_14,local_2c);
  FUN_004abb13((uint)(0 < param_3) + param_2 + (uint)(local_14[0] == 0x2d),param_3 + 1,local_14);
  FUN_004a7686(param_2,param_3,param_4,local_14,0);
  return param_2;
}

