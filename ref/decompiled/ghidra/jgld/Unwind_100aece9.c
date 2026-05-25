/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100aece9 @ 0x100AECE9 */


void Unwind_100aece9(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x60) & 1) != 0) {
    thunk_FUN_100032f0(*(undefined4 **)(unaff_EBP + 8));
  }
  return;
}

