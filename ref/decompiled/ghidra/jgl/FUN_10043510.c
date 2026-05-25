/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10043510 @ 0x10043510 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_10043510(int *param_1,int param_2,uint param_3)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_2;
  piVar2 = param_1;
  uVar5 = param_1[0x1a];
  if ((uVar5 & 1) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_gAMA_10055bec);
  }
  else {
    if ((uVar5 & 4) != 0) {
      FUN_10042dc0((int)param_1,s_Invalid_gAMA_after_IDAT_10055bb8);
      FUN_10042fd0(piVar2,param_3);
      return;
    }
    if ((uVar5 & 2) == 0) {
      if (((param_2 != 0) && ((*(uint *)(param_2 + 8) & 1) != 0)) &&
         ((*(uint *)(param_2 + 8) & 0x800) == 0)) {
        FUN_10042dc0((int)param_1,s_Duplicate_gAMA_chunk_10055b88);
        FUN_10042fd0(piVar2,param_3);
        return;
      }
    }
    else {
      FUN_10042dc0((int)param_1,s_Out_of_place_gAMA_chunk_10055ba0);
    }
  }
  uVar5 = param_3;
  if (param_3 != 4) {
    FUN_10042dc0((int)piVar2,s_Incorrect_gAMA_chunk_length_10055bd0);
    FUN_10042fd0(piVar2,uVar5);
    return;
  }
  FUN_10042fa0(piVar2,(byte *)&param_1,4);
  iVar4 = FUN_10042fd0(piVar2,0);
  if ((iVar4 == 0) && (uVar5 = FUN_10042f50((byte *)&param_1), uVar5 != 0)) {
    if (((*(uint *)(iVar3 + 8) & 0x800) != 0) &&
       (_DAT_100539d8 < ABS((double)uVar5 - _DAT_100539e0))) {
      FUN_10042dc0((int)piVar2,s_Ignoring_incorrect_gAMA_value_wh_10055b50);
      FUN_10047221((int *)&DAT_100563e0,(byte *)s_igamma____lu_10055b40);
      return;
    }
    fVar1 = (float)uVar5 * _DAT_100539d0;
    piVar2[0x57] = (int)fVar1;
    FUN_10045ef0((int)piVar2,iVar3,(double)fVar1);
  }
  return;
}

