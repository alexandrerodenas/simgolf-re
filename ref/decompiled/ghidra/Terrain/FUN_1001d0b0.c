/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001d0b0 @ 0x1001D0B0 */


bool __cdecl FUN_1001d0b0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xfU & 0xfffffff0;
  if (uVar1 < 0x781) {
    DAT_10066054 = uVar1;
  }
  return uVar1 < 0x781;
}

