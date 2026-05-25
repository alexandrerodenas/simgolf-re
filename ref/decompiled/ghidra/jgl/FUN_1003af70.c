/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003af70 @ 0x1003AF70 */


void __fastcall FUN_1003af70(int param_1)

{
  ChangeDisplaySettingsA((DEVMODEA *)(param_1 + 4),0);
  if (*(HWND *)(param_1 + 0x144) != (HWND)0x0) {
    DestroyWindow(*(HWND *)(param_1 + 0x144));
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  if (*(int **)(param_1 + 0x148) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x148) + 8))();
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  UnregisterClassA(s_JackalClass_1005512c,*(HINSTANCE *)(param_1 + 0x140));
  *(undefined4 *)(param_1 + 0x140) = 0;
  return;
}

