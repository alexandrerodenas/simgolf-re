/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484f00 @ 0x00484F00 */


undefined4 __fastcall FUN_00484f00(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int *)param_1[0x10] != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)param_1[0x10] + 0x14))();
  }
  param_1[0x10] = 0;
  if ((*(byte *)(param_1 + 0x16) & 2) == 0) {
    (**(code **)(*param_1 + 0x80))();
  }
  param_1[0x11] = param_1[0x11] & 0xfffffffe;
  return uVar1;
}

