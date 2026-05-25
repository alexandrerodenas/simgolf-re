/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackMaxSize@8 @ 0x30006BF0 */


undefined4 _BinkGetTrackMaxSize_8(int param_1,int param_2)

{
                    /* 0x6bf0  28  _BinkGetTrackMaxSize@8 */
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1f0) + param_2 * 4);
  }
  return 0;
}

