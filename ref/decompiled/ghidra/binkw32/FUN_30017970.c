/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017970 @ 0x30017970 */


void __cdecl FUN_30017970(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *local_c;
  int *local_8;
  int local_4;
  
  *param_2 = 0;
  local_4 = 1;
  iVar9 = 1;
  if (8 < param_1) {
    do {
      param_1 = param_1 >> 1;
      if (0 < iVar9) {
        piVar5 = param_2 + iVar9;
        piVar4 = param_2;
        iVar10 = iVar9;
        do {
          iVar8 = *piVar4;
          piVar4 = piVar4 + 1;
          *piVar5 = param_1 + iVar8;
          piVar5 = piVar5 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      local_4 = iVar9 * 2;
      iVar10 = iVar9 * 0x10;
      iVar9 = local_4;
    } while (iVar10 < param_1);
  }
  iVar9 = local_4 * 2;
  if (local_4 * 8 - param_1 == 0) {
    local_8 = (int *)0x0;
    if (0 < local_4) {
      param_1 = 0;
      local_c = param_2;
      do {
        iVar10 = 0;
        if (0 < param_1) {
          piVar5 = param_2;
          do {
            iVar8 = *local_c + iVar10 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            iVar6 = param_1 + *piVar5;
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            piVar5 = piVar5 + 1;
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
            iVar6 = iVar6 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
            iVar6 = iVar6 + local_4 * -2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
            iVar6 = iVar6 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            iVar10 = iVar10 + 1;
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar2;
          } while (iVar10 < (int)local_8);
        }
        iVar8 = *local_c + param_1 + iVar9;
        uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
        iVar10 = iVar8 + iVar9;
        uVar2 = *(undefined4 *)(param_3 + 4 + iVar8 * 4);
        local_c = local_c + 1;
        param_1 = param_1 + 2;
        uVar3 = *(undefined4 *)(param_3 + 4 + iVar10 * 4);
        *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar10 * 4);
        *(undefined4 *)(param_3 + 4 + iVar8 * 4) = uVar3;
        local_8 = (int *)((int)local_8 + 1);
        *(undefined4 *)(param_3 + iVar10 * 4) = uVar1;
        *(undefined4 *)(param_3 + 4 + iVar10 * 4) = uVar2;
      } while ((int)local_8 < local_4);
      return;
    }
  }
  else {
    iVar10 = 1;
    if (1 < local_4) {
      param_1 = 2;
      local_8 = param_2;
      do {
        local_8 = local_8 + 1;
        iVar8 = 0;
        piVar5 = param_2;
        if (0 < param_1) {
          do {
            iVar7 = param_1 + *piVar5;
            iVar6 = *local_8 + iVar8 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar6 * 4);
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar7 * 4);
            *(undefined4 *)(param_3 + iVar6 * 4) = *(undefined4 *)(param_3 + iVar7 * 4);
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar3;
            iVar6 = iVar6 + iVar9;
            *(undefined4 *)(param_3 + iVar7 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar7 * 4) = uVar2;
            iVar7 = iVar7 + iVar9;
            uVar1 = *(undefined4 *)(param_3 + iVar6 * 4);
            iVar8 = iVar8 + 1;
            uVar2 = *(undefined4 *)(param_3 + 4 + iVar6 * 4);
            uVar3 = *(undefined4 *)(param_3 + 4 + iVar7 * 4);
            *(undefined4 *)(param_3 + iVar6 * 4) = *(undefined4 *)(param_3 + iVar7 * 4);
            *(undefined4 *)(param_3 + 4 + iVar6 * 4) = uVar3;
            *(undefined4 *)(param_3 + iVar7 * 4) = uVar1;
            *(undefined4 *)(param_3 + 4 + iVar7 * 4) = uVar2;
            piVar5 = piVar5 + 1;
          } while (iVar8 < iVar10);
        }
        iVar10 = iVar10 + 1;
        param_1 = param_1 + 2;
      } while (iVar10 < local_4);
    }
  }
  return;
}

