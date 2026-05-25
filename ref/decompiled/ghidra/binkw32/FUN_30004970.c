/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30004970 @ 0x30004970 */


uint __cdecl FUN_30004970(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (*(uint *)(param_1 + 0x378) <= *(uint *)(param_1 + 0x29c)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x2e4);
  iVar2 = *(int *)(param_1 + 0x2e0);
  iVar3 = *(int *)(param_1 + 0x2dc);
  uVar6 = *(uint *)(param_1 + 0x378) - *(uint *)(param_1 + 0x29c);
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x294) - uVar6);
  puVar8 = *(undefined4 **)(param_1 + 0x288);
  *(undefined4 **)(param_1 + 0x294) = puVar4;
  if (puVar4 < puVar8) {
    uVar7 = (int)puVar8 - (int)puVar4;
    *(undefined1 **)(param_1 + 0x294) = (undefined1 *)(*(int *)(param_1 + 0x284) + (int)puVar4);
    for (uVar5 = uVar6 - uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar6 - uVar7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    puVar8 = *(undefined4 **)(param_1 + 0x294);
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar8 = 0;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  else {
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  *(uint *)(param_1 + 0x29c) = *(int *)(param_1 + 0x29c) + uVar6;
  return (uVar6 * 1000) / ((uint)(iVar1 * iVar2 * iVar3) >> 3);
}

