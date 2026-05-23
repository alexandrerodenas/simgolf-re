/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004db79 @ 0x1004DB79 */
/* Body size: 231 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_1004db79(uint param_1,undefined4 param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  int local_8;
  
  uVar2 = FUN_1004917e();
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_10049046(param_1,(uint)((ulonglong)dVar1 >> 0x20));
    if (0 < iVar3) {
      if (iVar3 < 3) {
        FUN_1004917e();
        return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
      }
      if (iVar3 == 3) {
        fVar4 = FUN_100487ea(0x25,(double)CONCAT44((int)(CONCAT26(param_2._2_2_,
                                                                  CONCAT24((undefined2)param_2,
                                                                           param_1)) >> 0x20),
                                                   param_1));
        return fVar4;
      }
    }
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + _DAT_1005c5f8;
    uVar5 = 8;
  }
  else {
    if (dVar1 != _DAT_1005b498) {
      FUN_100490a0(param_1,(uint)(CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) >>
                                 0x20),&local_8);
      FUN_1004917e();
      return (float10)(local_8 + -1);
    }
    dVar1 = -_DAT_100676e8;
    uVar5 = 4;
  }
  fVar4 = FUN_1004889e(uVar5,0x25,CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)),
                       dVar1,uVar2);
  return fVar4;
}

