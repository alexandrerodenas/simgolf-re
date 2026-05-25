/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000c560 @ 0x1000C560 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1000c560(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_68 [16];
  int local_28;
  int local_24;
  int local_14;
  int local_10;
  
  puVar7 = local_68;
  for (iVar6 = 0x19; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = 0xcccccccc;
    puVar7 = puVar7 + 1;
  }
  iVar6 = param_1 * 3;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      iVar5 = local_14 * 3 + local_10 * iVar6 * 3;
      fVar1 = (float)local_14 * _DAT_10063e4c;
      fVar2 = ((float)param_1 * _DAT_10063e4c) / _DAT_1005f028;
      fVar3 = (float)local_10 * _DAT_10063e50;
      fVar4 = ((float)param_2 * _DAT_10063e50) / _DAT_1005f028;
      for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
        for (local_28 = 0; local_28 < 3; local_28 = local_28 + 1) {
          *(float *)(&DAT_100b28c8 + (iVar5 + local_24 + local_28 * iVar6) * 0xc) =
               (_DAT_10063e4c / _DAT_1005f028) * (float)local_24 + (fVar1 - fVar2);
          *(float *)(&DAT_100b28d0 + (iVar5 + local_24 + local_28 * iVar6) * 0xc) =
               (_DAT_10063e50 / _DAT_1005f028) * (float)local_28 + (fVar3 - fVar4);
          *(undefined4 *)(&DAT_100b28cc + (iVar5 + local_24 + local_28 * iVar6) * 0xc) = 0;
          *(undefined4 *)(&DAT_10070a18 + (iVar5 + local_24 + local_28 * iVar6) * 0xc) = 0;
          *(undefined4 *)(&DAT_10070a1c + (iVar5 + local_24 + local_28 * iVar6) * 0xc) = 0x3f800000;
          *(undefined4 *)(&DAT_10070a20 + (iVar5 + local_24 + local_28 * iVar6) * 0xc) = 0;
        }
      }
    }
  }
  return;
}

