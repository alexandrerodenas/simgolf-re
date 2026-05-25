/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGoto@12 @ 0x30005DA0 */


void _BinkGoto_12(int *param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
                    /* 0x5da0  30  _BinkGoto@12 */
  if (param_1 != (int *)0x0) {
    param_1[0x4e] = 1;
    if ((uint)param_1[2] < param_2) {
      param_2 = param_1[2];
    }
    if ((param_3 & 1) == 0) {
      if (param_1[3] != param_2) {
        uVar1 = _BinkGetKeyFrame_12((int)param_1,param_2,0);
        if ((((uint)param_1[3] <= param_2) && (uVar1 <= (uint)param_1[3])) ||
           (FUN_30004650(param_1,uVar1), uVar1 != param_2)) {
          _BinkPause_8(param_1,1);
          if (param_1[3] != param_1[0xa0]) {
            _BinkDoFrame_4(param_1);
          }
          _BinkNextFrame_4(param_1);
          uVar1 = param_1[3];
          while (uVar1 != param_2) {
            _BinkDoFrame_4(param_1);
            _BinkNextFrame_4(param_1);
            uVar1 = param_1[3];
          }
          _BinkPause_8(param_1,0);
          param_1[0x4e] = 0;
          return;
        }
      }
    }
    else {
      FUN_30004650(param_1,param_2);
    }
    param_1[0x4e] = 0;
  }
  return;
}

