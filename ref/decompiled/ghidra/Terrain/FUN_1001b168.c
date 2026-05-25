/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001b168 @ 0x1001B168 */


void FUN_1001b168(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    HeapFree(DAT_101122c0,0,*(LPVOID *)(unaff_EBP + 8));
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return;
}

