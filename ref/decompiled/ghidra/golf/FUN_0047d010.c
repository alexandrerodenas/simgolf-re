/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d010 @ 0x0047D010 */


void FUN_0047d010(void)

{
  if (DAT_0083ad50 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0047d01c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0083ad50 + 8))();
    return;
  }
  return;
}

