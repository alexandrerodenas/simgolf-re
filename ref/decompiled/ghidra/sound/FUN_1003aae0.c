/* Ghidra decompiled: sound.dll */
/* Function: FUN_1003aae0 @ 0x1003AAE0 */


void __cdecl FUN_1003aae0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  FUN_1003aa50();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  for (local_8 = 0; local_8 < 0x21c; local_8 = local_8 + 1) {
    param_1[local_8 + 4] = 0;
    param_1[local_8 + 0x220] = 0;
  }
  for (local_8 = 0; local_8 < 0x2b8; local_8 = local_8 + 1) {
    param_1[local_8 + 0x43c] = 0;
  }
  for (local_8 = 0; local_8 < 0x138; local_8 = local_8 + 1) {
    param_1[local_8 + 0x6f4] = 0;
  }
  param_1[0x82c] = 0;
  param_1[0x837] = 1;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x838] = 0;
  }
  param_1[0x83f] = 0x133;
  param_1[0x840] = 0x1ce;
  param_1[0x845] = 0x133;
  param_1[0x846] = 0x1ce;
  for (local_8 = 0; local_8 < 8; local_8 = local_8 + 1) {
    param_1[local_8 + 0x847] = 0;
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    param_1[local_8 + 0x84f] = 0;
  }
  for (local_8 = 0; local_8 < 0x1e; local_8 = local_8 + 1) {
    param_1[local_8 + 0x852] = 0;
  }
  param_1[0x870] = 0;
  param_1[0x871] = 0;
  param_1[0x872] = 0x3f800000;
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    param_1[local_8 + 0x874] = 0;
  }
  param_1[0x884] = 0;
  param_1[0x885] = 1;
  param_1[0x886] = 9;
  param_1[0x888] = 0;
  param_1[0x889] = 0x41a00000;
  param_1[0x88b] = 0;
  for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
    param_1[local_8 + 0x88c] = 0;
  }
  param_1[0x892] = 3000;
  param_1[0x894] = 3000;
  param_1[0x895] = 0xbb;
  param_1[0x896] = 0xbb;
  param_1[0x897] = 0xbb;
  param_1[0x893] = 0x5d;
  param_1[0x898] = 0x5d;
  param_1[0x899] = 0x5d;
  local_c = (int)param_1[0x894] / (int)param_1[0x895] << 6;
  param_1[0x88a] = (float)local_c;
  for (local_8 = 0; local_8 < 0x3c; local_8 = local_8 + 1) {
    param_1[local_8 + 0x89a] = 0;
  }
  for (local_8 = 0; local_8 < 0x78; local_8 = local_8 + 1) {
    param_1[local_8 + 0x8d6] = 0;
  }
  param_1[0x94e] = 0;
  param_1[0x94f] = 0;
  param_1[0x950] = 0;
  local_8 = 0x1003ae98;
  FUN_100431ce();
  return;
}

