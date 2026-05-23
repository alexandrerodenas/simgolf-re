/* Ghidra decompiled: sound.dll */
/* Function: FUN_100487ea @ 0x100487EA */
/* Body size: 84 addresses */


float10 __cdecl FUN_100487ea(int param_1,double param_2)

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
  return (float10)param_2;
}

