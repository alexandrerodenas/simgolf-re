/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10042fd0 @ 0x10042FD0 */


undefined4 __cdecl FUN_10042fd0(int *param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  uVar1 = param_1[0x2c];
  for (; uVar1 < param_2; param_2 = param_2 - uVar1) {
    FUN_10042fa0(param_1,(byte *)param_1[0x2b],param_1[0x2c]);
  }
  if (param_2 != 0) {
    FUN_10042fa0(param_1,(byte *)param_1[0x2b],param_2);
  }
  bVar2 = FUN_10043080(param_1);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x47) & 0x20) == 0) || ((param_1[0x1b] & 0x200U) != 0)) &&
     (((*(byte *)(param_1 + 0x47) & 0x20) != 0 || ((param_1[0x1b] & 0x400U) == 0)))) {
    FUN_10042df0(param_1,(undefined4 *)s_CRC_error_10055960);
    return 1;
  }
  FUN_10042eb0((int)param_1,(undefined4 *)s_CRC_error_10055960);
  return 1;
}

