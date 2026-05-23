/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000bb40 @ 0x1000BB40 */
/* Body size: 31 addresses */


void FUN_1000bb40(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}

