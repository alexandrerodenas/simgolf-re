/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009be70 @ 0x1009BE70 */
/* Body size: 154 addresses */


void __cdecl FUN_1009be70(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_48 [16];
  int local_8;
  
  puVar2 = local_48;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) != 0) {
      FUN_1009e290(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,&local_8);
    }
    (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    __chkesp();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  local_8 = 0x1009bf06;
  __chkesp();
  return;
}

