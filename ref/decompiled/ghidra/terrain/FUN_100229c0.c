/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100229c0 @ 0x100229C0 */
/* Body size: 91 addresses */


uint __cdecl FUN_100229c0(int param_1,uint param_2)

{
  uint local_8;
  
  local_8 = param_2;
  do {
    if (*(int *)(local_8 + 4) == param_1) break;
    local_8 = local_8 + 0xc;
  } while (local_8 < param_2 + DAT_100668ac * 0xc);
  if ((param_2 + DAT_100668ac * 0xc <= local_8) || (*(int *)(local_8 + 4) != param_1)) {
    local_8 = 0;
  }
  return local_8;
}

