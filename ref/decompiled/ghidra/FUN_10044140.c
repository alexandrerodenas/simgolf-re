/* Ghidra decompiled: sound.dll */
/* Function: FUN_10044140 @ 0x10044140 */
/* Body size: 30 addresses */


void FUN_10044140(void)

{
  FUN_100476a4();
  if (DAT_100651b0 != 0xffffffff) {
    TlsFree(DAT_100651b0);
    DAT_100651b0 = 0xffffffff;
  }
  return;
}

