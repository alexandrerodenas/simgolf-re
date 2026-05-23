/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a810 @ 0x1002A810 */
/* Body size: 111 addresses */


void __fastcall FUN_1002a810(byte *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((*param_1 & 1) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 4);
    *param_1 = *param_1 & 0xfe;
    EnterCriticalSection(lpCriticalSection);
    *param_1 = *param_1 & 0xfe;
    SetEvent(*(HANDLE *)(param_1 + 0x24));
    LeaveCriticalSection(lpCriticalSection);
    Sleep(0);
    EnterCriticalSection(lpCriticalSection);
    LeaveCriticalSection(lpCriticalSection);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  CloseHandle(*(HANDLE *)(param_1 + 0x24));
  return;
}

