/* Ghidra decompiled: golf.exe */
/* Function: FUN_00482940 @ 0x00482940 */
/* Body size: 77 addresses */


undefined4 FUN_00482940(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = (undefined4 *)(**(code **)(**(int **)(param_3 + 4) + 0x20))();
  piVar1 = *(int **)(param_3 + 4);
  iVar3 = (**(code **)(*piVar1 + 0x34))();
  iVar4 = (**(code **)(*piVar1 + 0x30))();
  for (uVar5 = (uint)(iVar3 * iVar4) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar5 = iVar3 * iVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  (**(code **)(**(int **)(param_3 + 4) + 0x24))(1);
  return 0;
}

