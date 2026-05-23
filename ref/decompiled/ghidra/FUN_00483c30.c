/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483c30 @ 0x00483C30 */
/* Body size: 58 addresses */


void FUN_00483c30(void)

{
  int iVar1;
  
  DAT_0083ad4c = 0x20;
  iVar1 = FUN_00483c10();
  while (iVar1 != 0) {
    DAT_0083ad4c = 0x20;
    iVar1 = FUN_00483c10();
  }
  DAT_0083ad4c = 0;
  FUN_00497b00();
  FUN_00497b20();
  return;
}

