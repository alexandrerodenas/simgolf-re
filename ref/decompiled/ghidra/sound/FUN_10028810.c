/* Ghidra decompiled: sound.dll */
/* Function: FUN_10028810 @ 0x10028810 */


undefined4 __fastcall FUN_10028810(int param_1)

{
  int iVar1;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,*(HWND *)(param_1 + 8),0x7e8,0x7ef,1);
  while (iVar1 != 0) {
    thunk_FUN_10028b70(local_1c.hwnd,local_1c.message,(LPWAVEHDR)local_1c.wParam,
                       (int *)local_1c.lParam);
    iVar1 = PeekMessageA(&local_1c,*(HWND *)(param_1 + 8),0x7e8,0x7ef,1);
  }
  return 0;
}

