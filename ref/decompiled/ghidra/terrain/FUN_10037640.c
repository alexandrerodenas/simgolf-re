/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10037640 @ 0x10037640 */
/* Body size: 65 addresses */


uint __cdecl FUN_10037640(int param_1)

{
  uint local_8;
  
  if (DAT_10066268 < 2) {
    local_8 = *(ushort *)(PTR_DAT_1006605c + param_1 * 2) & 0x80;
  }
  else {
    local_8 = FUN_1001e6d0(param_1,0x80);
  }
  return local_8;
}

