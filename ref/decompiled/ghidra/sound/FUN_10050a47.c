/* Ghidra decompiled: sound.dll */
/* Function: FUN_10050a47 @ 0x10050A47 */
/* Body size: 42 addresses */


char * __cdecl FUN_10050a47(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_3 == 10) && ((int)param_1 < 0)) {
    iVar1 = 1;
  }
  FUN_100509eb(param_1,param_2,param_3,iVar1);
  return param_2;
}

