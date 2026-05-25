/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000ea30 @ 0x1000EA30 */


int FUN_1000ea30(void)

{
  int iVar1;
  
  if (DAT_100b4a04 == 0) {
    iVar1 = 3;
  }
  else {
    iVar1 = thunk_FUN_10039050(DAT_100b4a04);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_10038b40(DAT_100b4a04);
      if (iVar1 == 0) {
        iVar1 = thunk_FUN_10038da0(DAT_100b4a04);
        if (iVar1 == 0) {
          iVar1 = thunk_FUN_10038b20(DAT_100b4a04);
          return iVar1;
        }
      }
    }
  }
  return iVar1;
}

