/* Ghidra decompiled: sound.dll */
/* Function: FUN_100319e0 @ 0x100319E0 */


undefined4 __fastcall FUN_100319e0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  *(undefined4 *)(param_1 + 0x88) = 0;
  uVar1 = FUN_1003aa90();
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  thunk_FUN_1000ed70(param_1);
  return 0;
}

