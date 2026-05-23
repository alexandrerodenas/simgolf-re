/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100058a0 @ 0x100058A0 */
/* Body size: 93 addresses */


int __cdecl FUN_100058a0(int param_1)

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
  if (param_1 == 0) {
    local_8 = 1;
  }
  else {
    local_8 = param_1;
    for (local_c = param_1; 2 < local_c; local_c = local_c + -1) {
      local_8 = local_8 * (local_c + -1);
    }
  }
  return local_8;
}

