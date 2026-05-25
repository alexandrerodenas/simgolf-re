/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c840 @ 0x1003C840 */


undefined4 __cdecl FUN_1003c840(HWND param_1)

{
  HDC hdc;
  
  hdc = GetDC(param_1);
  SelectPalette(hdc,DAT_10057d98,0);
  RealizePalette(hdc);
  ReleaseDC(param_1,hdc);
  return 1;
}

