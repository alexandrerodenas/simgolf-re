/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10005090 @ 0x10005090 */
/* Body size: 322 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10005090(void *this,float *param_1,float param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *puVar4;
  undefined1 auVar5 [10];
  
  puVar4 = (undefined4 *)&stack0xffffffb0;
  for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  auVar5 = FUN_10019389(this,SUB84((double)param_2,0),(uint)((ulonglong)(double)param_2 >> 0x20),0,
                        0x40080000);
  fVar1 = (float)(float10)auVar5;
  auVar5 = FUN_10019389(extraout_ECX,SUB84((double)param_2,0),
                        (uint)((ulonglong)(double)param_2 >> 0x20),0,0x40000000);
  fVar2 = (float)(float10)auVar5;
  *param_1 = 0.0;
  *param_1 = (fVar1 - fVar2) * *param_6 +
             ((fVar1 - _DAT_1005f028 * fVar2) + param_2) * *param_5 +
             (_DAT_100613b4 * fVar2 + _DAT_1005f21c * fVar1) * *param_4 +
             ((_DAT_1005f028 * fVar1 - _DAT_100613b4 * fVar2) + _DAT_1005f024) * *param_3;
  param_1[1] = 0.0;
  param_1[1] = (fVar1 - fVar2) * param_6[1] +
               ((fVar1 - _DAT_1005f028 * fVar2) + param_2) * param_5[1] +
               (_DAT_100613b4 * fVar2 + _DAT_1005f21c * fVar1) * param_4[1] +
               ((_DAT_1005f028 * fVar1 - _DAT_100613b4 * fVar2) + _DAT_1005f024) * param_3[1];
  __chkesp();
  return;
}

