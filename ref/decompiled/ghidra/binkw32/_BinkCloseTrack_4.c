/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkCloseTrack@4 @ 0x30006D10 */


void _BinkCloseTrack_4(int param_1)

{
                    /* 0x6d10  17  _BinkCloseTrack@4 */
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_3001c0f0(*(int *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    radfree(param_1);
  }
  return;
}

