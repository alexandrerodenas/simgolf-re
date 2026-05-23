/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10049f4c @ 0x10049F4C */
/* Body size: 304 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_10049f4c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_100531e0) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_10056db0;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_10049fd7:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_100531e0 < param_3) goto LAB_1004a072;
        if (param_3 < _DAT_100531e0) goto LAB_1004a009;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_1004a07c(param_3);
        if (_DAT_100531e0 < param_3) {
          dVar2 = _DAT_10056db0;
          if (iVar3 == 1) {
            dVar2 = -_DAT_10056db0;
          }
          goto LAB_1004a072;
        }
        if (param_3 < _DAT_100531e0) {
          dVar2 = _DAT_10056dd0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_1004a072;
        }
      }
      dVar2 = 1.0;
      goto LAB_1004a072;
    }
    if (_DAT_100531f0 < dVar1) goto LAB_1004a072;
    if (_DAT_100531f0 <= dVar1) {
LAB_10049f9c:
      *param_4 = _DAT_10056db8;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_10049fd7;
    if (dVar1 <= _DAT_100531f0) {
      if (_DAT_100531f0 <= dVar1) goto LAB_10049f9c;
      goto LAB_1004a072;
    }
  }
LAB_1004a009:
  dVar2 = 0.0;
LAB_1004a072:
  *param_4 = dVar2;
  return 0;
}

