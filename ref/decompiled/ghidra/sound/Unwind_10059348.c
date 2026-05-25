/* Ghidra decompiled: sound.dll */
/* Function: Unwind@10059348 @ 0x10059348 */


void Unwind_10059348(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 0x70;
  }
  thunk_FUN_10033c70(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}

