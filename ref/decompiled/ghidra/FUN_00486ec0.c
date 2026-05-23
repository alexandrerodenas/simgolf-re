/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486ec0 @ 0x00486EC0 */
/* Body size: 120 addresses */


void __fastcall FUN_00486ec0(int param_1)

{
  uint uVar1;
  HWND hWnd;
  UINT uIDEvent;
  
  uVar1 = *(uint *)(param_1 + 8);
  uIDEvent = *(UINT *)(param_1 + 0xc);
  if (uIDEvent != 0) {
    if (*(uint *)(param_1 + 0x20) < 0x32) {
      timeKillEvent(uIDEvent);
    }
    else if (DAT_0083ad50 != (int *)0x0) {
      hWnd = (HWND)(**(code **)(*DAT_0083ad50 + 0x20))();
      KillTimer(hWnd,uIDEvent);
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((~uVar1 & 1) != 0) {
    DAT_0083ad4c = DAT_0083ad4c | 0x3f;
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x150))();
    }
    DAT_0083ad4c = 0;
    return;
  }
  return;
}

