/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000b110 @ 0x1000B110 */
/* Body size: 31 addresses */


undefined4 FUN_1000b110(LPSTR param_1)

{
  undefined4 uVar1;
  
  if (DAT_100b49f4 != (void *)0x0) {
    uVar1 = thunk_FUN_100086f0(DAT_100b49f4,param_1);
    return uVar1;
  }
  return 3;
}

