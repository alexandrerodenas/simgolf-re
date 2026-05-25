/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002cc00 @ 0x1002CC00 */


float10 __cdecl
FUN_1002cc00(uint param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  uint local_60 [14];
  uint local_28;
  int local_8;
  
  bVar1 = FUN_1002d260(param_1,(double *)&param_5,param_7);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xfffffffe;
    FUN_1002cd90(local_60,&param_7,param_1,param_2,&param_3,&param_5);
  }
  local_8 = FUN_1002d700(param_1);
  if ((DAT_10066d68 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,0,0,param_5,param_6);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_1002d7d0();
    fVar2 = (float10)(double)CONCAT44(param_6,param_5);
  }
  return fVar2;
}

