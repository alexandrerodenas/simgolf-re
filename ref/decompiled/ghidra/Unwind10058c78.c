/* Ghidra decompiled: sound.dll */
/* Function: Unwind@10058c78 @ 0x10058C78 */
/* Body size: 39 addresses */


void Unwind_10058c78(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x10) + 0x60;
  }
  thunk_FUN_1001e2b0(*(undefined4 **)(unaff_EBP + -0x18));
  return;
}

