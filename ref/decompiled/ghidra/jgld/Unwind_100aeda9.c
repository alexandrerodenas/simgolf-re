/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100aeda9 @ 0x100AEDA9 */


void Unwind_100aeda9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x48) & 1) != 0) {
    thunk_FUN_100034e0(*(undefined4 **)(unaff_EBP + 8));
  }
  return;
}

