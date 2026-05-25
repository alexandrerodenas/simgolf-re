/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10018d20 @ 0x10018D20 */


int __cdecl FUN_10018d20(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint local_18;
  uint local_14;
  int local_c;
  uint local_8;
  
  while( true ) {
    if (DAT_10066268 < 2) {
      local_14 = *(ushort *)(PTR_DAT_1006605c + (uint)*param_1 * 2) & 8;
    }
    else {
      local_14 = FUN_1001e6d0((uint)*param_1,8);
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
    if (DAT_10066268 < 2) {
      local_18 = *(ushort *)(PTR_DAT_1006605c + local_8 * 2) & 4;
    }
    else {
      local_18 = FUN_1001e6d0(local_8,4);
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

