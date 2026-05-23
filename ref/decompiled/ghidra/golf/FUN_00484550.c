/* Ghidra decompiled: golf.exe */
/* Function: FUN_00484550 @ 0x00484550 */
/* Body size: 50 addresses */


undefined4 __fastcall FUN_00484550(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int *)param_1[0x10] != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)param_1[0x10] + 0x14))();
  }
  (**(code **)(*param_1 + 0x80))();
  param_1[0x10] = 0;
  param_1[0x11] = param_1[0x11] & 0xfffffffe;
  return uVar1;
}

