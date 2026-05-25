/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetVolume@8 @ 0x30006B60 */


void _BinkSetVolume_8(int param_1,undefined4 param_2)

{
                    /* 0x6b60  52  _BinkSetVolume@8 */
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1ec) != -1)) &&
     (*(code **)(param_1 + 0x2b4) != (code *)0x0)) {
    (**(code **)(param_1 + 0x2b4))(param_1 + 0x2a8,param_2);
  }
  return;
}

