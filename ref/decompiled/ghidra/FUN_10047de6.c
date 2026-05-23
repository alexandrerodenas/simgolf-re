/* Ghidra decompiled: sound.dll */
/* Function: FUN_10047de6 @ 0x10047DE6 */
/* Body size: 57 addresses */


void FUN_10047de6(void)

{
  if ((DAT_100b5538 == 1) || ((DAT_100b5538 == 0 && (DAT_100b553c == 1)))) {
    FUN_10047e1f(0xfc);
    if (DAT_100b5700 != (code *)0x0) {
      (*DAT_100b5700)();
    }
    FUN_10047e1f(0xff);
  }
  return;
}

