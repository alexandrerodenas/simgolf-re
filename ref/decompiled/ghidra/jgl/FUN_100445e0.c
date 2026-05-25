/* Ghidra decompiled: jgl.dll */
/* Function: FUN_100445e0 @ 0x100445E0 */


void __cdecl FUN_100445e0(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte local_c [4];
  byte local_8 [4];
  undefined1 local_4;
  
  if ((param_1[0x1a] & 1U) == 0) {
    FUN_10042d90(param_1,s_Missing_IHDR_before_pHYS_100560a8);
  }
  else {
    if ((param_1[0x1a] & 4U) != 0) {
      FUN_10042dc0((int)param_1,s_Invalid_pHYS_after_IDAT_10056074);
      FUN_10042fd0(param_1,param_3);
      return;
    }
    if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x80) != 0)) {
      FUN_10042dc0((int)param_1,s_Duplicate_pHYS_chunk_1005605c);
      FUN_10042fd0(param_1,param_3);
      return;
    }
  }
  if (param_3 != 9) {
    FUN_10042dc0((int)param_1,s_Incorrect_pHYs_chunk_length_1005608c);
    FUN_10042fd0(param_1,param_3);
    return;
  }
  FUN_10042fa0(param_1,local_c,9);
  iVar1 = FUN_10042fd0(param_1,0);
  if (iVar1 == 0) {
    iVar1 = FUN_10042f50(local_c);
    iVar2 = FUN_10042f50(local_8);
    FUN_10046180((int)param_1,param_2,iVar1,iVar2,local_4);
  }
  return;
}

