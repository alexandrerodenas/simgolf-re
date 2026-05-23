/* Ghidra decompiled: sound.dll */
/* Function: FUN_10040330 @ 0x10040330 */
/* Body size: 408 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10040330(int param_1,int param_2,int *param_3,int *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_68 [16];
  float local_28;
  float local_24 [4];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = local_68;
  for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  iVar2 = param_1 + -4;
  for (local_c = 1; local_c < 4; local_c = local_c + 1) {
    local_24[local_c] = 0.0;
    local_14 = local_c * 4 + -4;
    local_8 = *param_3;
    for (local_10 = (*param_3 + local_c * 4) - *param_4; local_10 <= local_8;
        local_10 = local_10 + 2) {
      local_24[local_c] =
           *(float *)(iVar2 + local_10 * 4) * *(float *)(iVar2 + (local_10 - local_14) * 4) +
           local_24[local_c];
    }
  }
  local_24[0] = 0.0;
  local_28 = 0.0;
  *param_5 = 0.0;
  param_5[1] = 0.0;
  if (_DAT_1005ec40 < local_24[1]) {
    *param_5 = local_24[2] / local_24[1];
    param_5[1] = (local_24[3] - local_24[2] * *param_5) / (local_24[1] - local_24[2] * *param_5);
    local_24[0] = *param_5 - *param_5 * param_5[1];
    local_28 = param_5[1];
  }
  iVar1 = *param_3;
  for (local_c = (*param_3 + 1) - *param_4; local_c <= iVar1; local_c = local_c + 1) {
    *(float *)(param_2 + -4 + local_c * 4) =
         (*(float *)(iVar2 + local_c * 4) - local_24[0] * *(float *)(param_1 + -0x14 + local_c * 4))
         - local_28 * *(float *)(param_1 + -0x24 + local_c * 4);
  }
  return 0;
}

