/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004883e @ 0x1004883E */
/* Body size: 96 addresses */


float10 __cdecl FUN_1004883e(int param_1,double param_2,double param_3)

{
  DWORD *pDVar1;
  float10 fVar2;
  
  if (DAT_10067be0 == 0) {
    fVar2 = FUN_10048ea5(1,param_1);
    return fVar2;
  }
  pDVar1 = FUN_1004588f();
  *pDVar1 = 0x21;
  FUN_1004917e();
  return (float10)(param_2 + param_3);
}

