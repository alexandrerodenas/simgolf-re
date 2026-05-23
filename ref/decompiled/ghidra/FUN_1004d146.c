/* Ghidra decompiled: sound.dll */
/* Function: FUN_1004d146 @ 0x1004D146 */
/* Body size: 45 addresses */


void __cdecl FUN_1004d146(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

