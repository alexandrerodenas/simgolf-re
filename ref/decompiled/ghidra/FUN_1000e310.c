/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e310 @ 0x1000E310 */
/* Body size: 34 addresses */


undefined4 FUN_1000e310(void)

{
  undefined4 uVar1;
  
  if ((DAT_100b49f0 != 0) && ((*(byte *)(DAT_100b49f0 + 0x6c) & 0x10) != 0)) {
    uVar1 = thunk_FUN_10012040();
    return uVar1;
  }
  return 0;
}

