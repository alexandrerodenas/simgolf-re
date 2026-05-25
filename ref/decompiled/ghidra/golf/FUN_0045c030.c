/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045c030 @ 0x0045C030 */


void FUN_0045c030(void)

{
  int iVar1;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0x200,0x200,1);
  while (iVar1 != 0) {
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0x200,0x200,1);
  }
  if (DAT_00822d74 == 0) {
    DAT_00822d68 = 0;
  }
  FUN_00483cd0();
  DAT_00822d74 = 0;
  return;
}

