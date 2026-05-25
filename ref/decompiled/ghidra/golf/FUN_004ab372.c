/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ab372 @ 0x004AB372 */


void FUN_004ab372(void)

{
  if ((DAT_00840ab4 == 1) || ((DAT_00840ab4 == 0 && (DAT_004e4ae4 == 1)))) {
    FUN_004ab3ab(0xfc);
    if (DAT_00840c68 != (code *)0x0) {
      (*DAT_00840c68)();
    }
    FUN_004ab3ab(0xff);
  }
  return;
}

