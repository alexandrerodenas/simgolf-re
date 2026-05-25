/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001a1c1 @ 0x1001A1C1 */


void FUN_1001a1c1(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + 8) == 0) {
    *(undefined4 *)(unaff_EBP + 8) = 1;
  }
  *(uint *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0xfU & 0xfffffff0;
  HeapAlloc(DAT_101122c0,0,*(SIZE_T *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

