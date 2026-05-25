/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e6d0 @ 0x1003E6D0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1003e6d0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20c [8];
  float afStack_1ec [8];
  float local_1cc;
  float local_1c8;
  float local_1c4;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = local_20c;
  for (iVar1 = 0x82; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  iVar1 = param_4 + -4;
  local_8 = *param_1;
  iVar2 = *param_1 + 1;
  local_c = iVar2;
  local_10 = *param_1;
  local_2c = 1;
  while( true ) {
    if (local_10 < local_2c) {
      return 0;
    }
    local_14 = *param_1;
    for (local_28 = local_2c; local_28 <= local_14; local_28 = local_28 + 1) {
      afStack_1ec[local_28 + local_2c * 10] =
           *(float *)(param_2 + iVar2 * -4 + (local_28 + local_2c * local_8) * 4);
    }
    local_14 = local_2c + -1;
    for (local_30 = 1; local_30 <= local_14; local_30 = local_30 + 1) {
      local_24 = afStack_1ec[local_2c + local_30 * 10] * afStack_1ec[local_30 * 0xb];
      local_18 = *param_1;
      for (local_28 = local_2c; local_28 <= local_18; local_28 = local_28 + 1) {
        afStack_1ec[local_28 + local_2c * 10] =
             afStack_1ec[local_28 + local_2c * 10] -
             local_24 * afStack_1ec[local_28 + local_30 * 10];
      }
    }
    local_1c4 = afStack_1ec[local_2c * 0xb];
    local_1c = local_1c4;
    if (local_1c4 < _DAT_1005ec00) {
      local_1c4 = -local_1c4;
    }
    if (local_1c4 < _DAT_1005ec40) break;
    *(undefined4 *)(iVar1 + local_2c * 4) = *(undefined4 *)(param_3 + -4 + local_2c * 4);
    local_14 = local_2c + -1;
    for (local_30 = 1; local_30 <= local_2c + -1; local_30 = local_30 + 1) {
      *(float *)(iVar1 + local_2c * 4) =
           *(float *)(iVar1 + local_2c * 4) -
           *(float *)(iVar1 + local_30 * 4) * afStack_1ec[local_2c + local_30 * 10];
    }
    afStack_1ec[local_2c * 0xb] = _DAT_1005b8a8 / afStack_1ec[local_2c * 0xb];
    *(float *)(iVar1 + local_2c * 4) =
         *(float *)(iVar1 + local_2c * 4) * afStack_1ec[local_2c * 0xb];
    local_1c8 = *(float *)(iVar1 + local_2c * 4);
    local_20 = local_1c8;
    if (_DAT_1005ec3c < local_1c8) {
      local_1c8 = 0.999;
    }
    local_1c = local_1c8;
    if (local_1c8 < _DAT_1005ec38) {
      local_1cc = -0.999;
    }
    else {
      local_1cc = local_1c8;
    }
    *(float *)(iVar1 + local_2c * 4) = local_1cc;
    local_2c = local_2c + 1;
  }
  iVar2 = *param_1;
  for (local_28 = local_2c; local_28 <= iVar2; local_28 = local_28 + 1) {
    *(undefined4 *)(iVar1 + local_28 * 4) = 0;
  }
  return 0;
}

