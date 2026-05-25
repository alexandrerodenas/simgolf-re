/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10097db0 @ 0x10097DB0 */


undefined4 __cdecl FUN_10097db0(short param_1)

{
  uint local_c;
  
  local_c = 0;
  while( true ) {
    if (9 < local_c) {
      return 1;
    }
    if (param_1 == *(short *)(&DAT_10126674 + local_c * 2)) break;
    local_c = local_c + 1;
  }
  return 0;
}

