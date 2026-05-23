/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009bdd0 @ 0x1009BDD0 */
/* Body size: 145 addresses */


void __cdecl FUN_1009bdd0(int param_1)

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
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    **(uint **)(param_1 + 0x1c) = -(uint)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != 0) & 7;
    FUN_1009cc70(*(int **)(*(int *)(param_1 + 0x1c) + 0x14),param_1,&local_8);
  }
  local_8 = 0x1009be5d;
  __chkesp();
  return;
}

