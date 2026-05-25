/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10013fc0 @ 0x10013FC0 */


undefined * FUN_10013fc0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return &DAT_100b28c8;
}

