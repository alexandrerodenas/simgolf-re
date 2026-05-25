/* Ghidra decompiled: sound.dll */
/* Function: FUN_10050e81 @ 0x10050E81 */


void FUN_10050e81(void)

{
  if (DAT_100b5890 == 0) {
    FUN_10047710(0xb);
    if (DAT_100b5890 == 0) {
      FUN_10050ec5();
      DAT_100b5890 = DAT_100b5890 + 1;
    }
    FUN_10047771(0xb);
  }
  return;
}

