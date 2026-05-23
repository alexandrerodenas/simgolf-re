/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100a0130 @ 0x100A0130 */
/* Body size: 516 addresses */


void __cdecl FUN_100a0130(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_54 [16];
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  puVar3 = local_54;
  for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_c = *(undefined4 **)(param_2 + 0xc);
  local_10 = *(undefined4 **)(param_1 + 0x2c);
  if (*(undefined4 **)(param_1 + 0x30) < local_10) {
    local_14 = *(int *)(param_1 + 0x28);
  }
  else {
    local_14 = *(int *)(param_1 + 0x30);
  }
  local_8 = local_14 - (int)local_10;
  if (*(uint *)(param_2 + 0x10) < local_8) {
    local_8 = *(uint *)(param_2 + 0x10);
  }
  *(uint *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - local_8;
  *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + local_8;
  if (*(int *)(param_1 + 0x34) != 0) {
    (**(code **)(param_1 + 0x34))(*(undefined4 *)(param_1 + 0x38),local_10,local_8);
    uVar1 = __chkesp();
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x38);
  }
  FUN_1007f3a0(local_c,local_10,local_8);
  local_c = (undefined4 *)((int)local_c + local_8);
  local_10 = (undefined4 *)((int)local_10 + local_8);
  if (local_10 == (undefined4 *)*(int *)(param_1 + 0x28)) {
    local_10 = *(undefined4 **)(param_1 + 0x24);
    if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x28)) {
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x24);
    }
    local_8 = *(int *)(param_1 + 0x30) - (int)local_10;
    if (*(uint *)(param_2 + 0x10) < local_8) {
      local_8 = *(uint *)(param_2 + 0x10);
    }
    *(uint *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) - local_8;
    *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + local_8;
    if (*(int *)(param_1 + 0x34) != 0) {
      (**(code **)(param_1 + 0x34))(*(undefined4 *)(param_1 + 0x38),local_10,local_8);
      uVar1 = __chkesp();
      *(undefined4 *)(param_1 + 0x38) = uVar1;
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x38);
    }
    FUN_1007f3a0(local_c,local_10,local_8);
    local_c = (undefined4 *)((int)local_c + local_8);
    local_10 = (undefined4 *)((int)local_10 + local_8);
  }
  *(undefined4 **)(param_2 + 0xc) = local_c;
  *(undefined4 **)(param_1 + 0x2c) = local_10;
  local_8 = 0x100a0330;
  __chkesp();
  return;
}

