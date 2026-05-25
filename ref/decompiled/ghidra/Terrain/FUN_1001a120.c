/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001a120 @ 0x1001A120 */


undefined4 FUN_1001a120(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return *(undefined4 *)(unaff_EBP + -0x1c);
  }
  uVar1 = FUN_1001a1c1();
  return uVar1;
}

