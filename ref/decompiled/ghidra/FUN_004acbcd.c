/* Ghidra decompiled: golf.exe */
/* Function: FUN_004acbcd @ 0x004ACBCD */
/* Body size: 45 addresses */


void FUN_004acbcd(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

