/* Ghidra decompiled: sound.dll */
/* Function: FUN_100436df @ 0x100436DF */


void __cdecl FUN_100436df(uint param_1)

{
  if ((0x10064f07 < param_1) && (param_1 < 0x10065169)) {
    FUN_10047771(((int)(param_1 + 0xeff9b0f8) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}

