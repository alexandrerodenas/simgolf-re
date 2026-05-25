/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002dff0 @ 0x1002DFF0 */


undefined4 __fastcall FUN_1002dff0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1[0x10] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x5c))();
    if (iVar1 == 0) {
      (**(code **)(*(int *)param_1[0x10] + 0x14))();
      delete_sound((int *)param_1[0x10]);
    }
    else {
      uVar2 = (**(code **)(*(int *)param_1[0x10] + 0x14))();
    }
    param_1[0x10] = 0;
  }
  (**(code **)(*param_1 + 0x80))();
  param_1[0x11] = param_1[0x11] & 0xfffffffe;
  return uVar2;
}

