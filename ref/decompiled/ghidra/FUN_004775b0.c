/* Ghidra decompiled: golf.exe */
/* Function: FUN_004775b0 @ 0x004775B0 */
/* Body size: 1335 addresses */


int __thiscall FUN_004775b0(int *param_1,char *param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *local_8;
  
  local_8 = param_2;
  if (param_1[0x10] == 0) {
    iVar1 = FUN_004767a0(param_2,param_3,param_4,param_5);
    return iVar1;
  }
LAB_004775ed:
  iVar1 = param_3;
  param_2 = (char *)0x2;
  if (param_1[0x14] == 1) {
    pcVar2 = (char *)FUN_00476dd0(local_8,&param_5);
  }
  else if (param_1[0xc] == 3) {
    pcVar2 = (char *)FUN_00476d80(local_8,&param_5);
  }
  else {
    pcVar2 = (char *)FUN_00476d40(local_8,&param_5);
  }
  if ((pcVar2 == (char *)0x0) || (param_5 == (char *)0x0)) {
    iVar1 = FUN_004767a0(local_8,param_3,param_4,(int)pcVar2 - (int)local_8);
    if ((param_1[0x14] == 0) || (iVar1 - param_3 < 1)) {
      if (((param_1[0xc] == 3) && (param_1[0x2c] < 0x28)) &&
         ((iVar3 = param_1[0x1a], iVar3 != 0 || (iVar3 = param_1[0x17], iVar3 != 0)))) {
        if (*(int *)(iVar3 + 8) < 0) {
          iVar3 = *(int *)(iVar3 + 0xc);
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
        }
        FUN_004929b0(param_1[0x2c] + -1,0,param_3,param_4,iVar1 - param_3,iVar3,0);
      }
    }
    else {
      iVar3 = param_1[param_1[0xc] + 0x17];
      if ((iVar3 != 0) || (iVar3 = param_1[0x17], iVar3 != 0)) {
        if (*(int *)(iVar3 + 8) < 0) {
          iVar7 = *(int *)(iVar3 + 0xc);
        }
        else {
          iVar7 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
        }
        FUN_00478a90(param_1[0x11],1,param_3,param_4,iVar1 - param_3,iVar7);
      }
      if ((((param_1[0x14] == 2) && (param_1[0x14] = 0, iVar3 != 0)) && (param_1[0x15] != 0)) &&
         ((&DAT_0083fe08)[param_1[0x11] * 2] == 0)) {
        FUN_00473e60(param_1,iVar1,param_4,0);
        iVar7 = iVar1 + *(int *)(param_1[0x15] + 0x18);
        if (*(int *)(iVar3 + 8) < 0) {
          iVar3 = *(int *)(iVar3 + 0xc);
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
        }
        FUN_00478a90(param_1[0x11],0,iVar1,param_4,iVar7 - iVar1,iVar3);
        return iVar7;
      }
    }
    return iVar1;
  }
  switch(*pcVar2) {
  case '$':
    iVar3 = _strncmp(pcVar2,s__LINK<_004e4254,6);
    if (iVar3 != 0) {
      iVar3 = _strncmp(pcVar2,s__DROPDOWN_004e4248,9);
      if (iVar3 == 0) {
        param_1[0x14] = 1;
      }
      else {
        iVar3 = _strncmp(pcVar2,s__DROPLINK_004e423c,9);
        if (iVar3 == 0) {
          param_1[0x14] = 1;
          param_2 = (char *)0x3;
          break;
        }
      }
      goto LAB_0047771e;
    }
    iVar3 = param_1[0x2c];
    param_1[0xf] = 1;
    param_2 = (char *)0x3;
    param_1[0x2c] = iVar3 + 1;
    if (0x28 < iVar3 + 1) {
      MessageBoxA((HWND)0x0,s_Maximum_hypertext_links_exceeded_004e425c,s_WARNING__004e4280,0);
    }
    break;
  default:
    goto LAB_0047771e;
  case '=':
    param_1[0xf] = 2;
    goto LAB_0047771e;
  case '[':
    if (pcVar2[1] == '[') {
LAB_00477714:
      pcVar2 = pcVar2 + 1;
      param_5 = param_5 + -1;
      goto LAB_0047771e;
    }
    break;
  case ']':
    if (pcVar2[1] == ']') goto LAB_00477714;
    goto LAB_004776f0;
  case '^':
    param_1[0x14] = 2;
    goto LAB_004776f0;
  case '{':
    if (pcVar2[1] == '{') goto LAB_00477714;
    param_2 = (char *)0x1;
    break;
  case '}':
    if (pcVar2[1] == '}') goto LAB_00477714;
LAB_004776f0:
    param_2 = (char *)0x0;
  }
LAB_00477725:
  if (param_1[0x14] == 2) {
    if (((&DAT_0083fe08)[param_1[0x11] * 2] != 0) &&
       (iVar3 = (**(code **)(*param_1 + 0x10))(), iVar3 != 0)) {
      (**(code **)(*param_1 + 0x10))();
      uVar4 = FUN_004941e0();
      iVar3 = FUN_00477250(uVar4);
      iVar3 = iVar3 + 0x1e;
      if (iVar3 < 200) {
        iVar3 = 200;
      }
      uVar12 = 7;
      uVar4 = (**(code **)(*param_1 + 0x10))(7);
      FUN_004936a0(param_3,param_4,iVar3,0x138,uVar4,uVar12);
      FUN_004762d0(param_1[param_1[0xc] + 0x17],0,0,0);
      FUN_00493a30();
      iVar3 = FUN_00493ed0();
      param_3 = param_3 + iVar3;
    }
  }
  else {
    param_3 = FUN_004767a0(local_8,param_3,param_4,(int)pcVar2 - (int)local_8);
  }
  if (param_1[0xf] == 1) {
    pcVar2 = pcVar2 + 5;
    param_5 = param_5 + -5;
  }
  else if (param_1[0x14] == 1) {
    pcVar2 = pcVar2 + 9;
    param_5 = param_5 + -9;
    param_1[0x11] = *pcVar2 + -0x30;
  }
  pcVar2 = pcVar2 + 1;
  local_8 = pcVar2;
  if (param_1[0xf] == 2) {
    pcVar5 = _strchr(pcVar2,0x3e);
    if (pcVar5 != (char *)0x0) {
      if (param_1[0x2c] < 0x28) {
        if ((*pcVar2 < '0') || ('9' < *pcVar2)) {
          uVar9 = (int)pcVar5 - (int)pcVar2;
          param_1[param_1[0x2c] + 0x44] = -1;
          pvVar6 = _malloc(uVar9 + 1);
          param_1[param_1[0x2c] + 0x6c] = (int)pvVar6;
          if ((char *)param_1[param_1[0x2c] + 0x6c] != (char *)0x0) {
            pcVar10 = pcVar2;
            pcVar11 = (char *)param_1[param_1[0x2c] + 0x6c];
            for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
              pcVar10 = pcVar10 + 4;
              pcVar11 = pcVar11 + 4;
            }
            for (uVar8 = uVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *pcVar11 = *pcVar10;
              pcVar10 = pcVar10 + 1;
              pcVar11 = pcVar11 + 1;
            }
            *(undefined1 *)(param_1[param_1[0x2c] + 0x6c] + uVar9) = 0;
          }
        }
        else {
          *pcVar5 = '\0';
          iVar3 = FUN_004a6b93(pcVar2);
          *pcVar5 = '>';
          param_1[param_1[0x2c] + 0x44] = iVar3;
        }
      }
      local_8 = pcVar5 + 1;
      param_5 = pcVar2 + (int)(param_5 + (-1 - (int)pcVar5));
    }
    param_2 = (char *)0x0;
    param_1[0xf] = 0;
  }
  if ((param_1[0x14] == 0) || (param_3 - iVar1 < 1)) {
    if (((param_1[0xc] == 3) && (param_1[0x2c] < 0x28)) &&
       ((iVar3 = param_1[0x1a], iVar3 != 0 || (iVar3 = param_1[0x17], iVar3 != 0)))) {
      if (*(int *)(iVar3 + 8) < 0) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
      }
      FUN_004929b0(param_1[0x2c] + -1,0,iVar1,param_4,param_3 - iVar1,iVar3,0);
    }
  }
  else {
    iVar3 = param_1[param_1[0xc] + 0x17];
    if ((iVar3 != 0) || (iVar3 = param_1[0x17], iVar3 != 0)) {
      if (*(int *)(iVar3 + 8) < 0) {
        iVar7 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar7 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
      }
      FUN_00478a90(param_1[0x11],1,iVar1,param_4,param_3 - iVar1,iVar7);
    }
    if ((((param_1[0x14] == 2) && (param_1[0x14] = 0, iVar3 != 0)) && (param_1[0x15] != 0)) &&
       ((&DAT_0083fe08)[param_1[0x11] * 2] == 0)) {
      FUN_00473e60(param_1,param_3,param_4,0);
      iVar1 = param_3 + *(int *)(param_1[0x15] + 0x18);
      if (*(int *)(iVar3 + 8) < 0) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x10) + *(int *)(iVar3 + 8);
      }
      FUN_00478a90(param_1[0x11],0,param_3,param_4,iVar1 - param_3,iVar3);
      param_3 = iVar1;
    }
  }
  param_5 = param_5 + -1;
  param_1[0xc] = (int)param_2;
  goto LAB_004775ed;
LAB_0047771e:
  param_2 = (char *)param_1[0xc];
  goto LAB_00477725;
}

