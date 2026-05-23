/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483cf0 @ 0x00483CF0 */
/* Body size: 53 addresses */


void FUN_00483cf0(void)

{
  int iVar1;
  
  DAT_0083ad4c = 8;
  iVar1 = FUN_00483cd0();
  while (iVar1 != 0) {
    DAT_0083ad4c = 8;
    iVar1 = FUN_00483cd0();
  }
  DAT_0083ad4c = 0;
  FUN_00497b00();
  return;
}

