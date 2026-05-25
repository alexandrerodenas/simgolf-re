/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000e5b0 @ 0x1000E5B0 */


uint FUN_1000e5b0(void)

{
  if (DAT_100b49f0 != 0) {
    return CONCAT31((int3)((uint)DAT_100b49f0 >> 8),*(byte *)(DAT_100b49f0 + 0x6c) >> 3) &
           0xffffff01;
  }
  return 0;
}

