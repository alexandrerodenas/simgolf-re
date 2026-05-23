/* Ghidra decompiled: sound.dll */
/* Function: FUN_10040e30 @ 0x10040E30 */
/* Body size: 296 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10040e30(int param_1,int *param_2,int *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_64 [18];
  int local_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  puVar5 = local_64;
  for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  if (param_1 != 0) {
    param_1 = param_1 + -4;
  }
  local_c = param_4[1];
  local_14 = param_4[3];
  iVar4 = *param_3;
  local_10 = param_4[2];
  local_8 = *param_4;
  for (local_1c = *param_2; local_1c <= iVar4; local_1c = local_1c + 1) {
    fVar2 = (local_8 * _DAT_1005ecc0 + *(float *)(param_1 + local_1c * 4)) - local_c * _DAT_1005ecbc
    ;
    fVar1 = (fVar2 - (local_8 + local_8)) + local_c;
    local_c = local_8;
    fVar3 = (local_10 * _DAT_1005ecb8 + fVar1) - local_14 * _DAT_1005ecb4;
    fVar1 = (fVar3 - (local_10 + local_10)) + local_14;
    local_14 = local_10;
    *(float *)(param_1 + local_1c * 4) = fVar1 * _DAT_1005ecb0;
    local_10 = fVar3;
    local_8 = fVar2;
  }
  *param_4 = local_8;
  param_4[1] = local_c;
  param_4[2] = local_10;
  param_4[3] = local_14;
  return 0;
}

