/* Ghidra decompiled: sound.dll */
/* Function: FUN_10050a8c @ 0x10050A8C */
/* Body size: 49 addresses */


char * __cdecl FUN_10050a8c(int param_1,int param_2,char *param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_4 == 10) && (param_2 < 1)) && (param_2 < 0)) {
    iVar1 = 1;
  }
  FUN_10050abd(param_1,param_2,param_3,param_4,iVar1);
  return param_3;
}

