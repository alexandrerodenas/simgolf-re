/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008b3e0 @ 0x1008B3E0 */


float10 __cdecl FUN_1008b3e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  float10 fVar2;
  
  if (DAT_10125f08 == 0) {
    fVar2 = __umatherr(1,param_1,param_2,param_3,0,0,param_2,param_3);
  }
  else {
    puVar1 = (undefined4 *)FUN_100904d0();
    *puVar1 = 0x21;
    FUN_1008c320();
    fVar2 = (float10)(double)CONCAT44(param_3,param_2);
  }
  return fVar2;
}

