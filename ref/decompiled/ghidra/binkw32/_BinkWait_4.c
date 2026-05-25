/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkWait@4 @ 0x30005F40 */


undefined4 _BinkWait_4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
                    /* 0x5f40  53  _BinkWait@4 */
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (((param_1[0x80] == 0) && (param_1[0x3f] == 0)) || (param_1[7] != 0)) {
    return 0;
  }
  iVar3 = param_1[0x84];
  if (iVar3 == 0) {
    FUN_30005710((int)param_1);
    iVar3 = param_1[0x84];
  }
  if (param_1[0x7b] != -1) {
    FUN_30004710(param_1);
  }
  uVar4 = _RADTimerRead_0();
  iVar1 = (int)uVar4;
  FUN_30005c90((int)param_1,iVar1);
  FUN_300060d0((int)param_1,iVar1);
  if ((param_1[0x3f] == 0) && ((param_1[0x7b] == -1 || (param_1[0x8c] != 0)))) {
    if (param_1[5] == 0) {
      return 0;
    }
    iVar2 = (int)(((((ulonglong)(uint)(param_1[0x80] * 1000 + param_1[0x85] * -1000) *
                    (ulonglong)(uint)param_1[6]) / (ulonglong)(uint)param_1[5] & 0xffffffff) *
                  (ulonglong)(uint)param_1[0xb6]) / 0x10000);
    if (iVar2 <= iVar1 - iVar3) {
      if ((param_1[0x86] < (iVar1 - iVar3) - iVar2) && (param_1[0x7b] == -1)) {
        param_1[0x84] = iVar1;
        param_1[0x85] = param_1[0x80] + -1;
      }
      return 0;
    }
  }
  if (param_1[0x42] == 0) {
    iVar3 = (*(code *)param_1[0x48])(param_1 + 0x44);
    if ((iVar3 != 0) && ((param_1[8] & 0x8000000U) == 0)) {
      Sleep(0);
    }
  }
  return 1;
}

