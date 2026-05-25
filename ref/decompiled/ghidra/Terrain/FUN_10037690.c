/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10037690 @ 0x10037690 */


uint __cdecl FUN_10037690(int param_1)

{
  uint local_8;
  
  if (DAT_10066268 < 2) {
    local_8 = *(ushort *)(PTR_DAT_1006605c + param_1 * 2) & 8;
  }
  else {
    local_8 = FUN_1001e6d0(param_1,8);
  }
  return local_8;
}

