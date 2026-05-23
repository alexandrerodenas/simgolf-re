/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003f80 @ 0x10003F80 */
/* Body size: 125 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_10003f80(void *this,float *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  int local_18;
  float local_14 [4];
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    local_14[local_18] =
         (*(float *)(param_2 + local_18 * 4) + *(float *)((int)this + local_18 * 4)) * _DAT_1011d04c
         * local_14[local_18];
  }
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

