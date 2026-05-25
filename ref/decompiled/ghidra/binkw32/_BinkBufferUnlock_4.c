/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferUnlock@4 @ 0x30002FE0 */


undefined4 _BinkBufferUnlock_4(int *param_1)

{
  int *piVar1;
  
                    /* 0x2fe0  14  _BinkBufferUnlock@4 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar1 = (int *)param_1[0x12];
  if (piVar1 == (int *)0x0) {
    if (param_1[0x23] != 0) {
      param_1[5] = 0;
      param_1[6] = 0;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x80))(piVar1,param_1[0x1e]);
    if (param_1[0x1c] != 0) {
      _BinkRestoreCursor_4(param_1[0x1d]);
    }
    param_1[5] = 0;
    param_1[6] = 0;
    FUN_30001a00(param_1,2);
  }
  param_1[4] = param_1[4] & 0x7fffffff;
  return 1;
}

