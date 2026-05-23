/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a510 @ 0x1000A510 */
/* Body size: 56 addresses */


void FUN_1000a510(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  undefined4 local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  thunk_FUN_10013320(param_1);
  local_8 = 0x1000a542;
  __chkesp();
  return;
}

