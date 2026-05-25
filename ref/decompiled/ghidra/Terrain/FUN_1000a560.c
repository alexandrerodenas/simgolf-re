/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a560 @ 0x1000A560 */


void FUN_1000a560(void *param_1,int param_2,undefined4 param_3,undefined1 param_4)

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
  thunk_FUN_10015400(param_1,param_2,param_3,param_4);
  local_8 = 0x1000a59e;
  __chkesp();
  return;
}

