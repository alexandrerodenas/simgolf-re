/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1002fbd0 @ 0x1002FBD0 */
/* Body size: 79 addresses */


undefined4 __cdecl FUN_1002fbd0(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_10067234 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}

