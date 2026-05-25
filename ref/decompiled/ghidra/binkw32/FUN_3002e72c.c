/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3002e72c @ 0x3002E72C */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_3002e72c(int param_1,int param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  dVar1 = (double)CONCAT44(param_2,param_1);
  if ((double)CONCAT44(param_2,param_1) < _DAT_30033fc8) {
    dVar1 = -dVar1;
  }
  dVar2 = _DAT_30040a90;
  if (param_3._4_4_ == 0x7ff00000) {
    if (param_3._0_4_ != 0) {
LAB_3002e7b7:
      if (param_2 == 0x7ff00000) {
        if (param_1 != 0) {
          return 0;
        }
        if (_DAT_30033fc8 < param_3) goto LAB_3002e852;
        if (param_3 < _DAT_30033fc8) goto LAB_3002e7e9;
      }
      else {
        if (param_2 != -0x100000) {
          return 0;
        }
        if (param_1 != 0) {
          return 0;
        }
        iVar3 = FUN_3002e85c(param_3);
        if (_DAT_30033fc8 < param_3) {
          dVar2 = _DAT_30040a90;
          if (iVar3 == 1) {
            dVar2 = -_DAT_30040a90;
          }
          goto LAB_3002e852;
        }
        if (param_3 < _DAT_30033fc8) {
          dVar2 = _DAT_30040ab0;
          if (iVar3 != 1) {
            dVar2 = 0.0;
          }
          goto LAB_3002e852;
        }
      }
      dVar2 = 1.0;
      goto LAB_3002e852;
    }
    if (_DAT_30033fb0 < dVar1) goto LAB_3002e852;
    if (_DAT_30033fb0 <= dVar1) {
LAB_3002e77c:
      *param_4 = _DAT_30040a98;
      return 1;
    }
  }
  else {
    if (param_3 != -INFINITY) goto LAB_3002e7b7;
    if (dVar1 <= _DAT_30033fb0) {
      if (_DAT_30033fb0 <= dVar1) goto LAB_3002e77c;
      goto LAB_3002e852;
    }
  }
LAB_3002e7e9:
  dVar2 = 0.0;
LAB_3002e852:
  *param_4 = dVar2;
  return 0;
}

