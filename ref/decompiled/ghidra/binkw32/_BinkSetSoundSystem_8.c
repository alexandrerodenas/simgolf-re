/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkSetSoundSystem@8 @ 0x300039A0 */


bool _BinkSetSoundSystem_8(undefined *param_1,undefined4 param_2)

{
  int iVar1;
  
                    /* 0x39a0  49  _BinkSetSoundSystem@8 */
  if (param_1 == (undefined *)0x0) {
    return false;
  }
  if (DAT_30041b88 != (code *)0x0) {
    if (DAT_30041b88 == (code *)param_1) goto LAB_300039ca;
    if (DAT_30041b90 != 0) {
      return false;
    }
  }
  DAT_30041b88 = (code *)param_1;
LAB_300039ca:
  iVar1 = (*DAT_30041b88)(param_2);
  if (iVar1 != 0) {
    DAT_30041b8c = iVar1;
  }
  return DAT_30041b8c != 0;
}

