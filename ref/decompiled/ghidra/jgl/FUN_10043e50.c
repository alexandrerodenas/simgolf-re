/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10043e50 @ 0x10043E50 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10043e50(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  piVar2 = param_1;
  uVar1 = param_1[0x1a];
  if ((uVar1 & 1) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_sRGB_10055e4c);
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_10042dc0((int)param_1,s_Invalid_sRGB_after_IDAT_10055e18);
      FUN_10042fd0(piVar2,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) {
      if ((param_2 != 0) && ((*(uint *)(param_2 + 8) & 0x800) != 0)) {
        FUN_10042dc0((int)param_1,s_Duplicate_sRGB_chunk_10055de8);
        FUN_10042fd0(piVar2,param_3);
        return;
      }
    }
    else {
      FUN_10042dc0((int)param_1,s_Out_of_place_sRGB_chunk_10055e00);
    }
  }
  uVar1 = param_3;
  if (param_3 != 1) {
    FUN_10042dc0((int)piVar2,s_Incorrect_sRGB_chunk_length_10055e30);
    FUN_10042fd0(piVar2,uVar1);
    return;
  }
  FUN_10042fa0(piVar2,(byte *)&param_1,1);
  iVar5 = FUN_10042fd0(piVar2,0);
  piVar3 = param_1;
  if (iVar5 == 0) {
    if (3 < ((uint)param_1 & 0xff)) {
      FUN_10042dc0((int)piVar2,s_Unknown_sRGB_intent_10055dd4);
      return;
    }
    if (((*(byte *)(iVar4 + 8) & 1) != 0) &&
       ((float)_DAT_100539d8 <
        ABS(((float)piVar2[0x57] * _DAT_10053a20 + (float)_DAT_100535a0) - (float)_DAT_100539e0))) {
      FUN_10042dc0((int)piVar2,s_Ignoring_incorrect_gAMA_value_wh_10055b50);
      FUN_10047221((int *)&DAT_100563e0,(byte *)s_gamma__f_10055dc8);
    }
    if (((*(byte *)(iVar4 + 8) & 4) != 0) &&
       ((((((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x80) - _DAT_10053a10) ||
           ((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x84) - _DAT_10053a00))) ||
          ((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x88) - _DAT_100539fc))) ||
         (((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x8c) - _DAT_100539f8) ||
          ((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x90) - _DAT_100539f4))))) ||
        (((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x94) - _DAT_100539f0) ||
         (((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x98) - _DAT_100539ec) ||
          ((float)_DAT_10053a08 < ABS(*(float *)(iVar4 + 0x9c) - _DAT_100539e8))))))))) {
      FUN_10042dc0((int)piVar2,s_Ignoring_incorrect_cHRM_value_wh_10055d28);
    }
    FUN_10046240((int)piVar2,iVar4,(char)piVar3);
  }
  return;
}

