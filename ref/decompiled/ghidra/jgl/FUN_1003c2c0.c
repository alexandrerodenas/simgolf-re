/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c2c0 @ 0x1003C2C0 */
/* Body size: 27 addresses */


void FUN_1003c2c0(void)

{
  if (DAT_10057d88 != (HDC)0x0) {
    DeleteDC(DAT_10057d88);
    DAT_10057d88 = (HDC)0x0;
  }
  return;
}

