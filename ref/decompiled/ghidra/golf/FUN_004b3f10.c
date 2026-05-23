/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b3f10 @ 0x004B3F10 */
/* Body size: 292 addresses */


void FUN_004b3f10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  
  iVar4 = param_1;
  iVar2 = *(int *)(param_1 + 0xe4);
  iVar9 = *(int *)(param_1 + 0x14c);
  iVar5 = (*(code *)**(undefined4 **)(param_1 + 4))
                    (param_1,1,*(int *)(param_1 + 0x34) * iVar2 * 0x14);
  iStack_10 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    piVar7 = (int *)(*(int *)(param_1 + 0x3c) + 8);
    piStack_c = (int *)(iVar9 + 8);
    param_1 = iVar5;
    do {
      puVar6 = (undefined4 *)
               (**(code **)(*(int *)(iVar4 + 4) + 8))
                         (iVar4,1,(piVar7[5] * *(int *)(iVar4 + 0xe0) * 8) / *piVar7,iVar2 * 3);
      puVar1 = (undefined4 *)(param_1 + iVar2 * 4);
      puVar11 = puVar6;
      puVar10 = puVar1;
      for (uVar8 = (uint)(iVar2 * 0xc) >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(undefined1 *)puVar10 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar10 = (undefined4 *)((int)puVar10 + 1);
      }
      if (0 < iVar2) {
        puVar10 = (undefined4 *)(iVar2 * 0x10 + param_1);
        puVar11 = puVar6 + iVar2 * 2;
        iVar9 = param_1 - (int)puVar6;
        iStack_14 = iVar2;
        do {
          uVar3 = *puVar11;
          puVar11 = puVar11 + 1;
          *(undefined4 *)(iVar9 + (int)puVar6) = uVar3;
          *puVar10 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar10 = puVar10 + 1;
          iStack_14 = iStack_14 + -1;
        } while (iStack_14 != 0);
      }
      *piStack_c = (int)puVar1;
      piStack_c = piStack_c + 1;
      param_1 = param_1 + iVar2 * 0x14;
      iStack_10 = iStack_10 + 1;
      piVar7 = piVar7 + 0x15;
    } while (iStack_10 < *(int *)(iVar4 + 0x34));
  }
  return;
}

