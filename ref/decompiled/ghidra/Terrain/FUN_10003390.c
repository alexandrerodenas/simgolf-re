/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10003390 @ 0x10003390 */


void FUN_10003390(int param_1)

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
  thunk_FUN_10015340(param_1);
  local_8 = 0x100033c5;
  __chkesp();
  return;
}

