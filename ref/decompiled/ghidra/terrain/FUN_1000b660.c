/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b660 @ 0x1000B660 */
/* Body size: 37 addresses */


int __cdecl FUN_1000b660(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [16];
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  return param_1 + 8;
}

