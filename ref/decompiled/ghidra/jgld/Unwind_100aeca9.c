/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100aeca9 @ 0x100AECA9 */


void Unwind_100aeca9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 1) != 0) {
    thunk_FUN_100032f0(*(undefined4 **)(unaff_EBP + 8));
  }
  return;
}

