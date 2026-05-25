/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10092c90 @ 0x10092C90 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10092c90(uint param_1,uint param_2)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  int local_c;
  uint local_8;
  
  local_8 = FUN_1008c320();
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == _DAT_1011d040) {
      fVar3 = FUN_1008b4b0(4,0x25,param_1,param_2,SUB84(-_DAT_10125b40,0),
                           (int)((ulonglong)-_DAT_10125b40 >> 0x20),local_8);
      return fVar3;
    }
    FUN_1008c1a0(param_1,param_2,&local_c);
    FUN_1008c320();
    return (float10)(local_c + -1);
  }
  iVar2 = FUN_1008c120(param_1,param_2);
  if (0 < iVar2) {
    if (iVar2 < 3) {
      FUN_1008c320();
      return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    if (iVar2 == 3) {
      fVar3 = FUN_1008b3e0(0x25,param_1,param_2);
      return fVar3;
    }
  }
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + _DAT_1011d030;
  fVar3 = FUN_1008b4b0(8,0x25,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),local_8
                      );
  return fVar3;
}

