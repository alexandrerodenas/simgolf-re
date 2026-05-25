/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferLock@4 @ 0x30002EA0 */


undefined4 _BinkBufferLock_4(int *param_1)

{
  int iVar1;
  int unaff_ESI;
  undefined4 *puVar2;
  undefined4 local_6c [4];
  int iStack_5c;
  
                    /* 0x2ea0  7  _BinkBufferLock@4 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (param_1[0x12] == 0) {
    if (param_1[0x23] != 0) {
      param_1[5] = param_1[0x24];
      param_1[6] = param_1[0x25];
    }
    return 1;
  }
  puVar2 = local_6c;
  for (iVar1 = 0x1b; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_6c[0] = 0x6c;
  if (param_1[0x1c] != 0) {
    iVar1 = _BinkCheckCursor_20((HWND)0x0,param_1[0x14],param_1[0x15],*param_1,param_1[1]);
    param_1[0x1d] = iVar1;
  }
  iVar1 = (**(code **)(*(int *)param_1[0x12] + 100))((int *)param_1[0x12]);
  while (iVar1 != 0) {
    param_1[4] = param_1[4] | 0x80000000;
    iVar1 = (**(code **)(*(int *)param_1[0x12] + 0x6c))((int *)param_1[0x12]);
    if (iVar1 != 0) {
      if (param_1[0x1c] != 0) {
        _BinkRestoreCursor_4(param_1[0x1d]);
      }
      return 0;
    }
    iVar1 = (**(code **)(*(int *)param_1[0x12] + 100))((int *)param_1[0x12],0,&stack0xffffff7c,1,0);
  }
  param_1[0x1e] = iStack_5c;
  if ((param_1[0x19] == 0) && (param_1[0x1a] == 0)) {
    param_1[5] = param_1[0x15] * unaff_ESI + iStack_5c + param_1[0x14] * DAT_3004164c;
    param_1[6] = unaff_ESI;
    return 1;
  }
  param_1[5] = iStack_5c;
  param_1[6] = unaff_ESI;
  return 1;
}

