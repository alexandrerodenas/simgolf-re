/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkBufferCheckWinPos@12 @ 0x300018D0 */


void _BinkBufferCheckWinPos_12(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x18d0  2  _BinkBufferCheckWinPos@12 */
  if (param_1 != (int *)0x0) {
    if (param_2 != (int *)0x0) {
      iVar1 = *param_2 + param_1[7];
      if (param_1[0x20] != 0) {
        if (DAT_30041528 < *param_1 + iVar1) {
          iVar1 = DAT_30041528 - *param_1;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
      }
      if (DAT_3004164c == 4) {
        uVar2 = iVar1 + 1U & 0xfffffffe;
      }
      else if (DAT_3004164c == 3) {
        uVar2 = iVar1 + 7U & 0xfffffff8;
      }
      else {
        uVar2 = iVar1 + 3U & 0xfffffffc;
      }
      *param_2 = uVar2 - param_1[7];
    }
    if (param_3 != (int *)0x0) {
      iVar1 = param_1[8] + *param_3;
      if (param_1[0x20] != 0) {
        if (DAT_30041524 < param_1[1] + iVar1) {
          iVar1 = DAT_30041524 - param_1[1];
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
      }
      *param_3 = iVar1 - param_1[8];
    }
  }
  return;
}

