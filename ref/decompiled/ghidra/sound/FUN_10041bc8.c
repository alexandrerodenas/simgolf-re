/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041bc8 @ 0x10041BC8 */


int * FUN_10041bc8(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100437e0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1005ece8;
    FUN_10041e6f(extraout_ECX + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  FUN_100419da();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1005ece4;
  return extraout_ECX;
}

