/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017bf0 @ 0x30017BF0 */


void __cdecl FUN_30017bf0(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_c;
  int *local_8;
  int local_4;
  
  *param_2 = 0;
  local_4 = 1;
  iVar9 = 1;
  if (8 < param_1) {
    do {
      param_1 = param_1 >> 1;
      if (0 < iVar9) {
        piVar7 = param_2 + iVar9;
        piVar4 = param_2;
        iVar10 = iVar9;
        do {
          *piVar7 = *piVar4 + param_1;
          piVar4 = piVar4 + 1;
          piVar7 = piVar7 + 1;
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
    param_1 = 0;
    if (0 < local_4) {
      local_c = 0;
      local_8 = param_2;
      do {
        iVar10 = 0;
        if (0 < local_c) {
          piVar7 = param_2;
          do {
            iVar5 = local_c + *piVar7;
            iVar8 = *local_8 + iVar10 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            piVar7 = piVar7 + 1;
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
            iVar5 = iVar5 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
            iVar5 = iVar5 + local_4 * -2;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            iVar8 = iVar8 + iVar9;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
            iVar5 = iVar5 + local_4 * 4;
            uVar1 = *(undefined4 *)(param_3 + iVar8 * 4);
            iVar10 = iVar10 + 1;
            fVar2 = *(float *)(param_3 + 4 + iVar8 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar5 * 4);
            *(undefined4 *)(param_3 + iVar8 * 4) = *(undefined4 *)(param_3 + iVar5 * 4);
            *(float *)(param_3 + 4 + iVar8 * 4) = -fVar3;
            *(undefined4 *)(param_3 + iVar5 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar2;
          } while (iVar10 < param_1);
        }
        iVar8 = *local_8 + local_c;
        iVar10 = iVar8 + iVar9;
        *(float *)(param_3 + 4 + iVar8 * 4) = -*(float *)(param_3 + 4 + iVar8 * 4);
        uVar1 = *(undefined4 *)(param_3 + iVar10 * 4);
        iVar8 = iVar10 + iVar9;
        fVar2 = *(float *)(param_3 + 4 + iVar10 * 4);
        local_8 = local_8 + 1;
        local_c = local_c + 2;
        fVar3 = *(float *)(param_3 + 4 + iVar8 * 4);
        *(undefined4 *)(param_3 + iVar10 * 4) = *(undefined4 *)(param_3 + iVar8 * 4);
        *(float *)(param_3 + 4 + iVar10 * 4) = -fVar3;
        *(undefined4 *)(param_3 + iVar8 * 4) = uVar1;
        *(float *)(param_3 + 4 + iVar8 * 4) = -fVar2;
        *(float *)(param_3 + 4 + (iVar8 + iVar9) * 4) =
             -*(float *)(param_3 + 4 + (iVar8 + iVar9) * 4);
        param_1 = param_1 + 1;
      } while (param_1 < local_4);
      return;
    }
  }
  else {
    *(float *)(param_3 + 4) = -*(float *)(param_3 + 4);
    param_1 = 1;
    *(float *)(param_3 + 4 + local_4 * 8) = -*(float *)(param_3 + 4 + local_4 * 8);
    if (1 < local_4) {
      iVar10 = 2;
      local_8 = param_2;
      do {
        local_8 = local_8 + 1;
        iVar8 = 0;
        piVar7 = param_2;
        if (0 < iVar10) {
          do {
            iVar5 = *local_8 + iVar8 * 2;
            uVar1 = *(undefined4 *)(param_3 + iVar5 * 4);
            iVar6 = iVar10 + *piVar7;
            fVar2 = *(float *)(param_3 + 4 + iVar5 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar5 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar3;
            iVar5 = iVar5 + iVar9;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar6 * 4) = -fVar2;
            iVar6 = iVar6 + iVar9;
            uVar1 = *(undefined4 *)(param_3 + iVar5 * 4);
            iVar8 = iVar8 + 1;
            fVar2 = *(float *)(param_3 + 4 + iVar5 * 4);
            fVar3 = *(float *)(param_3 + 4 + iVar6 * 4);
            *(undefined4 *)(param_3 + iVar5 * 4) = *(undefined4 *)(param_3 + iVar6 * 4);
            *(float *)(param_3 + 4 + iVar5 * 4) = -fVar3;
            *(undefined4 *)(param_3 + iVar6 * 4) = uVar1;
            *(float *)(param_3 + 4 + iVar6 * 4) = -fVar2;
            piVar7 = piVar7 + 1;
          } while (iVar8 < param_1);
        }
        iVar8 = *local_8 + iVar10;
        param_1 = param_1 + 1;
        iVar10 = iVar10 + 2;
        *(float *)(param_3 + 4 + iVar8 * 4) = -*(float *)(param_3 + 4 + iVar8 * 4);
        iVar8 = iVar9 + 1 + iVar8;
        *(float *)(param_3 + iVar8 * 4) = -*(float *)(param_3 + iVar8 * 4);
      } while (param_1 < local_4);
    }
  }
  return;
}

