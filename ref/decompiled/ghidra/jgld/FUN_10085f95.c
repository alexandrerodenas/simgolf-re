/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085f95 @ 0x10085F95 */


undefined4 FUN_10085f95(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    pvVar1 = HeapReAlloc(DAT_10129fa0,0x10,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

