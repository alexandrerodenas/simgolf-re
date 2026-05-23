/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10021970 @ 0x10021970 */
/* Body size: 41 addresses */


void FUN_10021970(void)

{
  FUN_10019d70();
  if (DAT_10066520 != 0xffffffff) {
    TlsFree(DAT_10066520);
    DAT_10066520 = 0xffffffff;
  }
  return;
}

