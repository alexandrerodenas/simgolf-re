/* Ghidra decompiled: jgld.dll */
/* Function: Unwind@100aec49 @ 0x100AEC49 */
/* Body size: 23 addresses */


void Unwind_100aec49(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x5c) & 1) != 0) {
    thunk_FUN_100032f0(*(undefined4 **)(unaff_EBP + 8));
  }
  return;
}

