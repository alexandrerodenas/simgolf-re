/* Ghidra decompiled: golf.exe */
/* Function: FUN_004675d0 @ 0x004675D0 */


uint FUN_004675d0(int param_1)

{
  if (((&DAT_00579540)[param_1 * 0x80] & 0x8000) != 0) {
    return 2;
  }
  return ~(uint)(ushort)(&DAT_00579540)[param_1 * 0x80] >> 0xe & 1;
}

