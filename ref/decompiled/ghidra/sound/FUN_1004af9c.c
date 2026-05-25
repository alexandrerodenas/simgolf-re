/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004af9c @ 0x1004AF9C */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_1004af9c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_1005b498) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_100676e8;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_1004b027:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_1005b498 < param_3) goto LAB_1004b0c2;
        if (param_3 < _DAT_1005b498) goto LAB_1004b059;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_1004b0cc(param_3);
        if (_DAT_1005b498 < param_3) {
          dVar2 = _DAT_100676e8;
          if (iVar3 == 1) {
            dVar2 = -_DAT_100676e8;
          }
          goto LAB_1004b0c2;
        }
        if (param_3 < _DAT_1005b498) {
          dVar2 = _DAT_10067708;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_1004b0c2;
        }
      }
      dVar2 = 1.0;
      goto LAB_1004b0c2;
    }
    if (_DAT_1005c5f8 < dVar1) goto LAB_1004b0c2;
    if (_DAT_1005c5f8 <= dVar1) {
LAB_1004afec:
      *param_4 = _DAT_100676f0;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_1004b027;
    if (dVar1 <= _DAT_1005c5f8) {
      if (_DAT_1005c5f8 <= dVar1) goto LAB_1004afec;
      goto LAB_1004b0c2;
    }
  }
LAB_1004b059:
  dVar2 = 0.0;
LAB_1004b0c2:
  *param_4 = dVar2;
  return 0;
}

