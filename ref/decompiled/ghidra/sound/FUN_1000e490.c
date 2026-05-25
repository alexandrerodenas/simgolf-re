/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e490 @ 0x1000E490 */


undefined4 FUN_1000e490(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (DAT_100b49f0 != (void *)0x0) {
    uVar1 = thunk_FUN_100135a0(DAT_100b49f0,param_1,param_2,param_3);
    return uVar1;
  }
  return 3;
}

