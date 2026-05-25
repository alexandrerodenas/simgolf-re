/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10068100 @ 0x10068100 */


void __fastcall FUN_10068100(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  void *local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_8 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    local_c = *(void **)(param_1 + 4);
    FUN_1007e6d0(local_c);
  }
  *(undefined4 *)(local_8 + 4) = 0;
  *(undefined4 *)(local_8 + 8) = 0;
  *(undefined4 *)(local_8 + 0xc) = 0;
  *(undefined4 *)(local_8 + 0x10) = 1;
  local_8 = 0x10068170;
  __chkesp();
  return;
}

