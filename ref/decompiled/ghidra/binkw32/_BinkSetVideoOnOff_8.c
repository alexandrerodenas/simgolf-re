/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetVideoOnOff@8 @ 0x30006E60 */


void _BinkSetVideoOnOff_8(int param_1,undefined4 param_2)

{
                    /* 0x6e60  51  _BinkSetVideoOnOff@8 */
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x234) = param_2;
  }
  return;
}

