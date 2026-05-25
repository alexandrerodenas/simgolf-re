/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10005090 @ 0x10005090 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_10005090(void *this,float *param_1,float param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  undefined4 local_50 [16];
  float local_10;
  float local_c;
  void *local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = this;
  FUN_10019389(this);
  local_c = (float)extraout_ST0;
  FUN_10019389(this_00);
  local_10 = (float)extraout_ST0_00;
  *param_1 = 0.0;
  *param_1 = (local_c - local_10) * *param_6 +
             ((local_c - _DAT_1005f028 * local_10) + param_2) * *param_5 +
             (_DAT_100613b4 * local_10 + _DAT_1005f21c * local_c) * *param_4 +
             ((_DAT_1005f028 * local_c - _DAT_100613b4 * local_10) + _DAT_1005f024) * *param_3;
  param_1[1] = 0.0;
  param_1[1] = (local_c - local_10) * param_6[1] +
               ((local_c - _DAT_1005f028 * local_10) + param_2) * param_5[1] +
               (_DAT_100613b4 * local_10 + _DAT_1005f21c * local_c) * param_4[1] +
               ((_DAT_1005f028 * local_c - _DAT_100613b4 * local_10) + _DAT_1005f024) * param_3[1];
  local_8 = (void *)0x100051cc;
  __chkesp();
  return;
}

