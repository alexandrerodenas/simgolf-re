/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483c90 @ 0x00483C90 */


void FUN_00483c90(void)

{
  int iVar1;
  
  DAT_0083ad4c = 2;
  iVar1 = FUN_00483c70();
  while (iVar1 != 0) {
    DAT_0083ad4c = 2;
    iVar1 = FUN_00483c70();
  }
  DAT_0083ad4c = 0;
  FUN_00497b00();
  return;
}

