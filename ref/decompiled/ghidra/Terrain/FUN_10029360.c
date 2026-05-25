/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10029360 @ 0x10029360 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_10029360(uint param_1,uint param_2)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  int local_c;
  uint local_8;
  
  local_8 = FUN_1002d7d0();
  if ((param_2._2_2_ & 0x7ff0) != 0x7ff0) {
    if ((double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) == _DAT_1005f368) {
      fVar3 = FUN_1002cc00(4,0x25,param_1,param_2,SUB84(-_DAT_10066a10,0),
                           (int)((ulonglong)-_DAT_10066a10 >> 0x20),local_8);
      return fVar3;
    }
    FUN_10029180(param_1,param_2,&local_c);
    FUN_1002d7d0();
    return (float10)(local_c + -1);
  }
  iVar2 = FUN_10029100(param_1,param_2);
  if (0 < iVar2) {
    if (iVar2 < 3) {
      FUN_1002d7d0();
      return (float10)(double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1));
    }
    if (iVar2 == 3) {
      fVar3 = FUN_1002cb30(0x25,param_1,param_2);
      return fVar3;
    }
  }
  dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((undefined2)param_2,param_1)) + _DAT_10060328;
  fVar3 = FUN_1002cc00(8,0x25,param_1,param_2,SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20),local_8
                      );
  return fVar3;
}

