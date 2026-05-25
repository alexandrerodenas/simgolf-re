/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009f250 @ 0x1009F250 */


void __cdecl FUN_1009f250(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_50 [16];
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_50;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = 0;
  local_c = param_1;
  while (local_c != 0) {
    local_10 = *(int *)(local_c + -4);
    *(int *)(local_c + -4) = local_8;
    local_8 = local_c;
    local_c = local_10;
  }
  while (local_8 != 0) {
    iVar1 = local_8 + -8;
    local_c = *(int *)(local_8 + -4);
    local_8 = iVar1;
    (**(code **)(param_2 + 0x24))(*(undefined4 *)(param_2 + 0x28),iVar1);
    __chkesp();
    local_8 = local_c;
  }
  local_8 = 0x1009f2e7;
  __chkesp();
  return;
}

