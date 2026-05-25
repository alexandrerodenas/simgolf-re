/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferClear@8 @ 0x30003680 */


undefined4 _BinkBufferClear_8(uint *param_1)

{
  int iVar1;
  
                    /* 0x3680  3  _BinkBufferClear@8 */
  iVar1 = _BinkBufferLock_4((int *)param_1);
  if (iVar1 != 0) {
    FUN_300029d0((undefined4 *)param_1[5],param_1[4],param_1[6],*param_1,param_1[1]);
    _BinkBufferUnlock_4((int *)param_1);
    return 1;
  }
  return 0;
}

