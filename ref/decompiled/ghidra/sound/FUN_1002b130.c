/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b130 @ 0x1002B130 */


undefined4 __fastcall FUN_1002b130(int *param_1)

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

