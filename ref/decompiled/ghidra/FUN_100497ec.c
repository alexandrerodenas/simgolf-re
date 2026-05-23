/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100497ec @ 0x100497EC */
/* Body size: 57 addresses */


void FUN_100497ec(void)

{
  if ((DAT_10057e08 == 1) || ((DAT_10057e08 == 0 && (DAT_10057e0c == 1)))) {
    FUN_10049825(0xfc);
    if (DAT_10057f44 != (code *)0x0) {
      (*DAT_10057f44)();
    }
    FUN_10049825(0xff);
  }
  return;
}

