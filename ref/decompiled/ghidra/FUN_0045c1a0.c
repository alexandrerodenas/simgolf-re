/* Ghidra decompiled: golf.exe */
/* Function: FUN_0045c1a0 @ 0x0045C1A0 */
/* Body size: 52 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0045c1a0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 * 0x41c64e6d + 0x3039;
  *param_1 = uVar1;
  return (float10)(uVar1 >> 0x10 & 0x7fff) * (float10)_DAT_004ba800;
}

