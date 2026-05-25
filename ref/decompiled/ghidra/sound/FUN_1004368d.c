/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004368d @ 0x1004368D */


void __cdecl FUN_1004368d(uint param_1)

{
  if ((0x10064f07 < param_1) && (param_1 < 0x10065169)) {
    FUN_10047710(((int)(param_1 + 0xeff9b0f8) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

