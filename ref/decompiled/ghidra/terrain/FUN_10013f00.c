/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10013f00 @ 0x10013F00 */
/* Body size: 144 addresses */


int FUN_10013f00(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  if (param_1 == 1) {
    local_c = 4;
  }
  else if (param_1 == 2) {
    local_c = 0x28;
  }
  if (param_2 == 1) {
    local_c = local_c + 1;
  }
  else if (param_2 == 2) {
    local_c = local_c + 10;
  }
  if (param_3 == 1) {
    local_c = local_c + 2;
  }
  else if (param_3 == 2) {
    local_c = local_c + 0x14;
  }
  return local_c;
}

