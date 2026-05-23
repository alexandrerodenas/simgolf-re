/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100700f0 @ 0x100700F0 */
/* Body size: 360 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_100700f0(int param_1,int param_2,double param_3,double param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 local_58 [16];
  float local_18;
  float local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  uint local_8;
  
  puVar3 = local_58;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_10 = param_2;
  if (param_2 == 1) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x600000;
  }
  else if (param_2 == 2) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x400000;
  }
  else if (param_2 == 3) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x200000;
  }
  if (*(char *)(param_1 + 0x126) == '\x03') {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x1000;
  }
  local_14 = (float)param_3;
  lVar4 = __ftol();
  local_8 = CONCAT31(local_8._1_3_,(char)lVar4);
  local_18 = (float)param_4;
  lVar4 = __ftol();
  bVar1 = (byte)lVar4;
  if ((param_3 < _DAT_1011d040) || (param_4 < _DAT_1011d040)) {
    local_8 = 0x36;
    local_c = 0xb7;
  }
  else {
    local_c = bVar1;
    if (0xff < (local_8 & 0xff) + (uint)bVar1) {
      FUN_10079040(param_1,"ignoring out of range rgb_to_gray coefficients");
      local_8 = 0x36;
      local_c = 0xb7;
    }
  }
  *(char *)(param_1 + 0x215) = (char)local_8;
  *(byte *)(param_1 + 0x216) = local_c;
  *(byte *)(param_1 + 0x217) = (-1 - (char)local_8) - local_c;
  local_8 = 0x10070254;
  __chkesp();
  return;
}

