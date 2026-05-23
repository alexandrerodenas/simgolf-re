/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a9874 @ 0x004A9874 */
/* Body size: 47 addresses */


void FUN_004a9874(uint param_1)

{
  if ((0x4e4d87 < param_1) && (param_1 < 0x4e4fe9)) {
    FUN_004a79b2(((int)(param_1 - 0x4e4d88) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

