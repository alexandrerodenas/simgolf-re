/* Ghidra decompiled: golf.exe */
/* Function: FUN_0084ad10 @ 0x0084AD10 */
/* Body size: 93 addresses */


undefined1 * FUN_0084ad10(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  *param_1 = *param_2;
  while (param_2[local_8] != '\0') {
    iVar1 = local_8 + 1;
    param_1[iVar1] = param_2[iVar1] - 1 ^ param_1[local_8];
    local_8 = iVar1;
  }
  param_1[local_8] = 0;
  return param_1;
}

