/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a79b2 @ 0x004A79B2 */


void FUN_004a79b2(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = (int *)(&DAT_004e4b1c + param_1 * 4);
  if (*(int *)(&DAT_004e4b1c + param_1 * 4) == 0) {
    lpCriticalSection = _malloc(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      FUN_004a6937(0x11);
    }
    FUN_004a79b2(0x11);
    if (*piVar1 == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *piVar1 = (int)lpCriticalSection;
    }
    else {
      FUN_004a5007();
    }
    FUN_004a7a13(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*piVar1);
  return;
}

