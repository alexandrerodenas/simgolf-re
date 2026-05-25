/* Ghidra decompiled: golf.exe */
/* Function: FUN_00495420 @ 0x00495420 */


int __thiscall FUN_00495420(int param_1,char *param_2,undefined4 param_3,int param_4,char param_5)

{
  char cVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  undefined4 *unaff_FS_OFFSET;
  int iStack_f8;
  byte *pbStack_f4;
  uint uStack_f0;
  undefined1 local_e4 [4];
  int *local_e0;
  char cStack_8c;
  byte bStack_8b;
  char cStack_8a;
  byte bStack_89;
  undefined2 uStack_88;
  undefined1 uStack_86;
  undefined1 uStack_85;
  ushort uStack_84;
  ushort uStack_82;
  uint uStack_4b;
  undefined4 uStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b82eb;
  uStack_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_c;
  FUN_00482fd0();
  local_4 = 0;
  if (param_2 != (char *)0x0) {
    if (*(int **)(param_1 + 4) == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (**(code **)(**(int **)(param_1 + 4) + 0xe4))();
    }
    if (*(int *)(iVar4 + 4) == 0) {
      if (local_e0 == (int *)0x0) {
LAB_004954a2:
        iStack_f8 = 0;
      }
      else {
        iStack_f8 = (**(code **)(*local_e0 + 0x18))();
      }
    }
    else {
      if (local_e0 == (int *)0x0) goto LAB_004954a2;
      iStack_f8 = (**(code **)(*local_e0 + 0x1c))();
    }
    uVar8 = 0xffffffff;
    pcVar9 = s_monkey_sweats_on_a_tuesday_004e4748;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    iVar4 = _strncmp(param_2,s_monkey_sweats_on_a_tuesday_004e4748,~uVar8 - 1);
    if (iVar4 == 0) {
      uVar8 = 0xffffffff;
      pcVar9 = s_monkey_sweats_on_a_tuesday_004e4748;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      param_2 = param_2 + ~uVar8;
    }
    pcVar9 = param_2;
    pcVar10 = &cStack_8c;
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    if (((cStack_8c == '\n') && (cStack_8a == '\x01')) && ((3 < bStack_8b || (param_4 == 0)))) {
      iVar4 = ((uint)uStack_82 - (uint)CONCAT11(uStack_85,uStack_86)) + 1;
      iVar5 = FUN_00474e70(((uint)uStack_84 - (CONCAT12(uStack_86,uStack_88) & 0xffff)) + 1,iVar4,
                           0x10);
      if (iVar5 != 0) {
        local_4 = 0xffffffff;
        FUN_00483010();
        goto LAB_00495735;
      }
      if ((1 << (bStack_89 & 0x1f)) * (uStack_4b & 0xff) == 0x100) {
        iVar11 = (int)(8 / (ulonglong)(longlong)(int)(uint)bStack_89) * (uStack_4b >> 8 & 0xffff) *
                 (uStack_4b & 0xff);
        iVar4 = iVar11 * iVar4;
        iVar5 = 0;
        if ((*(int **)(param_1 + 4) == (int *)0x0) ||
           (iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x20))(),
           pbVar2 = (byte *)(param_2 + 0x80), iVar6 == 0)) {
          local_4 = 0xffffffff;
          FUN_00483010();
          iVar5 = 7;
        }
        else {
          while (iVar4 != 0) {
            bVar3 = *pbVar2;
            pbStack_f4 = pbVar2 + 1;
            if ((bVar3 & 0xc0) == 0xc0) {
              pbStack_f4 = pbVar2 + 2;
              uStack_f0 = bVar3 & 0xffffff3f;
              bVar3 = pbVar2[1];
            }
            else {
              uStack_f0 = 1;
            }
            FUN_00493630(iVar6,*(undefined2 *)(iStack_f8 + (uint)(byte)(bVar3 + param_5) * 2),
                         uStack_f0);
            iVar5 = iVar5 + uStack_f0;
            iVar4 = iVar4 - uStack_f0;
            iVar6 = iVar6 + uStack_f0 * 2;
            pbVar2 = pbStack_f4;
            if (iVar11 <= iVar5) {
              if (*(int **)(param_1 + 4) == (int *)0x0) {
                iVar7 = 0;
              }
              else {
                iVar7 = (**(code **)(**(int **)(param_1 + 4) + 0xe0))();
              }
              iVar6 = iVar6 + (iVar7 - iVar5) * 2;
              iVar4 = iVar4 + (iVar5 - iVar11);
              iVar5 = 0;
            }
          }
          if (*(int **)(param_1 + 4) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 4) + 0x24))(1);
          }
          if (param_4 == 0) {
            local_4 = 0xffffffff;
            FUN_00483010();
            iVar5 = 0;
          }
          else {
            FUN_00483020(local_e4);
            local_4 = 0xffffffff;
            FUN_00483010();
            iVar5 = 0;
          }
        }
        goto LAB_00495735;
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00483010();
  iVar5 = 3;
LAB_00495735:
  *unaff_FS_OFFSET = uStack_c;
  return iVar5;
}

