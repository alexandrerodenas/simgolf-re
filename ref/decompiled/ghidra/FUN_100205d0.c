/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100205d0 @ 0x100205D0 */
/* Body size: 118 addresses */


undefined1 * __cdecl FUN_100205d0(undefined4 *param_1,undefined1 *param_2,int param_3,int param_4)

{
  uint local_30 [6];
  int local_18 [4];
  int *local_8;
  
  local_8 = local_18;
  FUN_10027bb0(*param_1,param_1[1],local_18,local_30);
  FUN_10027ab0(param_2 + (uint)(0 < param_3) + (uint)(*local_8 == 0x2d),param_3 + 1,(int)local_8);
  FUN_10020650(param_2,param_3,param_4,local_8,'\0');
  return param_2;
}

