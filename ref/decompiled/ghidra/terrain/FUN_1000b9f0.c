/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b9f0 @ 0x1000B9F0 */
/* Body size: 60 addresses */


void FUN_1000b9f0(void)

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
  thunk_FUN_1000bb40();
  local_8 = 0x1000ba26;
  __chkesp();
  return;
}

