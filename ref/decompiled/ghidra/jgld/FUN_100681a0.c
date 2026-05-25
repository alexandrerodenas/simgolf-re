/* Ghidra decompiled: jgld.dll */
/* Function: FUN_100681a0 @ 0x100681A0 */


void __fastcall FUN_100681a0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_54 [16];
  void *local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar2 = local_54;
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 0xc) < *(int *)(param_1 + 8)) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 0x14);
    for (iVar1 = 5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
        iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  else {
    local_8 = param_1;
    local_10 = operator_new((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x10)) * 0x14);
    *(int *)(local_8 + 8) = *(int *)(local_8 + 8) + *(int *)(local_8 + 0x10);
    local_c = local_10;
    if (*(int *)(local_8 + 4) != 0) {
      FUN_1007f3a0(local_10,*(undefined4 **)(local_8 + 4),*(int *)(local_8 + 0xc) * 0x14);
    }
    puVar2 = local_c + *(int *)(local_8 + 0xc) * 5;
    for (iVar1 = 5; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
        iVar1 = iVar1 + -1) {
      *puVar2 = *(undefined4 *)register0x00000010;
      puVar2 = puVar2 + 1;
    }
    *(int *)(local_8 + 0xc) = *(int *)(local_8 + 0xc) + 1;
    local_14 = *(void **)(local_8 + 4);
    FUN_1007e6d0(local_14);
    *(undefined4 **)(local_8 + 4) = local_c;
  }
  local_8 = 0x100682ae;
  __chkesp();
  return;
}

