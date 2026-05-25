/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackType@8 @ 0x30006BD0 */


undefined4 _BinkGetTrackType_8(int param_1,int param_2)

{
                    /* 0x6bd0  29  _BinkGetTrackType@8 */
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 500) + param_2 * 4);
  }
  return 0;
}

