/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000a3e0 @ 0x1000A3E0 */
/* Body size: 84 addresses */


void FUN_1000a3e0(void *param_1,int param_2,int param_3)

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
  if (param_2 == 0) {
    thunk_FUN_10013400(param_1,'\0',param_3);
  }
  else {
    thunk_FUN_10013400(param_1,'\x01',param_3);
  }
  local_8 = 0x1000a42e;
  __chkesp();
  return;
}

