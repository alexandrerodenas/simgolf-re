/* Ghidra decompiled: binkw32.dll */
/* Function: radfree @ 0x300010A0 */


/* __stdcall radfree,4 */

void radfree(int param_1)

{
                    /* 0x10a0  80  _radfree@4 */
  if (param_1 != 0) {
    if (*(char *)(param_1 + -2) == '\x03') {
      (**(code **)(param_1 + -8))(param_1 - (uint)*(byte *)(param_1 + -1));
      return;
    }
    FUN_3002b909((undefined *)(param_1 - (uint)*(byte *)(param_1 + -1)));
  }
  return;
}

