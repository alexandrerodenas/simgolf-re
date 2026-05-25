/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10086598 @ 0x10086598 */


void FUN_10086598(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    HeapFree(DAT_10129fa0,0,*(LPVOID *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

