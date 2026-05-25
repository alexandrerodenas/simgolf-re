/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30007f80 @ 0x30007F80 */


undefined4 FUN_30007f80(int param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((*(int *)(param_1 + 0x70) != -1) && (*(int *)(param_1 + 0x7c) != 0)) {
    uVar2 = *(int *)(param_1 + 0x78) - param_2;
    bVar1 = -(*(int *)(param_1 + 0x54) != 0x10);
    puVar4 = (uint *)(param_2 + *(int *)(param_1 + 0x7c));
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1)) & 0x80808080;
      puVar4 = puVar4 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(byte *)puVar4 = bVar1 & 0x80;
      puVar4 = (uint *)((int)puVar4 + 1);
    }
    FUN_30007ea0((undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return 1;
  }
  return 0;
}

