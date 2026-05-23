/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045ae70 @ 0x0045AE70 */
/* Body size: 88 addresses */


undefined4 FUN_0045ae70(void)

{
  if (DAT_004d3834 == 0) {
    FUN_00483c70();
  }
  else {
    DAT_004d3834 = 0;
    FUN_00483c70();
    DAT_00822b9c = 0;
    DAT_00822b98 = 0;
  }
  FUN_00483c30();
  if ((DAT_00822b98 == 0) && (DAT_00822b9c == 0)) {
    return 0;
  }
  DAT_004d3834 = 1;
  return 1;
}

