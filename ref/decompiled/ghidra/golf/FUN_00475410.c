/* Ghidra decompiled: golf.exe */
/* Function: FUN_00475410 @ 0x00475410 */


void FUN_00475410(int param_1,int param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  int local_10;
  int local_c;
  
  iVar9 = 1;
  if (*(short *)(param_2 + 0xe) == 0x18) {
    iVar9 = 3;
  }
  pvVar2 = operator_new(iVar9 * *(int *)(param_2 + 4));
  uVar7 = *(uint *)(param_2 + 8);
  uVar4 = uVar7 & 0x80000001;
  bVar11 = uVar4 == 0;
  if ((int)uVar4 < 0) {
    bVar11 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
  }
  uVar4 = (int)uVar7 >> 0x1f;
  if (bVar11) {
    iVar5 = (uVar7 ^ uVar4) - uVar4;
    local_10 = iVar5 / 2;
    local_c = local_10;
  }
  else {
    iVar5 = (uVar7 ^ uVar4) - uVar4;
    local_c = iVar5 / 2;
    local_10 = local_c + 1;
  }
  if (local_10 < iVar5) {
    do {
      local_c = local_c + -1;
      iVar5 = *(int *)(param_2 + 4);
      iVar3 = 0;
      iVar8 = iVar5 * local_10 * iVar9;
      iVar6 = iVar5 * local_c * iVar9;
      if (0 < iVar5 * iVar9) {
        puVar1 = (undefined1 *)(iVar6 + param_1);
        iVar6 = iVar8 - iVar6;
        puVar10 = puVar1;
        do {
          *(undefined1 *)(iVar3 + (int)pvVar2) = puVar10[iVar6];
          puVar10[iVar6] = *puVar10;
          *puVar10 = *(undefined1 *)(iVar3 + (int)pvVar2);
          if (iVar9 == 3) {
            iVar5 = param_1 + iVar8;
            *(undefined1 *)(iVar3 + 1 + (int)pvVar2) = *(undefined1 *)(iVar5 + 1 + iVar3);
            *(undefined1 *)(iVar3 + 2 + (int)pvVar2) = *(undefined1 *)(iVar5 + 2 + iVar3);
            *(undefined1 *)(iVar5 + 1 + iVar3) = puVar1[iVar3 + 1];
            *(undefined1 *)(iVar5 + 2 + iVar3) = puVar1[iVar3 + 2];
            puVar1[iVar3 + 1] = *(undefined1 *)(iVar3 + 1 + (int)pvVar2);
            puVar1[iVar3 + 2] = *(undefined1 *)(iVar3 + 2 + (int)pvVar2);
          }
          iVar3 = iVar3 + iVar9;
          puVar10 = puVar10 + iVar9;
        } while (iVar3 < iVar9 * *(int *)(param_2 + 4));
      }
      local_10 = local_10 + 1;
      uVar7 = (int)*(uint *)(param_2 + 8) >> 0x1f;
    } while (local_10 < (int)((*(uint *)(param_2 + 8) ^ uVar7) - uVar7));
  }
  FUN_004a4ffc(pvVar2);
  return;
}

