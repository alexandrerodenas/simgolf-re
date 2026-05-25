/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e260 @ 0x1000E260 */


undefined4 FUN_1000e260(uint param_1,char *param_2,size_t param_3)

{
  undefined4 uVar1;
  
  if (DAT_100b49f0 != (void *)0x0) {
    uVar1 = thunk_FUN_10011790(DAT_100b49f0,param_1,param_2,param_3);
    return uVar1;
  }
  *param_2 = '\0';
  return 3;
}

