/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002b7c0 @ 0x1002B7C0 */


undefined4 __fastcall FUN_1002b7c0(int *param_1)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((int *)param_1[0x10] == (int *)0x0) {
    if ((*(byte *)(param_1 + 0x16) & 0x10) == 0) {
      uVar2 = 0x14;
    }
    else {
      thunk_FUN_1002bd80(param_1);
      if ((int *)param_1[0x10] != (int *)0x0) {
        uVar2 = (**(code **)(*(int *)param_1[0x10] + 0x1c))();
      }
    }
  }
  else {
    uVar2 = (**(code **)(*(int *)param_1[0x10] + 0x1c))();
  }
  if ((*(byte *)(param_1 + 0x16) & 0x10) != 0) {
    DVar1 = timeGetTime();
    param_1[0x1a] = DVar1;
    (**(code **)(*param_1 + 0x80))();
    param_1[0x10] = 0;
  }
  return uVar2;
}

