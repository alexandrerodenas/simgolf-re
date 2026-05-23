/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085da1 @ 0x10085DA1 */
/* Body size: 60 addresses */


void FUN_10085da1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 1;
  }
  *(uint *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0xfU & 0xfffffff0;
  HeapAlloc(DAT_10129fa0,0,*(SIZE_T *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

