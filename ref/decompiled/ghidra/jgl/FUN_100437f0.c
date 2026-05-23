/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100437f0 @ 0x100437F0 */
/* Body size: 1625 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100437f0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  byte local_64 [4];
  float local_60;
  undefined4 uStack_5c;
  float local_58;
  undefined4 uStack_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_sBIT_10055c6c);
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_10042dc0((int)param_1,s_Invalid_cHRM_after_IDAT_10055d94);
      FUN_10042fd0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 4) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_10042dc0((int)param_1,s_Duplicate_cHRM_chunk_10055d60);
        FUN_10042fd0(param_1,param_3);
        return;
      }
    }
    else {
      FUN_10042dc0((int)param_1,s_Missing_PLTE_before_cHRM_10055d78);
    }
  }
  if (param_3 != 0x20) {
    FUN_10042dc0((int)param_1,s_Incorrect_cHRM_chunk_length_10055dac);
    FUN_10042fd0(param_1,param_3);
    return;
  }
  FUN_10042fa0(param_1,local_64,4);
  uVar1 = FUN_10042f50(local_64);
  local_10 = (double)(ulonglong)uVar1;
  local_50 = (float)(longlong)local_10 * _DAT_100539d0;
  FUN_10042fa0(param_1,local_64,4);
  uVar1 = FUN_10042f50(local_64);
  local_10 = (double)(ulonglong)uVar1;
  local_4c = (float)(longlong)local_10 * _DAT_100539d0;
  if (((local_50 < _DAT_100531e8) || (local_38 = (double)local_50, (float)_DAT_10053a18 < local_50))
     || ((local_4c < _DAT_100531e8 ||
         ((local_10 = (double)local_4c, (float)_DAT_10053a18 < local_4c ||
          ((float)_DAT_100531f0 < local_4c + local_50)))))) {
    FUN_10042dc0((int)param_1,s_Invalid_cHRM_white_point_10055c88);
    FUN_10042fd0(param_1,0x18);
  }
  else {
    FUN_10042fa0(param_1,local_64,4);
    uVar1 = FUN_10042f50(local_64);
    local_18 = (double)(ulonglong)uVar1;
    local_48 = (float)(longlong)local_18 * _DAT_100539d0;
    FUN_10042fa0(param_1,local_64,4);
    uVar1 = FUN_10042f50(local_64);
    local_18 = (double)(ulonglong)uVar1;
    local_44 = (float)(longlong)local_18 * _DAT_100539d0;
    if ((((local_48 < _DAT_100531e8) ||
         (local_18 = (double)local_48, (float)_DAT_10053a18 < local_48)) ||
        (local_44 < _DAT_100531e8)) ||
       ((local_20 = (double)local_44, (float)_DAT_10053a18 < local_44 ||
        ((float)_DAT_100531f0 < local_44 + local_48)))) {
      FUN_10042dc0((int)param_1,s_Invalid_cHRM_red_point_10055ca4);
      FUN_10042fd0(param_1,0x10);
      return;
    }
    FUN_10042fa0(param_1,local_64,4);
    uVar1 = FUN_10042f50(local_64);
    local_28 = (double)(ulonglong)uVar1;
    local_40 = (float)(longlong)local_28 * _DAT_100539d0;
    FUN_10042fa0(param_1,local_64,4);
    uVar1 = FUN_10042f50(local_64);
    local_28 = (double)(ulonglong)uVar1;
    local_3c = (float)(longlong)local_28 * _DAT_100539d0;
    if (((local_40 < _DAT_100531e8) ||
        (local_28 = (double)local_40, (float)_DAT_10053a18 < local_40)) ||
       ((local_3c < _DAT_100531e8 ||
        ((local_30 = (double)local_3c, (float)_DAT_10053a18 < local_3c ||
         ((float)_DAT_100531f0 < local_3c + local_40)))))) {
      FUN_10042dc0((int)param_1,s_Invalid_cHRM_green_point_10055cbc);
      FUN_10042fd0(param_1,8);
      return;
    }
    FUN_10042fa0(param_1,local_64,4);
    uVar1 = FUN_10042f50(local_64);
    uStack_54 = 0;
    local_58 = (float)uVar1 * _DAT_100539d0;
    FUN_10042fa0(param_1,local_64,4);
    uVar1 = FUN_10042f50(local_64);
    uStack_5c = 0;
    local_60 = (float)uVar1 * _DAT_100539d0;
    if ((((local_58 < _DAT_100531e8) || (_DAT_10053a14 < local_58)) || (local_60 < _DAT_100531e8))
       || ((_DAT_10053a14 < local_60 || (_DAT_100531d8 < local_60 + local_58)))) {
      FUN_10042dc0((int)param_1,s_Invalid_cHRM_blue_point_10055cd8);
      FUN_10042fd0(param_1,0);
      return;
    }
    iVar2 = FUN_10042fd0(param_1,0);
    if (iVar2 == 0) {
      if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
        FUN_10045e80((int)param_1,param_2,local_38,local_10,local_18,local_20,local_28,local_30,
                     (double)local_58,(double)local_60);
        return;
      }
      if (((((float)_DAT_10053a08 < ABS(local_50 - _DAT_10053a10)) ||
           ((float)_DAT_10053a08 < ABS(local_4c - _DAT_10053a00))) ||
          (((float)_DAT_10053a08 < ABS(local_48 - _DAT_100539fc) ||
           ((((float)_DAT_10053a08 < ABS(local_44 - _DAT_100539f8) ||
             ((float)_DAT_10053a08 < ABS(local_40 - _DAT_100539f4))) ||
            ((float)_DAT_10053a08 < ABS(local_3c - _DAT_100539f0))))))) ||
         (((float)_DAT_10053a08 < ABS(local_58 - _DAT_100539ec) ||
          ((float)_DAT_10053a08 < ABS(local_60 - _DAT_100539e8))))) {
        FUN_10042dc0((int)param_1,s_Ignoring_incorrect_cHRM_value_wh_10055d28);
        FUN_10047221((int *)&DAT_100563e0,(byte *)s_wx__f__wy__f__rx__f__ry__f_10055d0c);
        FUN_10047221((int *)&DAT_100563e0,(byte *)s_gx__f__gy__f__bx__f__by__f_10055cf0);
        return;
      }
    }
  }
  return;
}

