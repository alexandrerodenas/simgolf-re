/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkNextFrame@4 @ 0x30005C40 */


void _BinkNextFrame_4(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* 0x5c40  33  _BinkNextFrame@4 */
  if (param_1 != (int *)0x0) {
    param_1[0x4e] = 1;
    uVar2 = _RADTimerRead_0();
    FUN_30005c90((int)param_1,(int)uVar2);
    if ((uint)param_1[3] < (uint)param_1[2]) {
      iVar1 = param_1[3] + 1;
    }
    else {
      iVar1 = 1;
    }
    FUN_30004650(param_1,iVar1);
    param_1[0x4e] = 0;
  }
  return;
}

