/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100207c0 @ 0x100207C0 */
/* Body size: 106 addresses */


char * __cdecl FUN_100207c0(undefined4 *param_1,char *param_2,size_t param_3)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_10027bb0(*param_1,param_1[1],local_18,local_30);
  FUN_10027ab0(param_2 + (*local_8 == 0x2d),param_3 + local_8[1],(int)local_8);
  FUN_10020830(param_2,param_3,local_8,'\0');
  return param_2;
}

