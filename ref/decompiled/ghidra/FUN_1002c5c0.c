/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002c5c0 @ 0x1002C5C0 */
/* Body size: 79 addresses */


uint __cdecl FUN_1002c5c0(undefined4 *param_1,undefined4 *param_2,byte *param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  ushort local_10 [6];
  
  local_18 = FUN_1002ba90(local_10,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_10027930(local_10,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    local_18 = local_18 | 2;
  }
  return local_18;
}

