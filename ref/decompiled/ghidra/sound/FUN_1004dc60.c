/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004dc60 @ 0x1004DC60 */
/* Body size: 661 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1004dc60(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 local_20;
  short local_c [2];
  uint local_8;
  
  local_8 = FUN_1004917e();
  if (((param_2._2_2_ & 0x7ff0) == 0x7ff0) || ((param_4._2_2_ & 0x7ff0) == 0x7ff0)) {
    if ((((param_2._2_2_ & 0x7ff8) == 0x7ff0) && (((param_2 & 0x7ffff) != 0 || (param_1 != 0)))) ||
       (((param_4._2_2_ & 0x7ff8) == 0x7ff0 && (((param_4 & 0x7ffff) != 0 || (param_3 != 0)))))) {
      dVar7 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) +
              (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
      uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      uVar4 = 8;
      goto LAB_1004deb9;
    }
    if (((param_2._2_2_ & 0x7ff8) == 0x7ff8) || ((param_4._2_2_ & 0x7ff8) == 0x7ff8)) {
      fVar3 = FUN_1004883e(0x26,(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)
                                                ),
                           (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)));
      return fVar3;
    }
  }
  if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) ==
      (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
    FUN_1004917e();
    return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  }
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == _DAT_1005b498) {
    if ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <=
        (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) {
      local_20 = -4.94065645841247e-324;
    }
    else {
      local_20 = 4.94065645841247e-324;
    }
  }
  if (((_DAT_1005b498 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1))) &&
      ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
       (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))) ||
     (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < _DAT_1005b498 &&
      ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
       (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))))) {
    iVar2 = param_1 + -1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (param_1 == 0) {
      iVar1 = param_2 - 1;
LAB_1004ddde:
      local_20 = (double)CONCAT44(iVar1,(int)local_20);
    }
  }
  else if (((_DAT_1005b498 < (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))
           && ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) <
               (double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)))) ||
          (((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) < _DAT_1005b498 &&
           ((double)CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3)) <
            (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)))))) {
    iVar2 = param_1 + 1;
    local_20 = (double)CONCAT44(param_2,iVar2);
    if (iVar2 == 0) {
      iVar1 = param_2 + 1;
      goto LAB_1004ddde;
    }
  }
  else {
    iVar2 = (int)local_20;
  }
  if ((((ulonglong)local_20 & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)local_20 & 0xfffff00000000) != 0 || (iVar2 != 0)))) {
    fVar3 = FUN_100490a0(SUB84(local_20,0),local_20._4_4_,(int *)local_c);
    fVar3 = FUN_10048fb9((double)fVar3,local_c[0] + 0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x12;
  }
  else {
    if (((local_20._4_4_ != 0x7ff00000) || (iVar2 != 0)) &&
       ((local_20._4_4_ != 0xfff00000 || (iVar2 != 0)))) {
      FUN_1004917e();
      return (float10)local_20;
    }
    fVar3 = FUN_100490a0(SUB84(local_20,0),local_20._4_4_,(int *)local_c);
    fVar3 = FUN_10048fb9((double)fVar3,local_c[0] + -0x600);
    dVar7 = (double)fVar3;
    uVar6 = CONCAT26(param_4._2_2_,CONCAT24((undefined2)param_4,param_3));
    uVar5 = CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    uVar4 = 0x11;
  }
LAB_1004deb9:
  fVar3 = FUN_10048936(uVar4,0x26,uVar5,uVar6,dVar7,local_8);
  return fVar3;
}

