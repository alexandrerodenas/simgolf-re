/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009a320 @ 0x1009A320 */


int __cdecl FUN_1009a320(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_10125998 < 2) {
      local_14 = *(ushort *)(PTR_DAT_1012578c + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_10089800((uint)*param_1,8);
    }
    if (local_14 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  if ((uVar2 == 0x2d) || (pbVar1 = param_1 + 1, local_8 = uVar2, uVar2 == 0x2b)) {
    local_8 = (uint)param_1[1];
    pbVar1 = param_1 + 2;
  }
  param_1 = pbVar1;
  local_c = 0;
  while( true ) {
    if (DAT_10125998 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1012578c + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_10089800(local_8,4);
    }
    if (local_18 == 0) break;
    local_c = local_c * 10 + -0x30 + local_8;
    local_8 = (uint)*param_1;
    param_1 = param_1 + 1;
  }
  if (uVar2 == 0x2d) {
    local_c = -local_c;
  }
  return local_c;
}

