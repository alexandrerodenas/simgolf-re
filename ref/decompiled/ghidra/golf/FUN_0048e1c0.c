/* Ghidra decompiled: golf.exe */
/* Function: FUN_0048e1c0 @ 0x0048E1C0 */


int __thiscall
FUN_0048e1c0(int *param_1,undefined *param_2,int param_3,int param_4,undefined *param_5,uint param_6
            ,int param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  char *pcVar11;
  undefined *puVar12;
  char *local_118;
  char local_111;
  int local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  char cStack_100;
  char acStack_ff [255];
  
  param_1[0x15f] = (int)param_2;
  local_118 = (char *)0x0;
  local_110 = 1;
  param_1[0x160] = param_3;
  param_1[0x161] = param_4;
  param_1[0x15e] = (int)param_5;
  param_1[0x162] = param_6;
  param_1[0x163] = param_7;
  local_111 = '\0';
  if ((param_6 & 0x80) == 0) {
    FUN_0048d480();
  }
  if ((param_6 & 1) == 0) {
    if ((param_6 & 2) == 0) {
      if ((param_6 & 4) == 0) {
        param_1[0x595] = 0x10;
      }
      else {
        param_1[0x595] = 4;
      }
    }
    else {
      param_1[0x595] = 2;
    }
  }
  else {
    param_1[0x595] = 1;
  }
  if (((param_6 & 0x80) == 0) && (iVar3 = FUN_0048db60(param_6,0), iVar3 != 0)) {
    return iVar3;
  }
  if ((param_6 & 0x100000) == 0) {
    param_1[0x164] = 0;
  }
  if (param_7 != 0) {
    FUN_004801f0();
    param_1[0x16f] = param_7;
  }
  param_1[0x171] = param_4;
  if (param_3 == 0) {
    return 3;
  }
  if (param_5 != (undefined *)0x0) {
    FUN_004a29c0(param_5,0);
  }
  if (param_2 == (undefined *)0x0) {
    param_2 = &DAT_0083b658;
  }
  iVar3 = FUN_00487e70(param_2,param_3);
  if (iVar3 != 0) {
    return 1;
  }
switchD_0048e39f_default:
  while( true ) {
    local_118 = (char *)FUN_00487e90();
    if (local_118 == (char *)0x0) {
      return 1;
    }
    if (*local_118 != '\0') break;
switchD_0048e39f_caseD_b:
    local_110 = 0;
  }
  cStack_100 = '\0';
  FUN_004942f0(local_118,&cStack_100);
  local_118 = &cStack_100;
  if (cStack_100 != '#') {
    if (local_110 == 0) {
      if ((*(byte *)(param_1 + 0x7da) & 4) == 0) {
        if (local_111 == '\0') {
          FUN_004a09a0(&cStack_100,
                       *(undefined4 *)(*(int *)(param_1[0x519] + 8) + 0x1534 + (int)param_1));
        }
        else {
          FUN_004a09a0(&cStack_100,uStack_108);
          local_111 = '\0';
        }
      }
      else {
        iVar3 = FUN_004a1370();
        if (iVar3 < 10) {
          if ((param_5 == (undefined *)0x0) ||
             (iVar3 = FUN_004a1370(), puVar12 = param_5, iVar3 != 0)) {
            iVar3 = FUN_004a1370();
            puVar12 = &DAT_0083e8e0 + iVar3 * 0x100;
          }
          FUN_004a28a0(local_118,puVar12,param_4);
        }
        else {
          FUN_004a28a0(local_118,0,param_4);
        }
      }
    }
    else {
      FUN_0048df20(&cStack_100,0);
    }
    goto switchD_0048e39f_default;
  }
  local_118 = acStack_ff;
  uVar4 = FUN_0048cd80(&local_118);
  switch(uVar4) {
  case 0:
    if (param_1[0x164] == 0) {
      uVar4 = FUN_004a6b93(local_118);
      FUN_0048e120(uVar4);
    }
    goto switchD_0048e39f_default;
  case 1:
    if (param_1[0x164] == 0) {
      uVar4 = FUN_004a6b93(local_118);
      FUN_0048e0b0(uVar4);
    }
    goto switchD_0048e39f_default;
  case 2:
    uVar5 = 0x2000;
    uVar4 = FUN_004a6b93(local_118,0x2000);
    break;
  case 3:
    uVar5 = FUN_004a6b93(local_118);
    uVar4 = 0x2000;
    break;
  case 4:
    uVar4 = FUN_004a6b93(local_118);
    *(undefined4 *)(*(int *)(param_1[0x519] + 8) + 0x14b4 + (int)param_1) = uVar4;
    goto switchD_0048e39f_default;
  case 5:
    FUN_0048e010(local_118);
    goto switchD_0048e39f_default;
  case 6:
    param_1[0x595] = 1;
    param_1[0x7da] = param_1[0x7da] | 1;
    iVar3 = FUN_004a6b93(local_118);
    if (iVar3 != 0) {
      uVar4 = FUN_004a6b93(local_118);
      *(undefined4 *)(*(int *)(param_1[0x519] + 8) + 0x14b8 + (int)param_1) = uVar4;
    }
    goto switchD_0048e39f_default;
  case 7:
    param_1[0x595] = 4;
    param_1[0x7da] = param_1[0x7da] | 4;
    goto switchD_0048e39f_default;
  case 8:
    param_1[0x595] = 2;
    param_1[0x7da] = param_1[0x7da] | 2;
    iVar3 = FUN_004a6b93(local_118);
    if (iVar3 != 0) {
      uVar4 = FUN_004a6b93(local_118);
      *(undefined4 *)(*(int *)(param_1[0x519] + 8) + 0x14b8 + (int)param_1) = uVar4;
    }
    goto switchD_0048e39f_default;
  case 9:
    iVar3 = FUN_004a6b93(local_118);
    param_1[0x171] = iVar3;
    goto switchD_0048e39f_default;
  case 10:
    local_110 = 1;
    goto switchD_0048e39f_default;
  case 0xb:
    goto switchD_0048e39f_caseD_b;
  case 0xc:
    local_111 = '\x01';
    uStack_108 = FUN_004a6b93(local_118);
    goto switchD_0048e39f_default;
  case 0xd:
    FUN_0048dfc0(local_118);
    goto switchD_0048e39f_default;
  case 0xe:
    iVar3 = FUN_004a6b93(local_118);
    param_1[0x7db] = iVar3;
    goto switchD_0048e39f_default;
  case 0xf:
    cVar2 = *local_118;
    if (cVar2 == '2') {
      local_118 = local_118 + 1;
      FUN_004925b0(local_118);
    }
    uVar7 = (uint)(cVar2 == '2');
    iVar3 = FUN_004a6570((int)*local_118);
    if (iVar3 == 0) {
      uVar6 = 0xffffffff;
      *(char *)(param_1 + uVar7 * 0x46 + 0x734) = '\0';
      pcVar8 = local_118;
      do {
        pcVar11 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar11 = pcVar8 + 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar11;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6;
      iVar3 = -1;
      piVar9 = param_1 + uVar7 * 0x46 + 0x734;
      do {
        piVar10 = piVar9;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        piVar10 = (int *)((int)piVar9 + 1);
        iVar1 = *piVar9;
        piVar9 = piVar10;
      } while ((char)iVar1 != '\0');
      pcVar8 = pcVar11 + -uVar6;
      pcVar11 = (char *)((int)piVar10 + -1);
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar11 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar11 = pcVar11 + 1;
      }
    }
    else {
      iVar3 = FUN_004a6b93(local_118);
      param_1[uVar7 * 0x46 + 0x775] = iVar3;
    }
    goto switchD_0048e39f_default;
  case 0x10:
    cVar2 = *local_118;
    if (cVar2 == '2') {
      local_118 = local_118 + 1;
      FUN_004925b0(local_118);
    }
    iVar3 = FUN_004a6b08(local_118);
    param_1[(uint)(cVar2 == '2') * 0x46 + 0x776] = iVar3;
    goto switchD_0048e39f_default;
  case 0x11:
    cVar2 = *local_118;
    if (cVar2 == '2') {
      local_118 = local_118 + 1;
      FUN_004925b0(local_118);
    }
    iVar3 = FUN_004a6b93(local_118);
    param_1[(uint)(cVar2 == '2') * 0x46 + 0x778] = iVar3;
    goto switchD_0048e39f_default;
  case 0x12:
    cVar2 = *local_118;
    if (cVar2 == '2') {
      local_118 = local_118 + 1;
      FUN_004925b0(local_118);
    }
    iVar3 = FUN_004a6b08(local_118);
    param_1[(uint)(cVar2 == '2') * 0x46 + 0x777] = iVar3;
    goto switchD_0048e39f_default;
  case 0x13:
    cVar2 = *local_118;
    if (cVar2 == '2') {
      local_118 = local_118 + 1;
      FUN_004925b0(local_118);
    }
    iVar3 = FUN_004a6b93(local_118);
    param_1[(uint)(cVar2 == '2') * 0x46 + 0x779] = iVar3;
    goto switchD_0048e39f_default;
  case 0x14:
    iVar3 = FUN_00478f50(local_118,&uStack_104,&uStack_10c);
    if (iVar3 == 0) {
      iVar3 = FUN_00473b50(local_118,uStack_104,uStack_10c);
      if (iVar3 == 0) {
        param_1[0x4f4] = (int)(param_1 + 0x4e8);
      }
    }
    goto switchD_0048e39f_default;
  case 0xffffffff:
    goto switchD_0048e39f_caseD_ffffffff;
  default:
    goto switchD_0048e39f_default;
  }
  FUN_0048e190(uVar4,uVar5);
  goto switchD_0048e39f_default;
switchD_0048e39f_caseD_ffffffff:
  if ((*local_118 != '#') && (cVar2 = (**(code **)(*param_1 + 0x1a4))(local_118), cVar2 == '\0')) {
    FUN_00487e60();
    return 0;
  }
  goto switchD_0048e39f_default;
}

