/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetDirectDraw@8 @ 0x300011B0 */


undefined4 _BinkBufferSetDirectDraw_8(int param_1,int param_2)

{
                    /* 0x11b0  9  _BinkBufferSetDirectDraw@8 */
  if ((param_1 != 0) && (param_2 != 0)) {
    DAT_30041638 = param_1;
    DAT_3004163c = param_2;
    DAT_30041634 = 0x8000000;
    FUN_30001200();
    return 1;
  }
  DAT_30041638 = 0;
  DAT_3004163c = 0;
  DAT_30041634 = 0;
  return 1;
}

