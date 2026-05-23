/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10037580 @ 0x10037580 */
/* Body size: 60 addresses */


uint __cdecl FUN_10037580(int param_1)

{
  uint local_8;
  
  if (DAT_10066268 < 2) {
    local_8 = *(ushort *)(PTR_DAT_1006605c + param_1 * 2) & 1;
  }
  else {
    local_8 = FUN_1001e6d0(param_1,1);
  }
  return local_8;
}

