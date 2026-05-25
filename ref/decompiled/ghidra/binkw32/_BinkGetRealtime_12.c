/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetRealtime@12 @ 0x30006380 */


void _BinkGetRealtime_12(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
                    /* 0x6380  23  _BinkGetRealtime@12 */
  uVar2 = _RADTimerRead_0();
  FUN_30005c90(param_1,(int)uVar2);
  FUN_300060d0(param_1,(int)uVar2);
  if ((param_3 == 0) || (*(uint *)(param_1 + 600) <= param_3)) {
    param_3 = *(int *)(param_1 + 600) - 1;
  }
  if ((*(uint *)(param_1 + 0xc) < param_3) && (param_3 = *(uint *)(param_1 + 0xc) - 1, param_3 == 0)
     ) {
    param_3 = 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x14);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x154);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x158);
  param_2[0xd] = (int)(((ulonglong)
                        (uint)(*(int *)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0xc) * 4) -
                              *(int *)(*(int *)(param_1 + 0x10c) +
                                      (*(int *)(param_1 + 0xc) - param_3) * 4)) *
                       (ulonglong)*(uint *)(param_1 + 0x24c)) /
                      (ulonglong)(*(int *)(param_1 + 0x250) * param_3));
  param_2[3] = param_3;
  iVar1 = **(int **)(param_1 + 0x260) - (*(int **)(param_1 + 0x260))[param_3];
  param_2[4] = iVar1;
  if (iVar1 == 0) {
    param_2[4] = 1;
  }
  param_2[5] = **(int **)(param_1 + 0x268) - (*(int **)(param_1 + 0x268))[param_3];
  param_2[6] = **(int **)(param_1 + 0x264) - (*(int **)(param_1 + 0x264))[param_3];
  param_2[10] = **(int **)(param_1 + 0x26c) - (*(int **)(param_1 + 0x26c))[param_3];
  param_2[7] = **(int **)(param_1 + 0x270) - (*(int **)(param_1 + 0x270))[param_3];
  param_2[8] = **(int **)(param_1 + 0x274) - (*(int **)(param_1 + 0x274))[param_3];
  param_2[9] = **(int **)(param_1 + 0x278) - (*(int **)(param_1 + 0x278))[param_3];
  return;
}

