/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007640 @ 0x30007640 */


void FUN_30007640(void)

{
  DWORD DVar1;
  HMODULE pHVar2;
  HWND hWnd;
  HMODULE pHVar3;
  uint uVar4;
  DWORD local_4;
  
  DVar1 = GetCurrentProcessId();
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (DAT_30041b98 == (HWND)0x0) {
    for (hWnd = GetTopWindow((HWND)0x0); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      GetWindowThreadProcessId(hWnd,&local_4);
      if (local_4 == DVar1) {
        pHVar3 = (HMODULE)GetWindowLongA(hWnd,-6);
        if ((pHVar3 == pHVar2) && (uVar4 = GetWindowLongA(hWnd,-0x10), (uVar4 & 0x40000000) == 0)) {
          DAT_30041b98 = hWnd;
        }
        if (DAT_30041b98 == (HWND)0x0) {
          DAT_30041b98 = hWnd;
        }
      }
    }
    if (DAT_30041b98 == (HWND)0x0) {
      DAT_30041b98 = GetActiveWindow();
    }
  }
  return;
}

