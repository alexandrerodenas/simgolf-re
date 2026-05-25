/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10047b4b @ 0x10047B4B */


void __cdecl
FUN_10047b4b(PEXCEPTION_RECORD param_1,PVOID param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6,int param_7,PVOID param_8)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint local_c;
  uint local_8;
  
  if ((DAT_10057e2c != 0) &&
     (iVar1 = FUN_1004670f(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar1 != 0)) {
    return;
  }
  piVar2 = (int *)FUN_10046838(param_5,param_7,param_6,&local_8,&local_c);
  for (; local_8 < local_c; local_8 = local_8 + 1) {
    if ((*piVar2 <= param_6) && (param_6 <= piVar2[1])) {
      iVar3 = piVar2[3] * 0x10 + piVar2[4];
      iVar1 = *(int *)(iVar3 + -0xc);
      if ((iVar1 == 0) || (*(char *)(iVar1 + 8) == '\0')) {
        FUN_10047d04(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar3 + -0x10),(byte *)0x0,
                     piVar2,param_7,param_8);
      }
    }
    piVar2 = piVar2 + 5;
  }
  return;
}

