/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10083270 @ 0x10083270 */
/* Body size: 41 addresses */


void __cdecl FUN_10083270(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_100833f0(param_1 + 0x1c);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  }
  return;
}

