/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100af009 @ 0x100AF009 */
/* Body size: 40 addresses */


void Unwind_100af009(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  thunk_FUN_10006b80(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}

