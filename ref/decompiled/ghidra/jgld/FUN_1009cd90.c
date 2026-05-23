/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009cd90 @ 0x1009CD90 */
/* Body size: 225 addresses */


void __cdecl FUN_1009cd90(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int *local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x3c);
  local_8 = (int *)__chkesp();
  if (local_8 != (int *)0x0) {
    (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,param_3);
    iVar1 = __chkesp();
    local_8[9] = iVar1;
    if (local_8[9] == 0) {
      (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),local_8);
      __chkesp();
    }
    else {
      local_8[10] = local_8[9] + param_3;
      local_8[0xd] = param_2;
      *local_8 = 0;
      FUN_1009cc70(local_8,param_1,local_8 + 0xe);
    }
  }
  local_8 = (int *)0x1009ce6d;
  __chkesp();
  return;
}

