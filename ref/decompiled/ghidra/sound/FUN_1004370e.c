/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004370e @ 0x1004370E */


void __cdecl FUN_1004370e(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10047771(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

