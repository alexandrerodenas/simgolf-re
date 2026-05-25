/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002ccc0 @ 0x1002CCC0 */


float10 __cdecl
FUN_1002ccc0(uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,undefined4 param_8,uint param_9)

{
  bool bVar1;
  undefined3 extraout_var;
  float10 fVar2;
  uint local_60 [10];
  undefined4 local_38;
  undefined4 local_34;
  uint local_28;
  int local_8;
  
  bVar1 = FUN_1002d260(param_1,(double *)&param_7,param_9);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_28 = local_28 & 0xffffffe1 | 3;
    local_38 = param_5;
    local_34 = param_6;
    FUN_1002cd90(local_60,&param_9,param_1,param_2,&param_3,&param_7);
  }
  local_8 = FUN_1002d700(param_1);
  if ((DAT_10066d68 == 0) && (local_8 != 0)) {
    fVar2 = __umatherr(local_8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FID_conflict___set_errno_from_matherr(local_8);
    FUN_1002d7d0();
    fVar2 = (float10)(double)CONCAT44(param_8,param_7);
  }
  return fVar2;
}

