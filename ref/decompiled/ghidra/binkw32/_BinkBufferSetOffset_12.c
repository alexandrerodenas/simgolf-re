/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetOffset@12 @ 0x30001980 */


undefined4 _BinkBufferSetOffset_12(int *param_1,int param_2,int param_3)

{
  tagPOINT local_8;
  
                    /* 0x1980  11  _BinkBufferSetOffset@12 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_8.y = 0;
  local_8.x = 0;
  ClientToScreen((HWND)param_1[0x18],&local_8);
  param_1[0x14] = local_8.x + param_2;
  param_1[0x16] = param_2;
  param_1[0x15] = local_8.y + param_3;
  param_1[0x17] = param_3;
  param_1[4] = param_1[4] | 0x80000000;
  FUN_30001a00(param_1,0);
  return 1;
}

