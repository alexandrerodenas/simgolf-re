/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004339c @ 0x1004339C */
/* Body size: 207 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1004339c(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  uVar2 = FUN_1004917e();
  if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_10049046(SUB84(param_1,0),(uint)((ulonglong)param_1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_1004917e();
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = FUN_100487ea(0xb,param_1);
        return fVar4;
      }
    }
    dVar1 = param_1 + _DAT_1005c5f8;
    uVar5 = 8;
  }
  else {
    fVar4 = __frnd(param_1);
    dVar1 = (double)fVar4;
    if ((dVar1 == param_1) || ((uVar2 & 0x20) != 0)) {
      FUN_1004917e();
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = FUN_1004889e(uVar5,0xb,param_1,dVar1,uVar2);
  return fVar4;
}

