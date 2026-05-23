/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002f0f0 @ 0x1002F0F0 */
/* Body size: 59 addresses */


undefined4 __fastcall FUN_1002f0f0(int *param_1)

{
  int iVar1;
  
  if ((int *)param_1[0x10] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x10] + 0x5c))();
    if (iVar1 == 0) {
      delete_sound((int *)param_1[0x10]);
    }
    else {
      (**(code **)(*(int *)param_1[0x10] + 0x38))();
    }
    param_1[0x10] = 0;
  }
  (**(code **)(*param_1 + 0x80))();
  return 0;
}

