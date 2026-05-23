/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483bd0 @ 0x00483BD0 */
/* Body size: 53 addresses */


void FUN_00483bd0(void)

{
  int iVar1;
  
  DAT_0083ad4c = 0x3f;
  iVar1 = FUN_00483bb0();
  while (iVar1 != 0) {
    DAT_0083ad4c = 0x3f;
    iVar1 = FUN_00483bb0();
  }
  DAT_0083ad4c = 0;
  FUN_00497b00();
  return;
}

