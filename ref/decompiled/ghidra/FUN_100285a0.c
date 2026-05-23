/* Ghidra decompiled: sound.dll */
/* Function: FUN_100285a0 @ 0x100285A0 */
/* Body size: 42 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_100285a0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x19660d + 0x3c6ef35f;
  *param_1 = uVar1;
  return (float10)(float)(uVar1 & 0x7fffff | 0x3f800000) - (float10)_DAT_1005b8a8;
}

