/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkRestoreCursor@4 @ 0x30001880 */


void _BinkRestoreCursor_4(int param_1)

{
  for (; param_1 != 0; param_1 = param_1 + -1) {
    ShowCursor(1);
  }
  return;
}

