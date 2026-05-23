/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a6f0 @ 0x1000A6F0 */
/* Body size: 62 addresses */


void FUN_1000a6f0(void *param_1)

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
  if (param_1 != (void *)0x0) {
    thunk_FUN_10012cf0(param_1);
  }
  local_8 = 0x1000a728;
  __chkesp();
  return;
}

