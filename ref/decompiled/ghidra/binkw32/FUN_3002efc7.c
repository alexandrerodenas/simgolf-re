/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002efc7 @ 0x3002EFC7 */


void FUN_3002efc7(void)

{
  if ((DAT_3004f1fc == 1) || ((DAT_3004f1fc == 0 && (DAT_3004f200 == 1)))) {
    FUN_3002f000(0xfc);
    if (DAT_3004f394 != (code *)0x0) {
      (*DAT_3004f394)();
    }
    FUN_3002f000(0xff);
  }
  return;
}

