/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100155b0 @ 0x100155B0 */


undefined1 __fastcall FUN_100155b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  undefined1 local_c;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((((*(int *)(param_1 + 0x24) == 2) || (*(int *)(param_1 + 0x24) == 7)) ||
      (*(int *)(param_1 + 0x24) == 1)) ||
     (((*(int *)(param_1 + 0x24) == 0 || (*(int *)(param_1 + 0x24) == 9)) ||
      ((*(int *)(param_1 + 0x24) == 8 || (*(int *)(param_1 + 0x24) == 3)))))) {
    local_c = 1;
  }
  else {
    local_c = 0;
  }
  return local_c;
}

