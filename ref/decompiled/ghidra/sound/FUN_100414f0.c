/* Ghidra decompiled: sound.dll */
/* Function: FUN_100414f0 @ 0x100414F0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_100414f0(int param_1,int *param_2,int param_3,int *param_4,int *param_5,int param_6,int *param_7
            ,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_68 [16];
  float local_28;
  float local_24;
  int local_18;
  int local_14;
  
  puVar4 = local_68;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  iVar1 = param_6 + -4;
  *param_7 = 1;
  *param_8 = 1;
  iVar3 = *param_4;
  for (local_14 = 1; local_14 <= iVar3; local_14 = local_14 + 1) {
    iVar2 = (*param_5 - *(int *)(param_3 + -4 + local_14 * 4)) / 2;
    local_24 = 0.0;
    for (local_18 = iVar2 + 1; local_18 <= iVar2 + *param_2; local_18 = local_18 + 4) {
      local_28 = *(float *)(param_1 + -4 + local_18 * 4) -
                 *(float *)(param_1 + -4 + (local_18 + *(int *)(param_3 + -4 + local_14 * 4)) * 4);
      if (local_28 < _DAT_1005ec00) {
        local_28 = -local_28;
      }
      local_24 = local_24 + local_28;
    }
    *(float *)(iVar1 + local_14 * 4) = local_24;
    if (*(float *)(iVar1 + local_14 * 4) < *(float *)(iVar1 + *param_7 * 4)) {
      *param_7 = local_14;
    }
    if (*(float *)(iVar1 + *param_8 * 4) < *(float *)(iVar1 + local_14 * 4)) {
      *param_8 = local_14;
    }
  }
  return 0;
}

