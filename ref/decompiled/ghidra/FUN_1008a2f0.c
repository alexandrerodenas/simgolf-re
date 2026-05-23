/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008a2f0 @ 0x1008A2F0 */
/* Body size: 91 addresses */


uint __cdecl FUN_1008a2f0(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_10125ca4 * 0xc);
  if ((param_2 + DAT_10125ca4 * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}

