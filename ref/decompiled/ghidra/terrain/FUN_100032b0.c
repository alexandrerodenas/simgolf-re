/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100032b0 @ 0x100032B0 */
/* Body size: 51 addresses */


void FUN_100032b0(void)

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
  thunk_FUN_10013fc0();
  local_8 = 0x100032df;
  __chkesp();
  return;
}

