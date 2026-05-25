/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10011d60 @ 0x10011D60 */


void FUN_10011d60(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_60 [16];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  
  puVar2 = local_60;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_14 = *(float *)(&DAT_100b28c8 + param_1[1] * 0xc) -
             *(float *)(&DAT_100b28c8 + *param_1 * 0xc);
  local_10 = *(float *)(&DAT_100b28cc + param_1[1] * 0xc) -
             *(float *)(&DAT_100b28cc + *param_1 * 0xc);
  local_c = *(float *)(&DAT_100b28d0 + param_1[1] * 0xc) -
            *(float *)(&DAT_100b28d0 + *param_1 * 0xc);
  local_20 = *(float *)(&DAT_100b28c8 + param_1[2] * 0xc) -
             *(float *)(&DAT_100b28c8 + param_1[1] * 0xc);
  local_1c = *(float *)(&DAT_100b28cc + param_1[2] * 0xc) -
             *(float *)(&DAT_100b28cc + param_1[1] * 0xc);
  local_18 = *(float *)(&DAT_100b28d0 + param_1[2] * 0xc) -
             *(float *)(&DAT_100b28d0 + param_1[1] * 0xc);
  param_1[0xb] = (int)(local_10 * local_18 - local_c * local_1c);
  param_1[0xc] = (int)(local_c * local_20 - local_14 * local_18);
  param_1[0xd] = (int)(local_14 * local_1c - local_10 * local_20);
  thunk_FUN_10037c80((float *)(param_1 + 0xb));
  local_8 = 0x10011e98;
  __chkesp();
  return;
}

