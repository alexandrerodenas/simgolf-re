/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085d82 @ 0x10085D82 */
/* Body size: 31 addresses */


LPVOID FUN_10085d82(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    pvVar1 = HeapAlloc(DAT_10129fa0,0,*(SIZE_T *)(unaff_EBP + 8));
  }
  else {
    pvVar1 = *(LPVOID *)(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pvVar1;
}

