/* Ghidra decompiled: sound.dll */
/* Function: FUN_10048936 @ 0x10048936 */
/* Body size: 165 addresses */


float10 __cdecl
FUN_10048936(uint param_1,uint param_2,undefined8 param_3,undefined8 param_4,double param_5,
            uint param_6)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  float10 fVar3;
  uint local_5c [10];
  undefined8 local_34;
  uint local_24;
  
  bVar1 = FUN_10048c8e(param_1,&param_5,param_6);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_24 = local_24 & 0xffffffe3 | 3;
    local_34 = param_4;
    FUN_100489db(local_5c,&param_6,param_1,param_2,&param_3,&param_5);
  }
  iVar2 = FUN_10048f7a((byte)param_1);
  if ((DAT_10067be0 == 0) && (iVar2 != 0)) {
    fVar3 = FUN_10048ea5(iVar2,param_2);
    return fVar3;
  }
  FUN_10048f2d(iVar2);
  FUN_1004917e();
  return (float10)param_5;
}

