/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004889e @ 0x1004889E */
/* Body size: 152 addresses */


float10 __cdecl
FUN_1004889e(uint param_1,uint param_2,undefined8 param_3,double param_4,uint param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [14];
  uint local_24;
  
  bVar1 = FUN_10048c8e(param_1,&param_4,param_5);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xfffffffe;
    FUN_100489db(local_5c,&param_5,param_1,param_2,&param_3,&param_4);
  }
  iVar2 = FUN_10048f7a((byte)param_1);
  if ((DAT_10067be0 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_10048ea5(iVar2,param_2);
    return fVar3;
  }
  FUN_10048f2d(iVar2);
  FUN_1004917e();
  return (float10)param_4;
}

