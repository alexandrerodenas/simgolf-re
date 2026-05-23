/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae700 @ 0x004AE700 */
/* Body size: 56 addresses */


int FUN_004ae700(int param_1)

{
  if (param_1 < 1) {
    return 5000;
  }
  if (param_1 < 0x65) {
    if (param_1 < 0x32) {
      return (int)(5000 / (longlong)param_1);
    }
  }
  else {
    param_1 = 100;
  }
  return (100 - param_1) * 2;
}

