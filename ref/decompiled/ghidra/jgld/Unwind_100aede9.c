/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100aede9 @ 0x100AEDE9 */


void Unwind_100aede9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    thunk_FUN_100034e0(*(undefined4 **)(unaff_EBP + 8));
  }
  return;
}

