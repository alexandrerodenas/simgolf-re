/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkPause@8 @ 0x30006140 */


int _BinkPause_8(int *param_1,int param_2)

{
  undefined8 uVar1;
  
                    /* 0x6140  39  _BinkPause@8 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = _RADTimerRead_0();
  FUN_30005c90((int)param_1,(int)uVar1);
  FUN_300060d0((int)param_1,(int)uVar1);
  if ((param_2 == 0) && (param_1[0x3f] != 0)) {
    param_1[0x84] = 0;
  }
  param_1[0x3f] = param_2;
  if (param_1[0x7b] != -1) {
    (*(code *)param_1[0xaf])(param_1 + 0xaa,param_2);
  }
  param_1[0xda] = 0;
  if ((param_1[0x80] != 0) && (param_1[0x7b] != -1)) {
    FUN_30004710(param_1);
  }
  return param_1[0x3f];
}

