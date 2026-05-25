/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a98a3 @ 0x004A98A3 */


void FUN_004a98a3(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_004a79b2(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

