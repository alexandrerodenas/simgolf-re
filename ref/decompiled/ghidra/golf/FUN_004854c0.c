/* Ghidra decompiled: golf.exe */
/* Function: FUN_004854c0 @ 0x004854C0 */


undefined4 __fastcall FUN_004854c0(int *param_1)

{
  int iVar1;
  
  if ((int *)param_1[0x10] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x10] + 0x5c))();
    if (iVar1 == 0) {
      FUN_00484110((int *)param_1[0x10]);
    }
    else {
      (**(code **)(*(int *)param_1[0x10] + 0x38))();
    }
    param_1[0x10] = 0;
  }
  (**(code **)(*param_1 + 0x80))();
  return 0;
}

