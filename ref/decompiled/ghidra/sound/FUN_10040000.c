/* Ghidra decompiled: sound.dll */
/* Function: FUN_10040000 @ 0x10040000 */


/* WARNING: Type propagation algorithm not settling */

void __cdecl
FUN_10040000(int param_1,int *param_2,int param_3,int *param_4,int param_5,int *param_6,int *param_7
            ,int *param_8)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_ac [16];
  int local_6c;
  int local_68;
  int local_64;
  int local_60 [7];
  int local_44;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  float local_30;
  undefined1 local_2c [24];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar3 = local_ac;
  for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  iVar1 = param_5 + -4;
  iVar2 = param_3 + -4;
  FUN_100414f0(param_1,param_2,param_3,param_4,(int *)(iVar2 + *param_4 * 4),param_5,param_6,param_7
              );
  *param_8 = *(int *)(iVar2 + *param_6 * 4);
  lVar4 = __ftol();
  local_40 = (int)lVar4;
  local_34 = 0;
  local_44 = *param_6 + -2;
  local_8 = *param_8 + -3;
  local_10 = *param_8 + 3;
  local_14 = *(int *)(iVar2 + *param_4 * 4) + -1;
  local_60[0] = local_14;
  if (local_10 <= local_14) {
    local_60[0] = local_10;
  }
  local_c = local_60[0];
  local_64 = local_8;
  if (local_8 < 0x29) {
    local_64 = 0x29;
  }
  for (local_3c = local_64; (int)local_3c <= local_c; local_3c = local_3c + 1) {
    for (; *(int *)(iVar2 + local_44 * 4) < (int)local_3c; local_44 = local_44 + 1) {
    }
    if (*(int *)(iVar2 + local_44 * 4) != local_3c) {
      local_34 = local_34 + 1;
      local_60[local_34] = local_3c;
    }
  }
  if ((0 < local_34) &&
     (FUN_100414f0(param_1,param_2,(int)(local_60 + 1),&local_34,(int *)(iVar2 + *param_4 * 4),
                   (int)local_2c,(int *)&local_30,&local_38),
     *(float *)(local_2c + (int)local_30 * 4 + -4) < (float)local_40)) {
    *param_8 = local_60[(int)local_30];
    lVar4 = __ftol();
    local_40 = (int)lVar4;
  }
  if (0x4f < *param_8) {
    local_3c = *param_8 / 2;
    if ((local_3c & 1) == 0) {
      local_34 = 2;
      local_60[2] = local_3c + 1;
      local_60[1] = local_3c - 1;
    }
    else {
      local_34 = 1;
      local_60[1] = local_3c;
    }
    FUN_100414f0(param_1,param_2,(int)(local_60 + 1),&local_34,(int *)(iVar2 + *param_4 * 4),
                 (int)local_2c,(int *)&local_30,&local_38);
    if (*(float *)(local_2c + (int)local_30 * 4 + -4) < (float)local_40) {
      *param_8 = local_60[(int)local_30];
      lVar4 = __ftol();
      local_40 = (int)lVar4;
      *param_6 = *param_6 + -0x14;
    }
  }
  *(float *)(iVar1 + *param_6 * 4) = (float)local_40;
  local_68 = *param_6 + -5;
  if (local_68 < 1) {
    local_68 = 1;
  }
  *param_7 = local_68;
  local_6c = *param_6 + 5;
  if (*param_4 < local_6c) {
    local_6c = *param_4;
  }
  local_c = local_6c;
  local_3c = *param_7;
  while (local_3c = local_3c + 1, (int)local_3c <= local_6c) {
    if (*(float *)(iVar1 + *param_7 * 4) < *(float *)(iVar1 + local_3c * 4)) {
      *param_7 = local_3c;
    }
  }
  local_8 = 0x10040326;
  FUN_100431ce();
  return;
}

