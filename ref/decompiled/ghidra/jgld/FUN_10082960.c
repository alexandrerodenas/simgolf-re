/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10082960 @ 0x10082960 */
/* Body size: 243 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10082960(uint param_1,uint param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  uVar2 = FUN_1008c320();
  if ((param_2._2_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = FUN_1008c120(param_1,param_2);
    if (iVar3 == 1) {
      FUN_1008c320();
      fVar4 = (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar3 == 2) {
      FUN_1008c320();
      fVar4 = -(float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    else if (iVar3 == 3) {
      fVar4 = FUN_1008b3e0(0x15,param_1,param_2);
    }
    else {
      dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + _DAT_1011d030;
      fVar4 = FUN_1008b4b0(8,0x15,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),
                           uVar2);
    }
  }
  else {
    FUN_1008c320();
    fVar4 = (float10)ABS((double)CONCAT44(param_2,param_1));
  }
  return fVar4;
}

