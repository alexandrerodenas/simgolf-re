/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetPan@8 @ 0x30006B90 */


void _BinkSetPan_8(int param_1,undefined4 param_2)

{
                    /* 0x6b90  46  _BinkSetPan@8 */
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1ec) != -1)) &&
     (*(code **)(param_1 + 0x2b8) != (code *)0x0)) {
    (**(code **)(param_1 + 0x2b8))(param_1 + 0x2a8,param_2);
  }
  return;
}

