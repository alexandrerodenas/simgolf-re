/* Ghidra decompiled: golf.exe */
/* Function: FUN_00486dc0 @ 0x00486DC0 */
/* Body size: 113 addresses */


int __fastcall FUN_00486dc0(DWORD_PTR param_1)

{
  MMRESULT MVar1;
  HWND hWnd;
  UINT_PTR UVar2;
  DWORD_PTR nIDEvent;
  uint uElapse;
  TIMERPROC lpTimerFunc;
  
  if ((*(int *)(param_1 + 0x10) == 0) && (*(int *)(param_1 + 0x14) == 0)) {
    return 7;
  }
  uElapse = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
  if (uElapse < 0x32) {
    MVar1 = timeSetEvent(uElapse,*(UINT *)(param_1 + 0x28),FUN_00486f90,param_1,1);
    *(MMRESULT *)(param_1 + 0xc) = MVar1;
    return (-(uint)(MVar1 != 0) & 0xfffffffe) + 2;
  }
  lpTimerFunc = (TIMERPROC)&LAB_00486f40;
  nIDEvent = param_1;
  hWnd = (HWND)(**(code **)(*DAT_0083ad50 + 0x20))();
  UVar2 = SetTimer(hWnd,nIDEvent,uElapse,lpTimerFunc);
  *(UINT_PTR *)(param_1 + 0xc) = UVar2;
  return (-(uint)(UVar2 != 0) & 0xfffffffe) + 2;
}

