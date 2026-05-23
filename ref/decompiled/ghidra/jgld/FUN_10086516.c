/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10086516 @ 0x10086516 */
/* Body size: 30 addresses */


void FUN_10086516(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    HeapFree(DAT_10129fa0,0,*(LPVOID *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

