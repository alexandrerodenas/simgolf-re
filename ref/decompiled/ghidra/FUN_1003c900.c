/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003c900 @ 0x1003C900 */
/* Body size: 92 addresses */


void __cdecl FUN_1003c900(HWND param_1,uint param_2,undefined4 param_3,int param_4)

{
  InvalidateRect(param_1,(RECT *)0x0,0);
  if ((param_2 != 0) && (param_4 == 0)) {
    FUN_1003c840(param_1);
  }
  (**(code **)(*DAT_10057d90 + 0x2c))(param_2,param_4);
  DefWindowProcA(param_1,6,param_4 << 0x10 | param_2 & 0xffff,(LPARAM)param_1);
  return;
}

