/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002bfa0 @ 0x1002BFA0 */


undefined4 __fastcall FUN_1002bfa0(int *param_1)

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

