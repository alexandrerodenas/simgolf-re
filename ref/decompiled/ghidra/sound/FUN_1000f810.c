/* Ghidra decompiled: sound.dll */
/* Function: FUN_1000f810 @ 0x1000F810 */


/* WARNING: Removing unreachable block (ram,0x1000f866) */
/* WARNING: Removing unreachable block (ram,0x1000f871) */
/* WARNING: Removing unreachable block (ram,0x1000f873) */
/* WARNING: Removing unreachable block (ram,0x1000f878) */
/* WARNING: Removing unreachable block (ram,0x1000f87a) */

undefined4 __fastcall FUN_1000f810(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 == (int *)0x0) {
    return 0x24;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1);
  if (iVar3 != 0) {
    return 0x1a;
  }
  puVar5 = &local_8;
  for (uVar4 = (uint)local_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  (**(code **)(**(int **)(param_1 + 0x60) + 0x4c))
            (*(int **)(param_1 + 0x60),&local_8,local_4,uVar2,0);
  return 0;
}

