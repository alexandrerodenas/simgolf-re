/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10001590 @ 0x10001590 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_10001590(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x41c64e6d + 0x3039;
  *param_1 = uVar1;
  return (float10)(uVar1 >> 0x10 & 0x7fff) * (float10)_DAT_10053208;
}

