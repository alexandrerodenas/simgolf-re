/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001a1a2 @ 0x1001A1A2 */


LPVOID FUN_1001a1a2(void)

{
  LPVOID pvVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    pvVar1 = HeapAlloc(DAT_101122c0,0,*(SIZE_T *)(unaff_EBP + 8));
  }
  else {
    pvVar1 = *(LPVOID *)(unaff_EBP + -0x1c);
  }
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pvVar1;
}

