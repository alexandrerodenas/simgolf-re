/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10006df0 @ 0x10006DF0 */
/* Body size: 262 addresses */


void __fastcall FUN_10006df0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_68 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar2 = local_68;
  for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    local_10 = *(int *)(*(int *)(param_1 + 0x10) + 8);
    local_c = *(undefined4 **)(local_10 + 8);
    local_8 = param_1;
    while (local_c != *(undefined4 **)(local_8 + 0x10)) {
      *(undefined4 *)(local_10 + 8) = local_c[2];
      local_18 = local_c;
      local_14 = local_c;
      if (local_c == (undefined4 *)0x0) {
        local_24 = 0;
      }
      else {
        (**(code **)*local_c)(1);
        local_24 = __chkesp();
      }
      local_c = *(undefined4 **)(local_10 + 8);
    }
    local_20 = *(undefined4 **)(local_8 + 0x10);
    local_1c = local_20;
    if (local_20 == (undefined4 *)0x0) {
      local_28 = 0;
    }
    else {
      (**(code **)*local_20)(1);
      local_28 = __chkesp();
    }
    *(undefined4 *)(local_8 + 0x18) = 0;
    *(undefined4 *)(local_8 + 0xc) = 0;
    *(undefined4 *)(local_8 + 0x10) = 0;
    *(undefined4 *)(local_8 + 0x14) = 0;
  }
  local_8 = 0x10006ef2;
  __chkesp();
  return;
}

