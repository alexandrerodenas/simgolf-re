/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10015500 @ 0x10015500 */


int __fastcall FUN_10015500(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  int local_14;
  
  puVar2 = local_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 4)) {
    local_14 = *(int *)(param_1 + 4);
  }
  else {
    local_14 = *(int *)(param_1 + 0x1c);
  }
  if (*(int *)(param_1 + 0x14) < *(int *)(param_1 + 0xc)) {
    local_18 = *(int *)(param_1 + 0xc);
  }
  else {
    local_18 = *(int *)(param_1 + 0x14);
  }
  if (local_18 < local_14) {
    local_1c = local_14;
  }
  else {
    local_1c = local_18;
  }
  return local_1c;
}

