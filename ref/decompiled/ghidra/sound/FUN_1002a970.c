/* Ghidra decompiled: sound.dll */
/* Function: FUN_1002a970 @ 0x1002A970 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002a970(void)

{
  DWORD DVar1;
  int iVar2;
  tagMSG local_1c;
  
  DAT_100b5060 = 1;
  _DAT_100b5054 = GetCurrentThreadId();
  DVar1 = MsgWaitForMultipleObjects(1,(HANDLE *)&DAT_100b505c,0,0xffffffff,0x48);
  if (DVar1 != 0) {
    while (EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100b503c), (DAT_100b5038 & 1) != 0) {
      iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      while (iVar2 != 0) {
        thunk_FUN_100288a0(local_1c.hwnd,local_1c.message,(LPWAVEHDR)local_1c.wParam,
                           (int *)local_1c.lParam);
        iVar2 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b503c);
      DVar1 = MsgWaitForMultipleObjects(1,(HANDLE *)&DAT_100b505c,0,0xffffffff,0x48);
      if (DVar1 == 0) {
        DAT_100b5060 = 0;
        return;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100b503c);
  }
  DAT_100b5060 = 0;
  return;
}

