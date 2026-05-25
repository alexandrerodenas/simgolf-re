/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b140 @ 0x1000B140 */


undefined4 FUN_1000b140(undefined4 param_1)

{
  undefined4 uVar1;
  
  if (DAT_100b49f0 == (void *)0x0) {
    return 0x13;
  }
  uVar1 = thunk_FUN_100120a0(DAT_100b49f0,param_1);
  return uVar1;
}

