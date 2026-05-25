/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492470 @ 0x00492470 */


void FUN_00492470(void)

{
  FUN_004924b0();
  if (DAT_0083c328 != (int *)0x0) {
    (**(code **)(*DAT_0083c328 + 0x4c))(DAT_0083c328);
    (**(code **)(*DAT_0083c328 + 8))(DAT_0083c328);
    DAT_0083c328 = (int *)0x0;
  }
  DAT_0083c32c = 0;
  FUN_004a0890();
  return;
}

