/* Ghidra decompiled: sound.dll */
/* Function: FUN_10041a3f @ 0x10041A3F */
/* Body size: 110 addresses */


int * FUN_10041a3f(void)

{
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_100437e0();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    *extraout_ECX = (int)&DAT_1005ecd8;
    FUN_10041e6f(extraout_ECX + 2);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  *(undefined ***)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX) = &PTR_LAB_1005ecd4;
  FUN_10041fe4((void *)(*(int *)(*extraout_ECX + 4) + (int)extraout_ECX),
               *(int *)(*(int *)(**(int **)(unaff_EBP + 8) + 4) + 4 + (int)*(int **)(unaff_EBP + 8))
              );
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[1] = 0;
  return extraout_ECX;
}

