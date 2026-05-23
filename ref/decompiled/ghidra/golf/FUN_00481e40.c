/* Ghidra decompiled: golf.exe */
/* Function: FUN_00481e40 @ 0x00481E40 */
/* Body size: 253 addresses */


undefined4 __thiscall FUN_00481e40(int param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return 7;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_004a4ffc(*(int *)(param_1 + 0x48));
  }
  param_2 = param_2 & 0xffff;
  pvVar1 = operator_new(param_2 * 4);
  *(void **)(param_1 + 0x48) = pvVar1;
  uVar6 = param_3 & 0xffff;
  uVar7 = uVar6 * param_2;
  puVar2 = operator_new(uVar7 * 4);
  *(undefined4 **)(param_1 + 0x4c) = puVar2;
  for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar5 = 0;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    return 4;
  }
  param_3 = 0;
  piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x58) + 0x50) + *(int *)(param_1 + 0x44));
  if (param_2 != 0) {
    do {
      *(int **)(*(int *)(param_1 + 0x48) + iVar5 * 4) = piVar3;
      uVar4 = 0;
      if (uVar6 != 0xffffffff) {
        do {
          if ((uVar4 == uVar6) && (iVar5 == param_2 - 1)) break;
          do {
            piVar3 = (int *)((int)piVar3 + *piVar3);
          } while ((short)piVar3[1] != -0xe06);
          if (uVar4 != uVar6) {
            *(int **)(*(int *)(param_1 + 0x4c) + param_3 * 4) = piVar3;
            param_3 = param_3 + 1;
          }
          uVar4 = uVar4 + 1;
        } while ((int)uVar4 < (int)(uVar6 + 1));
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_2);
  }
  return 0;
}

