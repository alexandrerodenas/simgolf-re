/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10085d00 @ 0x10085D00 */
/* Body size: 19 addresses */


undefined4 FUN_10085d00(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return *(undefined4 *)(unaff_EBP + -0x1c);
  }
  uVar1 = FUN_10085da1();
  return uVar1;
}

