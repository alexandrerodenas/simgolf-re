/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1001b480 @ 0x1001B480 */


uint __cdecl FUN_1001b480(int param_1)

{
  uint local_c;
  
  local_c = DAT_101122fc;
  while( true ) {
    if (DAT_101122fc + DAT_101122f8 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}

