/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c2a0 @ 0x1003C2A0 */


int FUN_1003c2a0(void)

{
  FUN_1003c2c0();
  DAT_10057d88 = CreateCompatibleDC((HDC)0x0);
  return (-(uint)(DAT_10057d88 != (HDC)0x0) & 0xfffffffe) + 2;
}

