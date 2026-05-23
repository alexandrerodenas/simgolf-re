/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001f10 @ 0x10001F10 */
/* Body size: 56 addresses */


void FUN_10001f10(int param_1)

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
  thunk_FUN_10001f60(param_1);
  local_8 = 0x10001f42;
  __chkesp();
  return;
}

