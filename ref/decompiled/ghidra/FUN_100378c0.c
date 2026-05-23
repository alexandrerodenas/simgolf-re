/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100378c0 @ 0x100378C0 */
/* Body size: 95 addresses */


undefined4 __cdecl FUN_100378c0(int param_1)

{
  undefined4 local_c;
  uint local_8;
  
  if (DAT_10066268 < 2) {
    local_8 = *(ushort *)(PTR_DAT_1006605c + param_1 * 2) & 0x107;
  }
  else {
    local_8 = FUN_1001e6d0(param_1,0x107);
  }
  if ((local_8 == 0) && (param_1 != 0x5f)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

