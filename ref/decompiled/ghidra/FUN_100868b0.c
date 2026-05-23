/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100868b0 @ 0x100868B0 */
/* Body size: 85 addresses */


uint __cdecl FUN_100868b0(int param_1)

{
  uint local_c;
  
  local_c = DAT_10129fdc;
  while( true ) {
    if (DAT_10129fdc + DAT_10129fd8 * 0x14 <= local_c) {
      return 0;
    }
    if ((uint)(param_1 - *(int *)(local_c + 0xc)) < 0x100000) break;
    local_c = local_c + 0x14;
  }
  return local_c;
}

