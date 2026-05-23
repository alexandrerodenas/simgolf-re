/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486f90 @ 0x00486F90 */
/* Body size: 79 addresses */


void FUN_00486f90(undefined4 param_1,undefined4 param_2,WPARAM param_3)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  if (param_3 != 0) {
    if (*(code **)(param_3 + 4) != (code *)0x0) {
      (**(code **)(param_3 + 4))();
      return;
    }
    if (((DAT_0083aff0 == 0) || (param_3 == DAT_0083aff0)) && (*(int *)(param_3 + 0x24) == 0)) {
      lParam = 0;
      Msg = 0x401;
      wParam = param_3;
      hWnd = (HWND)(**(code **)(*DAT_0083ad50 + 0x20))();
      PostMessageA(hWnd,Msg,wParam,lParam);
      *(undefined4 *)(param_3 + 0x24) = 1;
    }
  }
  return;
}

