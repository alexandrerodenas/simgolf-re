/* Ghidra decompiled: golf.exe */
/* Function: FUN_004810d0 @ 0x004810D0 */
/* Body size: 1668 addresses */


void __thiscall FUN_004810d0(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;
  int iStack_4;
  
  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
    if (DAT_0083ad50 != (int *)0x0) {
      (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
    }
    uVar1 = param_1[0x27];
    if (((uVar1 & 0x10) == 0) || ((uVar1 & 0x400000) != 0)) {
      local_8 = param_1[0x61];
      iVar10 = param_1[0x153];
      iVar8 = param_1[0x155];
      iVar5 = param_1[0x154];
    }
    else {
      local_8 = param_1[0x60];
      iVar10 = param_1[0x14b];
      iVar8 = param_1[0x152];
      iVar5 = param_1[0x14d];
    }
    iStack_4 = param_1[0x62];
    if (iStack_4 == -1) {
      iStack_4 = param_1[0x61];
    }
    if ((uVar1 & 0x10000000) == 0) {
      FUN_0047d850(param_2);
    }
    else {
      if ((param_1[0x47] != 0) && ((param_2 == -1 || (param_2 == 0)))) {
        piVar2 = *(int **)(param_1[0x47] + 4);
        if (piVar2 == (int *)0x0) {
          uVar6 = 0xff;
        }
        else {
          uVar6 = (**(code **)(*piVar2 + 0xc0))();
        }
        FUN_00478b30(uVar6);
        if (iVar10 != 0) {
          FUN_00473e60(param_1[0x47],0,0,0);
        }
        if (iVar5 != 0) {
          if (*(int **)(param_1[0x47] + 4) == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (**(code **)(**(int **)(param_1[0x47] + 4) + 0xd8))();
          }
          FUN_00473e60(param_1[0x47],iVar7 - *(int *)(iVar5 + 0x18),0,0);
        }
        if (((iVar8 != 0) && (iVar5 != 0)) && (iVar10 != 0)) {
          iVar7 = param_1[0x71];
          iVar9 = *(int *)(iVar10 + 0x18);
          iVar3 = param_1[0x6f];
          iVar4 = *(int *)(iVar5 + 0x18);
          if (*(int **)(param_1[0x47] + 4) == (int *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = (**(code **)(**(int **)(param_1[0x47] + 4) + 0xdc))();
          }
          FUN_00476140(iVar8,0,0,iVar9,0,((iVar7 - iVar3) - iVar4) - iVar9,uVar6);
        }
        if ((param_1[0x53] != 0) && ((*(byte *)(param_1 + 0x27) & 0x10) != 0)) {
          if ((code *)param_1[0x15b] != (code *)0x0) {
            (*(code *)param_1[0x15b])(param_1,param_1[0x53],param_1[0x47]);
          }
          (**(code **)(*param_1 + 0x164))(param_1[0x53],param_1[0x47]);
        }
        (**(code **)(*param_1 + 0x118))(param_1[0x47],0);
      }
      if ((param_1[0x4a] != 0) && ((param_2 == -1 || (param_2 == 2)))) {
        piVar2 = *(int **)(param_1[0x4a] + 4);
        if (piVar2 == (int *)0x0) {
          uVar6 = 0xff;
        }
        else {
          uVar6 = (**(code **)(*piVar2 + 0xc0))();
        }
        FUN_00478b30(uVar6);
        if (param_1[0x14c] != 0) {
          if (*(int **)(param_1[0x4a] + 4) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (**(code **)(**(int **)(param_1[0x4a] + 4) + 0xdc))();
          }
          FUN_00473e60(param_1[0x4a],0,iVar8 - *(int *)(param_1[0x14c] + 0x1c),0);
        }
        if (param_1[0x14e] != 0) {
          if (*(int **)(param_1[0x4a] + 4) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (**(code **)(**(int **)(param_1[0x4a] + 4) + 0xdc))();
          }
          iVar7 = *(int *)(param_1[0x14e] + 0x1c);
          if (*(int **)(param_1[0x4a] + 4) == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (**(code **)(**(int **)(param_1[0x4a] + 4) + 0xd8))();
          }
          FUN_00473e60(param_1[0x4a],iVar9 - *(int *)(param_1[0x14e] + 0x18),iVar8 - iVar7,0);
        }
        if (((param_1[0x151] != 0) && (param_1[0x14c] != 0)) && (param_1[0x14e] != 0)) {
          uVar6 = *(undefined4 *)(param_1[0x14c] + 0x18);
          if (*(int **)(param_1[0x4a] + 4) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (**(code **)(**(int **)(param_1[0x4a] + 4) + 0xdc))();
          }
          iVar7 = *(int *)(param_1[0x151] + 0x1c);
          if (*(int **)(param_1[0x4a] + 4) == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (**(code **)(**(int **)(param_1[0x4a] + 4) + 0xd8))();
          }
          FUN_00476140(param_1[0x151],0,0,uVar6,iVar8 - iVar7,
                       (iVar9 - *(int *)(param_1[0x14e] + 0x18)) - *(int *)(param_1[0x14c] + 0x18),
                       *(undefined4 *)(param_1[0x151] + 0x1c));
        }
        (**(code **)(*param_1 + 0x118))(param_1[0x4a],2);
      }
      if ((param_1[0x49] != 0) && ((param_2 == -1 || (param_2 == 3)))) {
        piVar2 = *(int **)(param_1[0x49] + 4);
        if (piVar2 == (int *)0x0) {
          uVar6 = 0xff;
        }
        else {
          uVar6 = (**(code **)(*piVar2 + 0xc0))();
        }
        FUN_00478b30(uVar6);
        if (iVar10 != 0) {
          FUN_00473e60(param_1[0x49],0,-local_8,0);
        }
        if (param_1[0x14c] != 0) {
          if (*(int **)(param_1[0x49] + 4) == (int *)0x0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (**(code **)(**(int **)(param_1[0x49] + 4) + 0xdc))();
          }
          FUN_00473e60(param_1[0x49],0,(iVar8 - *(int *)(param_1[0x14c] + 0x1c)) + iStack_4,0);
        }
        if (((param_1[0x14f] != 0) && (iVar10 != 0)) && (param_1[0x14c] != 0)) {
          iVar8 = param_1[0x61];
          iVar7 = *(int *)(iVar10 + 0x1c);
          if (*(int **)(param_1[0x49] + 4) == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (**(code **)(**(int **)(param_1[0x49] + 4) + 0xdc))();
          }
          FUN_00476140(param_1[0x14f],0,0,0,iVar7 - local_8,iVar8,
                       ((iVar9 - *(int *)(param_1[0x14c] + 0x1c)) - *(int *)(iVar10 + 0x1c)) +
                       iStack_4 + local_8);
        }
        (**(code **)(*param_1 + 0x118))(param_1[0x49],3);
      }
      if ((param_1[0x48] != 0) && ((param_2 == -1 || (param_2 == 1)))) {
        piVar2 = *(int **)(param_1[0x48] + 4);
        if (piVar2 == (int *)0x0) {
          uVar6 = 0xff;
        }
        else {
          uVar6 = (**(code **)(*piVar2 + 0xc0))();
        }
        FUN_00478b30(uVar6);
        if (iVar5 != 0) {
          if (*(int **)(param_1[0x48] + 4) == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (**(code **)(**(int **)(param_1[0x48] + 4) + 0xd8))();
          }
          FUN_00473e60(param_1[0x48],iVar10 - *(int *)(iVar5 + 0x18),-local_8,0);
        }
        if (param_1[0x14e] != 0) {
          if (*(int **)(param_1[0x48] + 4) == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (**(code **)(**(int **)(param_1[0x48] + 4) + 0xd8))();
          }
          iVar8 = *(int *)(param_1[0x14e] + 0x18);
          if (*(int **)(param_1[0x48] + 4) == (int *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = (**(code **)(**(int **)(param_1[0x48] + 4) + 0xdc))();
          }
          FUN_00473e60(param_1[0x48],iVar10 - iVar8,
                       (iVar7 - *(int *)(param_1[0x14e] + 0x1c)) + iStack_4,0);
        }
        if (((param_1[0x150] != 0) && (iVar5 != 0)) && (param_1[0x14e] != 0)) {
          if (*(int **)(param_1[0x48] + 4) == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (**(code **)(**(int **)(param_1[0x48] + 4) + 0xd8))();
          }
          iVar8 = *(int *)(param_1[0x150] + 0x18);
          iVar7 = *(int *)(iVar5 + 0x1c);
          if (*(int **)(param_1[0x48] + 4) == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (**(code **)(**(int **)(param_1[0x48] + 4) + 0xdc))();
          }
          FUN_00476140(param_1[0x150],0,0,iVar10 - iVar8,iVar7 - local_8,iVar8,
                       ((iVar9 - *(int *)(param_1[0x14e] + 0x1c)) - *(int *)(iVar5 + 0x1c)) +
                       iStack_4 + local_8);
        }
        (**(code **)(*param_1 + 0x118))(param_1[0x48],1);
        return;
      }
    }
  }
  return;
}

