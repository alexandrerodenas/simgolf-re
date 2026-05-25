/* Ghidra decompiled: sound.dll */
/* Function: FUN_100436bc @ 0x100436BC */


void __cdecl FUN_100436bc(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_10047710(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

