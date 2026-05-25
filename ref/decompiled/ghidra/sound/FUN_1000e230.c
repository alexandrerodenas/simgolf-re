/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e230 @ 0x1000E230 */


int FUN_1000e230(void)

{
  int iVar1;
  
  if (DAT_100b49f0 != (int *)0x0) {
    iVar1 = thunk_FUN_10011760(DAT_100b49f0);
    return iVar1;
  }
  return 0;
}

