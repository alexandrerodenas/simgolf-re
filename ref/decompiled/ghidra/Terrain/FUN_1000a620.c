/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a620 @ 0x1000A620 */


void FUN_1000a620(void *param_1,int param_2)

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
    thunk_FUN_1000ccc0(param_1,param_2);
  }
  local_8 = 0x1000a65c;
  __chkesp();
  return;
}

