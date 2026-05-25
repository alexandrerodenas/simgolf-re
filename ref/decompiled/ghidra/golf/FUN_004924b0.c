/* Ghidra decompiled: golf.exe */
/* Function: FUN_004924b0 @ 0x004924B0 */


void FUN_004924b0(void)

{
  if ((DAT_0083c32c != (int *)0x0) && (DAT_0083c330 != 0)) {
    (**(code **)(*DAT_0083c32c + 0x80))(DAT_0083c32c,DAT_0083c330);
    DAT_0083c330 = 0;
  }
  return;
}

