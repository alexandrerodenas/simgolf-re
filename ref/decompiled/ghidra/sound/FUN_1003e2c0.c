/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003e2c0 @ 0x1003E2C0 */


uint __cdecl FUN_1003e2c0(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [17];
  uint local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = *param_1;
  local_10 = *param_2;
  if ((int)local_10 < 1) {
    if ((local_10 == 0) || (local_c == 1)) {
      return 1;
    }
    if (local_c != -1) {
      if (local_c == 0) {
        return 1 / 0;
      }
      return 0;
    }
    local_10 = -local_10;
  }
  local_14 = local_10;
  local_8 = 1;
  while( true ) {
    if ((local_14 & 1) != 0) {
      local_8 = local_8 * local_c;
    }
    local_14 = local_14 >> 1;
    if (local_14 == 0) break;
    local_c = local_c * local_c;
  }
  return local_8;
}

