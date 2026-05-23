/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10001de0 @ 0x10001DE0 */
/* Body size: 70 addresses */


void FUN_10001de0(void *param_1,int param_2)

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
    thunk_FUN_10001e40(param_1,param_2);
  }
  local_8 = 0x10001e20;
  __chkesp();
  return;
}

