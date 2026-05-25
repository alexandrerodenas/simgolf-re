/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_300028b0 @ 0x300028B0 */


void FUN_300028b0(void)

{
  DAT_30041668 = DAT_30041668 + -1;
  if ((DAT_30041668 == 0) && (DAT_30041664 != 0)) {
    DAT_30041664 = 0;
    ChangeDisplaySettingsA((DEVMODEA *)0x0,4);
  }
  return;
}

