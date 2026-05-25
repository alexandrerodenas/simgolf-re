/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a470 @ 0x1002A470 */


undefined4 __fastcall FUN_1002a470(int *param_1)

{
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 0x14))();
    (**(code **)(*param_1 + 8))();
    param_1[5] = 0;
  }
  return 0;
}

