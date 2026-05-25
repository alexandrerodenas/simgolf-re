/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001e80 @ 0x10001E80 */


void FUN_10001e80(void *param_1,int param_2)

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
  thunk_FUN_10001ed0(param_1,param_2);
  local_8 = 0x10001eb6;
  __chkesp();
  return;
}

