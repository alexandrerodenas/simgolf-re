/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002cb30 @ 0x1002CB30 */
/* Body size: 85 addresses */


float10 __cdecl FUN_1002cb30(int param_1,undefined4 param_2,undefined4 param_3)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_10066d68 == 0) {
    fVar2 = __umatherr(1,param_1,param_2,param_3,0,0,param_2,param_3);
  }
  else {
    pDVar1 = FUN_100243f0();
    *pDVar1 = 0x21;
    FUN_1002d7d0();
    fVar2 = (float10)(double)CONCAT44(param_3,param_2);
  }
  return fVar2;
}

