/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002cb90 @ 0x1002CB90 */
/* Body size: 103 addresses */


float10 __cdecl
FUN_1002cb90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  double dVar1;
  DWORD *pDVar2;
  float10 fVar3;
  undefined4 local_c;
  undefined4 uStack_8;
  
  dVar1 = (double)CONCAT44(param_3,param_2) + (double)CONCAT44(param_5,param_4);
  if (DAT_10066d68 == 0) {
    uStack_8 = (undefined4)((ulonglong)dVar1 >> 0x20);
    local_c = SUB84(dVar1,0);
    fVar3 = __umatherr(1,param_1,param_2,param_3,param_4,param_5,local_c,uStack_8);
  }
  else {
    pDVar2 = FUN_100243f0();
    *pDVar2 = 0x21;
    FUN_1002d7d0();
    fVar3 = (float10)dVar1;
  }
  return fVar3;
}

