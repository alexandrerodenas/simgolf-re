/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10037860 @ 0x10037860 */


undefined4 __cdecl FUN_10037860(int param_1)

{
  undefined4 local_c;
  uint local_8;
  
  if (DAT_10066268 < 2) {
    local_8 = *(ushort *)(PTR_DAT_1006605c + param_1 * 2) & 0x103;
  }
  else {
    local_8 = FUN_1001e6d0(param_1,0x103);
  }
  if ((local_8 == 0) && (param_1 != 0x5f)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return local_c;
}

