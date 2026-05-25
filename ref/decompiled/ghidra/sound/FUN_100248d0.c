/* Ghidra decompiled: sound.dll */
/* Function: FUN_100248d0 @ 0x100248D0 */


void FUN_100248d0(uint *param_1)

{
  void *this;
  
  DAT_100b4ff0 = DAT_100b4fe8;
  if ((DAT_100b4fe8 != 0) && (this = *(void **)(DAT_100b4fe8 + 8), this != (void *)0x0)) {
    while (thunk_FUN_1001b1f0(this,param_1), DAT_100b4ff0 != 0) {
      DAT_100b4ff0 = *(int *)(DAT_100b4ff0 + 4);
      if (DAT_100b4ff0 == 0) {
        return;
      }
      this = *(void **)(DAT_100b4ff0 + 8);
      if (this == (void *)0x0) {
        return;
      }
    }
  }
  return;
}

