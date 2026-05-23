/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041b42 @ 0x10041B42 */
/* Body size: 91 addresses */


int * FUN_10041b42(void)

{
  int *this;
  int unaff_EBP;
  
  FUN_100437e0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = this;
  if (*(int *)(unaff_EBP + 8) != 0) {
    *this = (int)&DAT_1005ece8;
    FUN_10041e6f(this + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_10041979(this,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*this + 4) + (int)this) = &PTR_LAB_1005ece4;
  return this;
}

