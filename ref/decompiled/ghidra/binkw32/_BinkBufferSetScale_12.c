/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferSetScale@12 @ 0x300033D0 */


bool _BinkBufferSetScale_12(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool local_4;
  
                    /* 0x33d0  13  _BinkBufferSetScale@12 */
  if (param_1 != (uint *)0x0) {
    if (param_2 == 0) {
      param_2 = DAT_30041528;
    }
    if (param_3 == 0) {
      param_3 = DAT_30041524;
    }
    uVar1 = *param_1;
    uVar2 = 0;
    if (param_2 != uVar1) {
      if (param_2 % uVar1 == 0) {
        uVar2 = 0x80000000;
      }
      else if (param_2 != uVar1) {
        if (uVar1 % param_2 == 0) {
          uVar2 = 0x20000000;
        }
        else if (uVar1 < param_2) {
          uVar2 = 0x40000000;
        }
        else if (param_2 < uVar1) {
          uVar2 = 0x10000000;
        }
      }
    }
    bVar3 = (param_1[0xe] & uVar2) == uVar2;
    if (bVar3) {
      param_1[0xf] = param_2;
    }
    uVar1 = param_1[1];
    uVar2 = 0;
    if (param_3 != uVar1) {
      if (param_2 % uVar1 == 0) {
        uVar2 = 0x8000000;
      }
      else if (param_3 != uVar1) {
        if (uVar1 % param_3 == 0) {
          uVar2 = 0x2000000;
        }
        else if (uVar1 < param_3) {
          uVar2 = 0x4000000;
        }
        else if (param_3 < uVar1) {
          uVar2 = 0x1000000;
        }
      }
    }
    local_4 = (param_1[0xe] & uVar2) == uVar2;
    if (local_4) {
      param_1[0x10] = param_3;
    }
    local_4 = local_4 && bVar3;
    param_1[2] = param_1[0xf] + param_1[0xc];
    param_1[3] = param_1[0x10] + param_1[0xd];
    return local_4;
  }
  return false;
}

