/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a98f5 @ 0x004A98F5 */


void FUN_004a98f5(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_004a7a13(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}

