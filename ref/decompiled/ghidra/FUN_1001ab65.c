/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001ab65 @ 0x1001AB65 */
/* Body size: 53 addresses */


undefined4 FUN_1001ab65(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x28) == 0) {
    pvVar1 = HeapReAlloc(DAT_101122c0,0x10,*(LPVOID *)(unaff_EBP + 8),*(SIZE_T *)(unaff_EBP + 0xc));
    *(LPVOID *)(unaff_EBP + -0x1c) = pvVar1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return *(undefined4 *)(unaff_EBP + -0x1c);
}

