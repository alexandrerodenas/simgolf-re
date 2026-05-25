/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100aed69 @ 0x100AED69 */


void Unwind_100aed69(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    thunk_FUN_100034e0(*(undefined4 **)(unaff_EBP + 8));
  }
  return;
}

