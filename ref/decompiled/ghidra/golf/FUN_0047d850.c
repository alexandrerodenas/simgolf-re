/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047d850 @ 0x0047D850 */


void __thiscall FUN_0047d850(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int local_44;
  int local_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int local_18;
  int local_14;
  undefined1 local_10 [16];
  
  if (((*(byte *)(param_1 + 0x28) & 2) != 0) && (uVar6 = param_1[0x27], (uVar6 & 0x11) != 0)) {
    if (((uVar6 & 0x10) == 0) || ((uVar6 & 0x400000) != 0)) {
      local_44 = param_1[0x61];
    }
    else {
      local_44 = param_1[0x60];
    }
    local_38 = param_1[0x62];
    if (local_38 == -1) {
      local_38 = param_1[0x61];
    }
    iVar4 = param_1[0x71] - param_1[0x6f];
    iVar7 = param_1[0x72] - param_1[0x70];
    iVar11 = local_44 + -1;
    iVar5 = param_1[0x61] + -1;
    local_18 = (param_1[0x6d] - param_1[0x6b]) + 2 + iVar5;
    local_14 = ((iVar7 - local_38) - local_44) + 2 + iVar11;
    if ((param_1[0x47] != 0) && ((param_2 == -1 || (param_2 == 0)))) {
      piVar2 = *(int **)(param_1[0x47] + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xd0))(local_10);
      }
      if (param_1[0x5a] == 0) {
        FUN_00478b30(param_1[0x5b]);
      }
      else {
        FUN_00475fb0(param_1[0x5a],0,0,0,0,iVar4,iVar7);
      }
      iStack_30 = 0;
      iVar8 = 0;
      iStack_2c = 0;
      iStack_28 = iVar4;
      iStack_24 = iVar7;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[99],param_1[100]);
          iStack_30 = iStack_30 + 1;
          iStack_28 = iStack_28 + -1;
          iStack_2c = iStack_2c + 1;
          iStack_24 = iStack_24 + -1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[0x65]);
      }
      iVar8 = 0;
      iStack_28 = local_18;
      iStack_24 = local_14;
      iStack_30 = iVar5;
      iStack_2c = iVar11;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[100],param_1[99]);
          iStack_30 = iStack_30 + -1;
          iStack_28 = iStack_28 + 1;
          iStack_2c = iStack_2c + -1;
          iStack_24 = iStack_24 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[0x65]);
      }
      if (param_1[0x53] != 0) {
        if (*(int **)(param_1[0x47] + 4) != (int *)0x0) {
          (**(code **)(**(int **)(param_1[0x47] + 4) + 0xd0))(&iStack_30);
        }
        iVar8 = param_1[0x65];
        iStack_30 = iStack_30 + iVar8;
        iStack_28 = iStack_28 + -iVar8;
        iStack_2c = iStack_2c + iVar8;
        iStack_24 = iStack_24 + -iVar8;
        FUN_00476310(param_1[0x5c],param_1[0x5d],param_1[0x5e],param_1[0x5f]);
        FUN_004762d0(param_1[0x59],0,0,0);
        FUN_00475b00(&iStack_30);
        iStack_30 = iStack_30 + param_1[0x66];
        if ((param_1[0x27] & 0x10000U) == 0) {
          pcVar3 = (char *)param_1[0x53];
          if ((param_1[0x27] & 0x40000U) == 0) {
            if (pcVar3 != (char *)0x0) {
              uVar6 = 0xffffffff;
              pcVar9 = pcVar3;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              FUN_00477eb0(pcVar3,&iStack_30,~uVar6 - 1);
            }
          }
          else if (pcVar3 != (char *)0x0) {
            uVar6 = 0xffffffff;
            pcVar9 = pcVar3;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            FUN_004781f0(pcVar3,&iStack_30,~uVar6 - 1);
          }
        }
        else {
          pcVar3 = (char *)param_1[0x53];
          if (pcVar3 != (char *)0x0) {
            uVar6 = 0xffffffff;
            pcVar9 = pcVar3;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            FUN_00477cd0(pcVar3,&iStack_30,~uVar6 - 1);
          }
        }
      }
      if (*(int **)(param_1[0x47] + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x47] + 4) + 0xc4))();
      }
      (**(code **)(*param_1 + 0x118))(param_1[0x47],0);
    }
    if ((param_1[0x4a] != 0) && ((param_2 == -1 || (param_2 == 2)))) {
      piVar2 = *(int **)(param_1[0x4a] + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xd0))(local_10);
      }
      if (param_1[0x5a] == 0) {
        FUN_00478b30(param_1[0x5b]);
      }
      else {
        FUN_00475fb0(param_1[0x5a],0,iVar7 - local_38,0,0,iVar4,iVar7);
      }
      iStack_30 = 0;
      iStack_2c = (local_38 - param_1[0x72]) + param_1[0x70];
      iVar8 = 0;
      iStack_24 = iVar7 + iStack_2c;
      iStack_28 = iVar4;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[99],param_1[100]);
          iStack_30 = iStack_30 + 1;
          iStack_28 = iStack_28 + -1;
          iStack_2c = iStack_2c + 1;
          iStack_24 = iStack_24 + -1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[0x65]);
      }
      iStack_28 = local_18;
      iStack_24 = (local_38 - param_1[0x72]) + param_1[0x70];
      iStack_2c = iVar11 + iStack_24;
      iStack_24 = local_14 + iStack_24;
      iVar8 = 0;
      iStack_30 = iVar5;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[100],param_1[99]);
          iStack_30 = iStack_30 + -1;
          iStack_28 = iStack_28 + 1;
          iStack_2c = iStack_2c + -1;
          iStack_24 = iStack_24 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[0x65]);
      }
      if (*(int **)(param_1[0x4a] + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x4a] + 4) + 0xc4))();
      }
      (**(code **)(*param_1 + 0x118))(param_1[0x4a],2);
    }
    if ((param_1[0x49] != 0) && ((param_2 == -1 || (param_2 == 3)))) {
      piVar2 = *(int **)(param_1[0x49] + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xd0))(local_10);
      }
      if (*(int **)(param_1[0x49] + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x49] + 4) + 0xc4))();
      }
      if (param_1[0x5a] == 0) {
        FUN_00478b30(param_1[0x5b]);
      }
      else {
        FUN_00475fb0(param_1[0x5a],0,local_44,0,0,iVar4,iVar7);
      }
      iStack_30 = 0;
      iVar10 = -local_44;
      iStack_24 = iVar7 + iVar10;
      iVar8 = 0;
      iStack_2c = iVar10;
      iStack_28 = iVar4;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[99],param_1[100]);
          iStack_30 = iStack_30 + 1;
          iStack_28 = iStack_28 + -1;
          iStack_2c = iStack_2c + 1;
          iStack_24 = iStack_24 + -1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[0x65]);
      }
      iStack_28 = local_18;
      iStack_24 = local_14 + iVar10;
      iStack_2c = iVar11 + iVar10;
      iVar8 = 0;
      iStack_30 = iVar5;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[100],param_1[99]);
          iStack_30 = iStack_30 + -1;
          iStack_28 = iStack_28 + 1;
          iStack_2c = iStack_2c + -1;
          iStack_24 = iStack_24 + 1;
          iVar8 = iVar8 + 1;
        } while (iVar8 < param_1[0x65]);
      }
      if (*(int **)(param_1[0x49] + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x49] + 4) + 0xc4))();
      }
      (**(code **)(*param_1 + 0x118))(param_1[0x49],3);
    }
    if ((param_1[0x48] != 0) && ((param_2 == -1 || (param_2 == 1)))) {
      piVar2 = *(int **)(param_1[0x48] + 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xd0))(local_10);
      }
      if (param_1[0x5a] == 0) {
        FUN_00478b30(param_1[0x5b]);
      }
      else {
        FUN_00475fb0(param_1[0x5a],iVar4 - param_1[0x61],local_44,0,0,iVar4,iVar7);
      }
      local_44 = -local_44;
      iStack_30 = (param_1[0x6f] - param_1[0x71]) + param_1[0x61];
      iStack_24 = iVar7 + local_44;
      iStack_28 = iVar4 + iStack_30;
      iVar4 = 0;
      iStack_2c = local_44;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[99],param_1[100]);
          iStack_30 = iStack_30 + 1;
          iStack_28 = iStack_28 + -1;
          iStack_2c = iStack_2c + 1;
          iStack_24 = iStack_24 + -1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_1[0x65]);
      }
      iStack_28 = (param_1[0x6f] - param_1[0x71]) + param_1[0x61];
      iStack_2c = iVar11 + local_44;
      iStack_24 = local_14 + local_44;
      iStack_30 = iVar5 + iStack_28;
      iStack_28 = local_18 + iStack_28;
      iVar11 = 0;
      if (0 < param_1[0x65]) {
        do {
          FUN_004795d0(&iStack_30,param_1[100],param_1[99]);
          iStack_30 = iStack_30 + -1;
          iStack_28 = iStack_28 + 1;
          iStack_2c = iStack_2c + -1;
          iStack_24 = iStack_24 + 1;
          iVar11 = iVar11 + 1;
        } while (iVar11 < param_1[0x65]);
      }
      if (*(int **)(param_1[0x48] + 4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1[0x48] + 4) + 0xc4))();
      }
      (**(code **)(*param_1 + 0x118))(param_1[0x48],1);
    }
  }
  return;
}

