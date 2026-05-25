/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10007100 @ 0x10007100 */


void __fastcall FUN_10007100(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_64 [16];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar2 = local_64;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    local_8 = param_1;
    if (*(int *)(param_1 + 0x10) == *(int *)(*(int *)(param_1 + 0x10) + 4)) {
      local_14 = *(undefined4 **)(param_1 + 0x10);
      local_10 = local_14;
      if (local_14 == (undefined4 *)0x0) {
        local_20 = 0;
      }
      else {
        (**(code **)*local_14)(1);
        local_20 = __chkesp();
      }
      *(undefined4 *)(local_8 + 0x10) = 0;
      *(undefined4 *)(local_8 + 0x14) = 0;
      *(undefined4 *)(local_8 + 0xc) = 0;
    }
    else {
      if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*(int *)(param_1 + 0x10) + 4);
      }
      local_1c = *(undefined4 **)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 4);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc);
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(*(int *)(param_1 + 0x14) + 0x10);
      *(undefined4 *)(local_1c[2] + 4) = local_1c[1];
      *(undefined4 *)(local_1c[1] + 8) = local_1c[2];
      local_18 = local_1c;
      local_c = local_1c;
      if (local_1c == (undefined4 *)0x0) {
        local_24 = 0;
      }
      else {
        (**(code **)*local_1c)(1);
        local_24 = __chkesp();
      }
      *(int *)(local_8 + 0xc) = *(int *)(local_8 + 0xc) + -1;
    }
  }
  local_8 = 0x10007255;
  __chkesp();
  return;
}

