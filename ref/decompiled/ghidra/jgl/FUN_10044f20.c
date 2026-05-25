/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10044f20 @ 0x10044F20 */


void __cdecl FUN_10044f20(int *param_1,int param_2,uint param_3)

{
  FUN_10044f70(param_1,(byte *)(param_1 + 0x47));
  if (((*(byte *)(param_1 + 0x47) & 0x20) == 0) &&
     (FUN_10042df0(param_1,(undefined4 *)s_unknown_critical_chunk_100562a4), param_2 == 0)) {
    return;
  }
  if ((param_1[0x1a] & 4U) != 0) {
    param_1[0x1a] = param_1[0x1a] | 8;
  }
  FUN_10042fd0(param_1,param_3);
  return;
}

