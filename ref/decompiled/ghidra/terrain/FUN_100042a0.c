/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100042a0 @ 0x100042A0 */
/* Body size: 38 addresses */


void FUN_100042a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [17];
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return;
}

