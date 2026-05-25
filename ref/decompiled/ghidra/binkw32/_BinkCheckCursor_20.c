/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkCheckCursor@20 @ 0x300017D0 */


int _BinkCheckCursor_20(HWND param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  tagPOINT local_10;
  tagPOINT local_8;
  
                    /* 0x17d0  15  _BinkCheckCursor@20 */
  iVar2 = 0;
  if (DAT_30041678 == 0) {
    DAT_30041678 = GetSystemMetrics(0xd);
    DAT_30041630 = GetSystemMetrics(0xe);
  }
  local_10.x = param_2;
  local_10.y = param_3;
  if (param_1 != (HWND)0x0) {
    ClientToScreen(param_1,&local_10);
  }
  GetCursorPos(&local_8);
  if ((((local_10.x < DAT_30041678 + local_8.x) && (local_8.x < local_10.x + param_4)) &&
      (local_10.y < DAT_30041630 + local_8.y)) && (local_8.y < local_10.y + param_5)) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = ShowCursor(0);
    } while (-1 < iVar1);
  }
  return iVar2;
}

