/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003da50 @ 0x1003DA50 */
/* Body size: 2150 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_1003da50(int *param_1,int param_2,int *param_3,float *param_4,int param_5,int *param_6,
            int param_7,int param_8,int param_9,int param_10,int *param_11,float *param_12,
            int param_13)

{
  double dVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  void *this;
  void *this_00;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar9;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  longlong lVar10;
  int local_8c;
  undefined4 local_84;
  int local_80;
  int local_7c;
  float local_78;
  float local_70;
  int local_68;
  int local_64;
  void *local_5c;
  int local_58;
  float local_54 [11];
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  float *local_8;
  
  puVar8 = (undefined4 *)&stack0xffffff04;
  for (iVar4 = 0x3e; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0xcccccccc;
    puVar8 = puVar8 + 1;
  }
  if (param_5 != 0) {
    param_5 = param_5 + -4;
  }
  if (param_10 != 0) {
    local_10 = *param_1;
    local_14 = *param_1 + 1;
    param_10 = param_10 + local_14 * -4;
  }
  if (param_2 != 0) {
    param_2 = param_2 + -4;
  }
  if (param_7 != 0) {
    param_7 = param_7 + -4;
  }
  if (param_8 != 0) {
    param_8 = param_8 + -4;
  }
  if (param_9 != 0) {
    param_9 = param_9 + -4;
  }
  piVar5 = (int *)(param_13 + 0x64c);
  piVar6 = (int *)(param_13 + 0x650);
  local_8 = (float *)(param_13 + 0x654);
  piVar7 = (int *)(param_13 + 0x680);
  local_c = (int *)(param_13 + 0x684);
  if (*param_4 < _DAT_1005b8a8) {
    *param_4 = 1.0;
  }
  if (*local_8 < _DAT_1005b8a8) {
    *local_8 = 1.0;
  }
  local_78 = 0.0;
  *param_12 = *param_4 / (*local_8 + _DAT_1005ec24);
  if (*local_c == 0) {
    bVar2 = false;
    local_68 = *param_6 + *piVar7;
    *param_11 = 0;
    local_64 = 0;
    local_8c = 1;
    if ((*(int *)(param_2 + 4) == *piVar5) && (*(int *)(param_2 + 8) == *(int *)(param_2 + 4))) {
      if (*(int *)(param_2 + 8) == 0) {
        *param_3 = (int)(*param_6 + (*param_6 >> 0x1f & 3U)) >> 2;
        *piVar6 = *param_3;
        if (_DAT_1005ec24 < *param_12) {
          *local_8 = *param_4;
        }
      }
      local_70 = (float)(*param_3 - *piVar6) / (float)local_68;
      local_84 = *(undefined4 *)(param_2 + 8);
    }
    else if (*piVar5 == 1) {
      if (*piVar5 == *(int *)(param_2 + 4)) {
        local_68 = ((int)(*param_6 * 3 + (*param_6 * 3 >> 0x1f & 3U)) >> 2) + *piVar7;
      }
      else {
        local_68 = ((int)(*param_6 + (*param_6 >> 0x1f & 3U)) >> 2) + *piVar7;
      }
      local_18 = *param_1;
      for (local_58 = 1; local_58 <= local_18; local_58 = local_58 + 1) {
        local_54[local_58] = *(float *)(param_5 + local_58 * 4);
        *(undefined4 *)(param_5 + local_58 * 4) = *(undefined4 *)(param_13 + 0x654 + local_58 * 4);
      }
      local_84 = 1;
      local_70 = 0.0;
      bVar2 = true;
    }
    else {
      if (*piVar5 == *(int *)(param_2 + 4)) {
        iVar4 = *param_6 + (*param_6 >> 0x1f & 3U);
      }
      else {
        iVar4 = *param_6 * 3 + (*param_6 * 3 >> 0x1f & 3U);
      }
      local_80 = local_68 - (iVar4 >> 2);
      *(int *)(param_8 + 4) = local_80 / 2;
      *(int *)(param_8 + 8) = local_80 - *(int *)(param_8 + 4);
      *(undefined4 *)(param_7 + 4) = 0;
      *(undefined4 *)(param_7 + 8) = 0;
      *(float *)(param_9 + 4) = *local_8;
      *(float *)(param_9 + 8) = *local_8;
      iVar4 = *param_1;
      for (local_58 = 1; local_58 <= iVar4; local_58 = local_58 + 1) {
        *(undefined4 *)(param_10 + (local_58 + local_10) * 4) =
             *(undefined4 *)(param_13 + 0x654 + local_58 * 4);
        *(undefined4 *)(param_10 + (local_58 + local_10 * 2) * 4) =
             *(undefined4 *)(param_13 + 0x654 + local_58 * 4);
        *(undefined4 *)(param_13 + 0x654 + local_58 * 4) = *(undefined4 *)(param_5 + local_58 * 4);
      }
      local_70 = 0.0;
      *param_11 = 2;
      *piVar6 = *param_3;
      local_64 = local_80;
      local_8c = local_80 + 1;
      local_84 = 1;
    }
    while( true ) {
      local_18 = local_68;
      for (local_58 = local_8c; local_58 <= local_18; local_58 = local_58 + 1) {
        local_20 = (float)local_58 * local_70 + (float)*piVar6;
        lVar10 = __ftol();
        local_7c = (int)lVar10;
        if (local_78 != _DAT_1005ec00) {
          lVar10 = __ftol();
          local_7c = (int)lVar10;
        }
        if (local_7c <= local_58 - local_64) {
          *param_11 = *param_11 + 1;
          *(int *)(param_8 + *param_11 * 4) = local_7c;
          *param_3 = local_7c;
          *(undefined4 *)(param_7 + *param_11 * 4) = local_84;
          local_64 = local_64 + local_7c;
          local_54[0] = (float)(local_64 - local_7c / 2) / (float)local_68;
          local_1c = *param_1;
          for (local_5c = (void *)0x1; (int)local_5c <= local_1c;
              local_5c = (void *)((int)local_5c + 1)) {
            dVar1 = (double)((*(float *)(param_13 + 0x654 + (int)local_5c * 4) + _DAT_1005b8a8) /
                            (_DAT_1005b8a8 - *(float *)(param_13 + 0x654 + (int)local_5c * 4)));
            FUN_100432e4((void *)(param_13 + 0x658),SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20))
            ;
            local_28 = (float)extraout_ST0;
            dVar1 = (double)((*(float *)(param_5 + (int)local_5c * 4) + _DAT_1005b8a8) /
                            (_DAT_1005b8a8 - *(float *)(param_5 + (int)local_5c * 4)));
            FUN_100432e4(local_5c,SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
            local_24 = (float)extraout_ST0_00;
            dVar1 = (double)((extraout_ST0_00 - (float10)local_28) * (float10)local_54[0] +
                            (float10)local_28);
            fVar9 = (float10)FUN_100432b0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
            *(float *)(param_10 + (int)((int)local_5c + *param_11 * local_10) * 4) =
                 (float)((fVar9 - (float10)_DAT_1005b8a8) /
                        ((float10)(float)fVar9 + (float10)_DAT_1005b8a8));
          }
          FUN_100432e4(local_8,SUB84((double)*local_8,0),(uint)((ulonglong)(double)*local_8 >> 0x20)
                      );
          fVar3 = local_54[0];
          FUN_100432e4(this,SUB84((double)*param_4,0),(uint)((ulonglong)(double)*param_4 >> 0x20));
          FUN_100432e4(this_00,SUB84((double)*local_8,0),(uint)((ulonglong)(double)*local_8 >> 0x20)
                      );
          *(float *)(param_9 + *param_11 * 4) =
               (float)(((float10)(double)extraout_ST0_02 - extraout_ST0_03) * (float10)fVar3 +
                      (float10)(double)extraout_ST0_01);
          dVar1 = (double)*(float *)(param_9 + *param_11 * 4);
          fVar9 = (float10)FUN_100432b0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
          *(float *)(param_9 + *param_11 * 4) = (float)fVar9;
        }
      }
      if (!bVar2) break;
      bVar2 = false;
      local_8c = local_64 + 1;
      local_68 = *param_6 + *piVar7;
      local_70 = 0.0;
      local_84 = 0;
      iVar4 = (local_68 - local_8c) / 2;
      local_78 = (float)iVar4;
      if (_DAT_1005ec30 < (float)iVar4) {
        local_78 = local_78 / _DAT_1005ec2c;
      }
      *local_8 = *param_4;
      local_18 = *param_1;
      for (local_58 = 1; local_58 <= local_18; local_58 = local_58 + 1) {
        *(float *)(param_5 + local_58 * 4) = local_54[local_58];
        *(float *)(param_13 + 0x654 + local_58 * 4) = local_54[local_58];
      }
    }
    *piVar7 = local_68 - local_64;
  }
  else {
    iVar4 = *(int *)(param_2 + 8);
    if (iVar4 == 0) {
      *param_3 = (int)(*param_6 + (*param_6 >> 0x1f & 3U)) >> 2;
    }
    *param_11 = *param_6 / *param_3;
    *piVar7 = *param_6 - *param_11 * *param_3;
    local_18 = *param_11;
    for (local_58 = 1; local_58 <= local_18; local_58 = local_58 + 1) {
      local_1c = *param_1;
      for (local_5c = (void *)0x1; (int)local_5c <= local_1c; local_5c = (void *)((int)local_5c + 1)
          ) {
        *(undefined4 *)(param_10 + ((int)local_5c + local_58 * local_10) * 4) =
             *(undefined4 *)(param_5 + (int)local_5c * 4);
      }
      *(int *)(param_7 + local_58 * 4) = iVar4;
      *(int *)(param_8 + local_58 * 4) = *param_3;
      *(float *)(param_9 + local_58 * 4) = *param_4;
    }
    *local_c = 0;
  }
  if (*param_11 != 0) {
    *piVar5 = *(int *)(param_2 + 8);
    *piVar6 = *param_3;
    *local_8 = *param_4;
    local_18 = *param_1;
    for (local_58 = 1; local_58 <= local_18; local_58 = local_58 + 1) {
      *(undefined4 *)(param_13 + 0x654 + local_58 * 4) = *(undefined4 *)(param_5 + local_58 * 4);
    }
  }
  local_8 = (float *)0x1003e2b2;
  FUN_100431ce();
  return;
}

