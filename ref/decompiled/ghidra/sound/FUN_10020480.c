/* Ghidra decompiled: sound.dll */
/* Function: FUN_10020480 @ 0x10020480 */


undefined4 __fastcall FUN_10020480(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_100b4a1c != (void *)0x0) {
    uVar1 = thunk_FUN_1000a240(DAT_100b4a1c,param_1,3,0,0);
    return uVar1;
  }
  return 0x13;
}

