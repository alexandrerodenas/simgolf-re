/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10084dd0 @ 0x10084DD0 */
/* Body size: 41 addresses */


void FUN_10084dd0(void)

{
  FUN_10083350();
  if (DAT_10123750 != 0xffffffff) {
    TlsFree(DAT_10123750);
    DAT_10123750 = 0xffffffff;
  }
  return;
}

