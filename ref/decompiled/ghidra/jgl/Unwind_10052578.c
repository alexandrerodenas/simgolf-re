/* Ghidra decompiled: jgl.dll */
/* Function: Unwind@10052578 @ 0x10052578 */


void Unwind_10052578(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10) + 8;
  }
  FUN_10001350(*(undefined4 **)(unaff_EBP + -0x14));
  return;
}

