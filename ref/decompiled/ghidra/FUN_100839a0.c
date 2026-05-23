/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100839a0 @ 0x100839A0 */
/* Body size: 106 addresses */


char * __cdecl FUN_100839a0(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_1008f3a0(*param_1,param_1[1],local_18,local_30);
  FUN_1008f2a0(param_2 + (*local_8 == 0x2d),param_3 + local_8[1],(int)local_8);
  FUN_10083a10(param_2,param_3,local_8,'\0');
  return param_2;
}

