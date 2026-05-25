/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004af0 @ 0x30004AF0 */


void FUN_30004af0(int *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  DWORD dwMilliseconds;
  
  uVar1 = 0;
  if (param_1[0x95] != 1) {
    param_1[0x95] = 2;
    return;
  }
  do {
    if (((param_1[8] & 0x8000000U) == 0) && (param_1[0x42] == 0)) {
      (*(code *)param_1[0x48])(param_1 + 0x44);
      if (0x32 < (uint)((param_1[0x56] + 1) * 100) / (param_1[0x55] + 1U)) {
        dwMilliseconds = 5;
        goto LAB_30004b52;
      }
    }
    else {
      dwMilliseconds = 10;
LAB_30004b52:
      Sleep(dwMilliseconds);
    }
    uVar2 = _RADTimerRead_0();
    if ((uVar1 < (uint)uVar2) && (uVar1 = (uint)uVar2 + 10, param_1[0x7b] != -1)) {
      FUN_30004710(param_1);
    }
    if (param_1[0x95] != 1) {
      param_1[0x95] = 2;
      return;
    }
  } while( true );
}

