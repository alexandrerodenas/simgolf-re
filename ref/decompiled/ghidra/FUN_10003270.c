/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10003270 @ 0x10003270 */
/* Body size: 51 addresses */


void FUN_10003270(void)

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
  thunk_FUN_10013ff0();
  local_8 = 0x1000329f;
  __chkesp();
  return;
}

