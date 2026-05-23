/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007a0d0 @ 0x1007A0D0 */
/* Body size: 1786 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1007a0d0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined4 local_ac [16];
  uint local_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined4 uStack_60;
  uint local_5c;
  undefined4 uStack_58;
  uint local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined4 uStack_48;
  uint local_44;
  undefined4 uStack_40;
  uint local_3c;
  undefined4 uStack_38;
  uint local_34;
  undefined4 uStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  uint local_c;
  byte local_8 [4];
  
  puVar2 = local_ac;
  for (iVar1 = 0x2a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10078fe0(param_1,"Missing IHDR before sBIT");
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10079040((int)param_1,"Invalid cHRM after IDAT");
      FUN_10079510(param_1,param_3);
      goto LAB_1007a7b6;
    }
    if ((param_1[0x1a] & 2U) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_10079040((int)param_1,"Duplicate cHRM chunk");
        FUN_10079510(param_1,param_3);
        goto LAB_1007a7b6;
      }
    }
    else {
      FUN_10079040((int)param_1,"Missing PLTE before cHRM");
    }
  }
  if (param_3 == 0x20) {
    FUN_100794b0(param_1,local_8,4);
    local_34 = FUN_100793b0(local_8);
    uStack_30 = 0;
    local_10 = (float)local_34 / _DAT_1011e2d4;
    local_c = local_34;
    FUN_100794b0(param_1,local_8,4);
    local_3c = FUN_100793b0(local_8);
    uStack_38 = 0;
    local_14 = (float)local_3c / _DAT_1011e2d4;
    local_c = local_3c;
    if (((local_10 < _DAT_1011d054) || ((float)_DAT_1011e538 < local_10)) ||
       ((local_14 < _DAT_1011d054 ||
        (((float)_DAT_1011e538 < local_14 || ((float)_DAT_1011d030 < local_10 + local_14)))))) {
      FUN_10079040((int)param_1,"Invalid cHRM white point");
      FUN_10079510(param_1,0x18);
    }
    else {
      FUN_100794b0(param_1,local_8,4);
      local_44 = FUN_100793b0(local_8);
      uStack_40 = 0;
      local_18 = (float)local_44 / _DAT_1011e2d4;
      local_c = local_44;
      FUN_100794b0(param_1,local_8,4);
      local_4c = FUN_100793b0(local_8);
      uStack_48 = 0;
      local_1c = (float)local_4c / _DAT_1011e2d4;
      local_c = local_4c;
      if ((((local_18 < _DAT_1011d054) || ((float)_DAT_1011e538 < local_18)) ||
          (local_1c < _DAT_1011d054)) ||
         (((float)_DAT_1011e538 < local_1c || ((float)_DAT_1011d030 < local_18 + local_1c)))) {
        FUN_10079040((int)param_1,"Invalid cHRM red point");
        FUN_10079510(param_1,0x10);
      }
      else {
        FUN_100794b0(param_1,local_8,4);
        local_54 = FUN_100793b0(local_8);
        uStack_50 = 0;
        local_20 = (float)local_54 / _DAT_1011e2d4;
        local_c = local_54;
        FUN_100794b0(param_1,local_8,4);
        local_5c = FUN_100793b0(local_8);
        uStack_58 = 0;
        local_24 = (float)local_5c / _DAT_1011e2d4;
        local_c = local_5c;
        if (((local_20 < _DAT_1011d054) || ((float)_DAT_1011e538 < local_20)) ||
           ((local_24 < _DAT_1011d054 ||
            (((float)_DAT_1011e538 < local_24 || ((float)_DAT_1011d030 < local_20 + local_24)))))) {
          FUN_10079040((int)param_1,"Invalid cHRM green point");
          FUN_10079510(param_1,8);
        }
        else {
          FUN_100794b0(param_1,local_8,4);
          local_64 = FUN_100793b0(local_8);
          uStack_60 = 0;
          local_28 = (float)local_64 / _DAT_1011e2d4;
          local_c = local_64;
          FUN_100794b0(param_1,local_8,4);
          local_6c = FUN_100793b0(local_8);
          uStack_68 = 0;
          local_2c = (float)local_6c / _DAT_1011e2d4;
          local_c = local_6c;
          if ((((local_28 < _DAT_1011d054) || (_DAT_1011e4e4 < local_28)) ||
              (local_2c < _DAT_1011d054)) ||
             ((_DAT_1011e4e4 < local_2c || (_DAT_1011d050 < local_28 + local_2c)))) {
            FUN_10079040((int)param_1,"Invalid cHRM blue point");
            FUN_10079510(param_1,0);
          }
          else {
            iVar1 = FUN_10079510(param_1,0);
            if (iVar1 == 0) {
              if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
                FUN_1007db30((int)param_1,param_2,(double)local_10,(double)local_14,(double)local_18
                             ,(double)local_1c,(double)local_20,(double)local_24,(double)local_28,
                             (double)local_2c);
              }
              else {
                fVar3 = FUN_10082960(SUB84((double)(local_10 - _DAT_1011e4c8),0),
                                     (uint)((ulonglong)(double)(local_10 - _DAT_1011e4c8) >> 0x20));
                if (((((float10)_DAT_1011e4c0 < fVar3) ||
                     (fVar3 = FUN_10082960(SUB84((double)(local_14 - _DAT_1011e4b8),0),
                                           (uint)((ulonglong)(double)(local_14 - _DAT_1011e4b8) >>
                                                 0x20)), (float10)_DAT_1011e4c0 < fVar3)) ||
                    ((fVar3 = FUN_10082960(SUB84((double)(local_18 - _DAT_1011e4b4),0),
                                           (uint)((ulonglong)(double)(local_18 - _DAT_1011e4b4) >>
                                                 0x20)), (float10)_DAT_1011e4c0 < fVar3 ||
                     (((fVar3 = FUN_10082960(SUB84((double)(local_1c - _DAT_1011e4b0),0),
                                             (uint)((ulonglong)(double)(local_1c - _DAT_1011e4b0) >>
                                                   0x20)), (float10)_DAT_1011e4c0 < fVar3 ||
                       (fVar3 = FUN_10082960(SUB84((double)(local_20 - _DAT_1011e4ac),0),
                                             (uint)((ulonglong)(double)(local_20 - _DAT_1011e4ac) >>
                                                   0x20)), (float10)_DAT_1011e4c0 < fVar3)) ||
                      (fVar3 = FUN_10082960(SUB84((double)(local_24 - _DAT_1011e4a8),0),
                                            (uint)((ulonglong)(double)(local_24 - _DAT_1011e4a8) >>
                                                  0x20)), (float10)_DAT_1011e4c0 < fVar3)))))) ||
                   ((fVar3 = FUN_10082960(SUB84((double)(local_28 - _DAT_1011e4a4),0),
                                          (uint)((ulonglong)(double)(local_28 - _DAT_1011e4a4) >>
                                                0x20)), (float10)_DAT_1011e4c0 < fVar3 ||
                    (fVar3 = FUN_10082960(SUB84((double)(local_2c - _DAT_1011e4a0),0),
                                          (uint)((ulonglong)(double)(local_2c - _DAT_1011e4a0) >>
                                                0x20)), (float10)_DAT_1011e4c0 < fVar3)))) {
                  FUN_10079040((int)param_1,
                               "Ignoring incorrect cHRM value when sRGB is also present");
                  FUN_10083010((undefined **)&DAT_101233f0,(byte *)"wx=%f, wy=%f, rx=%f, ry=%f\n");
                  FUN_10083010((undefined **)&DAT_101233f0,(byte *)"gx=%f, gy=%f, bx=%f, by=%f\n");
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_10079040((int)param_1,"Incorrect cHRM chunk length");
    FUN_10079510(param_1,param_3);
  }
LAB_1007a7b6:
  local_8[0] = 0xc6;
  local_8[1] = 0xa7;
  local_8[2] = 7;
  local_8[3] = 0x10;
  __chkesp();
  return;
}

