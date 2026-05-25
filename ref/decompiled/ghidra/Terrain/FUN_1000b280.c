/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000b280 @ 0x1000B280 */


void __fastcall FUN_1000b280(undefined4 param_1)

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
  local_8 = param_1;
  thunk_FUN_1000b6e0(param_1);
  local_8 = 0x1000b2b5;
  __chkesp();
  return;
}

