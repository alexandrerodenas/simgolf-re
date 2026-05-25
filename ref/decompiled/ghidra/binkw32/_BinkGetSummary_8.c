/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkGetSummary@8 @ 0x300061D0 */


void _BinkGetSummary_8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
                    /* 0x61d0  25  _BinkGetSummary@8 */
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar4 = _RADTimerRead_0();
    FUN_30005c90((int)param_1,(int)uVar4);
    FUN_300060d0((int)param_1,(int)uVar4);
    puVar2 = param_2;
    for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
    param_2[0xb] = param_1[0xdb];
    param_2[0xc] = param_1[0xdc];
    param_2[3] = param_1[0x93];
    param_2[4] = param_1[0x94];
    param_2[8] = param_1[2];
    param_2[9] = param_1[0x80];
    uVar4 = _RADTimerRead_0();
    param_2[2] = (int)uVar4 - param_1[0x81];
    param_2[7] = param_1[0x92];
    param_2[0x10] = param_1[0x90];
    param_2[0xf] = param_1[0x8f];
    param_2[0xd] = param_1[0x91];
    param_2[0x1a] = param_2[0x1a] + param_1[0x8e];
    param_2[0x1b] = param_1[0x78];
    param_2[0x13] = (int)(((ulonglong)(uint)param_1[0x4d] * 1000) / (ulonglong)(param_1[0x4f] + 1));
    param_2[0xe] = param_1[0x50];
    param_2[0x11] = param_1[0x51];
    param_2[0x12] = param_1[0x52];
    uVar3 = param_1[10] - (*(uint *)param_1[0x43] & 0xfffffffe);
    param_2[0x18] =
         (int)(((ulonglong)uVar3 * (ulonglong)(uint)param_1[0x93]) /
              (ulonglong)(uint)(param_1[0x94] * param_1[2]));
    param_2[0x19] = uVar3 / (uint)param_1[2];
    param_2[0x1d] = param_1[0x3d];
    param_2[0x1e] = param_1[0x3e] + 1;
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[0x14] = param_1[0x88];
    param_2[0x15] = param_1[0x8a];
    param_2[0x16] = param_1[0x89];
    param_2[0x17] = param_1[0x8b];
    param_2[0x1b] = param_1[0x53];
    param_2[0x1c] = param_1[0x54];
  }
  return;
}

