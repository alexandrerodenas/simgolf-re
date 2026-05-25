/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetTrackID@8 @ 0x30006C10 */


undefined4 _BinkGetTrackID_8(int param_1,int param_2)

{
                    /* 0x6c10  27  _BinkGetTrackID@8 */
  if (param_1 != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x1f8) + param_2 * 4);
  }
  return 0;
}

