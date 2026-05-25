/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001b0e6 @ 0x1001B0E6 */


void FUN_1001b0e6(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    HeapFree(DAT_101122c0,0,*(LPVOID *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

