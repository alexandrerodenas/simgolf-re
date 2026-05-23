/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100154a0 @ 0x100154A0 */
/* Body size: 69 addresses */


undefined4 FUN_100154a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 == 9) || (param_1 == 0)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  return CONCAT31(0xcccccc,local_c);
}

