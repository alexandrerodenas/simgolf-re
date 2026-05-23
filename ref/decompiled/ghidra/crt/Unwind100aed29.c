/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100aed29 @ 0x100AED29 */
/* Body size: 23 addresses */


void Unwind_100aed29(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38) & 1) != 0) {
    thunk_FUN_100034e0(*(undefined4 **)(unaff_EBP + 8));
  }
  return;
}

