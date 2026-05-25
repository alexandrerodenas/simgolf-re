/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetKeyFrame@12 @ 0x30005CC0 */


uint _BinkGetKeyFrame_12(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
                    /* 0x5cc0  22  _BinkGetKeyFrame@12 */
  if (param_1 == 0) {
    return 0;
  }
  if (((param_3 & 0x80) != 0) ||
     ((*(byte *)(*(int *)(param_1 + 0x10c) + -4 + param_2 * 4) & 1) == 0)) {
    uVar4 = param_3 & 0x7f;
    if (uVar4 != 0) {
      if (uVar4 == 1) {
        if (param_2 < *(uint *)(param_1 + 8)) {
          puVar2 = (uint *)(*(int *)(param_1 + 0x10c) + param_2 * 4);
          do {
            uVar4 = *puVar2;
            param_2 = param_2 + 1;
            puVar2 = puVar2 + 1;
            if ((uVar4 & 1) != 0) {
              return param_2;
            }
          } while (param_2 < *(uint *)(param_1 + 8));
        }
      }
      else if (uVar4 == 2) {
        iVar5 = param_2 - 2;
        do {
          for (; iVar5 < 0; iVar5 = iVar5 + -1) {
            if (*(uint *)(param_1 + 8) <= param_2) {
              return 0;
            }
            iVar1 = param_2 * 4;
            param_2 = param_2 + 1;
            if ((*(uint *)(*(int *)(param_1 + 0x10c) + iVar1) & 1) != 0) {
              return param_2;
            }
LAB_30005d39:
          }
          if ((*(byte *)(*(int *)(param_1 + 0x10c) + iVar5 * 4) & 1) != 0) {
            return iVar5 + 1;
          }
          if (*(uint *)(param_1 + 8) <= param_2) goto LAB_30005d39;
          iVar1 = param_2 * 4;
          param_2 = param_2 + 1;
          if ((*(uint *)(*(int *)(param_1 + 0x10c) + iVar1) & 1) != 0) {
            return param_2;
          }
          iVar5 = iVar5 + -1;
        } while( true );
      }
      return 0;
    }
    iVar5 = param_2 - 2;
    if (0 < iVar5) {
      pbVar3 = (byte *)(*(int *)(param_1 + 0x10c) + iVar5 * 4);
      do {
        if ((*pbVar3 & 1) != 0) break;
        iVar5 = iVar5 + -1;
        pbVar3 = pbVar3 + -4;
      } while (0 < iVar5);
    }
    param_2 = iVar5 + 1;
  }
  return param_2;
}

