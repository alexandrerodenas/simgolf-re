/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1008fde0 @ 0x1008FDE0 */
/* Body size: 89 addresses */


int * __cdecl FUN_1008fde0(int param_1,int *param_2)

{
  int *local_8;
  
  local_8 = param_2;
  do {
    if (*local_8 == param_1) break;
    local_8 = local_8 + 3;
  } while (local_8 < param_2 + DAT_10125ca4 * 3);
  if ((param_2 + DAT_10125ca4 * 3 <= local_8) || (*local_8 != param_1)) {
    local_8 = (int *)0x0;
  }
  return local_8;
}

