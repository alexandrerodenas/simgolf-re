/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30031af0 @ 0x30031AF0 */


void __cdecl FUN_30031af0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = uVar1 >> 1 | param_1[2] << 0x1f;
  param_1[2] = param_1[2] >> 1;
  *param_1 = *param_1 >> 1 | uVar1 << 0x1f;
  return;
}

