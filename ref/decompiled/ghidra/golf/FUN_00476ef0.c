/* Ghidra decompiled: golf.exe */
/* Function: FUN_00476ef0 @ 0x00476EF0 */


char * __thiscall FUN_00476ef0(int param_1,char *param_2,int param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  if (param_3 == 0) {
    return (char *)0x0;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = DAT_0083ad44;
  }
  if (*(int *)(param_1 + 0x48) == 2) {
    *(undefined4 *)(param_1 + 0x48) = 1;
  }
  pcVar1 = param_2;
  if (*(int *)(param_1 + 0x40) == 0) {
    pcVar1 = (char *)FUN_00483980(param_2,param_3,param_4);
    return pcVar1;
  }
LAB_00476f3f:
  if (*(int *)(param_1 + 0x48) == 1) {
    pcVar2 = (char *)FUN_00476dd0(pcVar1,&param_4);
  }
  else if (*(int *)(param_1 + 0x34) == 3) {
    pcVar2 = (char *)FUN_00476d80(pcVar1,&param_4);
  }
  else {
    pcVar2 = (char *)FUN_00476d40(pcVar1,&param_4);
  }
  if (param_4 == (char *)0x0) {
    if (*(int *)(param_1 + 0x5c + *(int *)(param_1 + 0x34) * 4) == 0) {
      pcVar4 = (char *)FUN_00483980(pcVar1,param_3,(int)pcVar2 - (int)pcVar1);
      if (pcVar4 != (char *)0x0) {
LAB_0047718e:
        *(undefined4 *)(param_1 + 0x3c) = 0;
        if ((pcVar4[-1] != ' ') && (pcVar4 != pcVar1)) {
          pcVar1 = (char *)FUN_004935b0(param_2,pcVar4,0x20);
          return pcVar1;
        }
        return pcVar4;
      }
    }
    else {
      pcVar2 = (char *)FUN_00483980(pcVar1,param_3,(int)pcVar2 - (int)pcVar1);
      if (pcVar2 != (char *)0x0) {
        *(undefined4 *)(param_1 + 0x3c) = 0;
        if (pcVar2[-1] == ' ') {
          return pcVar2;
        }
        if (pcVar2 != pcVar1) {
          pcVar1 = (char *)FUN_004935b0(param_2,pcVar2,0x20);
          return pcVar1;
        }
        return pcVar2;
      }
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return (char *)0x0;
  }
  switch(*pcVar2) {
  case '$':
    iVar3 = _strncmp(pcVar2,s__LINK<_004e4254,6);
    if (iVar3 != 0) {
      iVar3 = _strncmp(pcVar2,s__DROPDOWN_004e4248,9);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x48) = 1;
      }
      else {
        iVar3 = _strncmp(pcVar2,s__DROPLINK_004e423c,9);
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0x48) = 1;
          uVar5 = 3;
          break;
        }
      }
      goto switchD_00476f98_caseD_25;
    }
    *(undefined4 *)(param_1 + 0x3c) = 1;
    uVar5 = 3;
    break;
  default:
    goto switchD_00476f98_caseD_25;
  case '=':
    *(undefined4 *)(param_1 + 0x3c) = 2;
    goto switchD_00476f98_caseD_25;
  case '[':
    if (pcVar2[1] == '[') {
LAB_0047703f:
      pcVar2 = pcVar2 + 1;
      param_4 = param_4 + -1;
      goto switchD_00476f98_caseD_25;
    }
    uVar5 = 2;
    break;
  case ']':
    if (pcVar2[1] == ']') goto LAB_0047703f;
    goto LAB_00477013;
  case '^':
    *(undefined4 *)(param_1 + 0x48) = 2;
    goto LAB_00477013;
  case '{':
    if (pcVar2[1] == '{') goto LAB_0047703f;
    uVar5 = 1;
    break;
  case '}':
    if (pcVar2[1] == '}') goto LAB_0047703f;
LAB_00477013:
    uVar5 = 0;
  }
LAB_0047704c:
  if (*(int *)(param_1 + 0x5c + *(int *)(param_1 + 0x34) * 4) == 0) {
    pcVar4 = (char *)FUN_00483980(pcVar1,param_3,(int)pcVar2 - (int)pcVar1);
    if (pcVar4 != (char *)0x0) goto LAB_0047718e;
  }
  else {
    pcVar4 = (char *)FUN_00483980(pcVar1,param_3,(int)pcVar2 - (int)pcVar1);
    if (pcVar4 != (char *)0x0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (pcVar4[-1] == ' ') {
        return pcVar4;
      }
      if (pcVar4 != pcVar1) {
        pcVar1 = (char *)FUN_004935b0(param_2,pcVar4,0x20);
        return pcVar1;
      }
      return pcVar4;
    }
  }
  if (*(int *)(param_1 + 0x3c) == 1) {
    pcVar2 = pcVar2 + 5;
    param_4 = param_4 + -5;
  }
  else if (*(int *)(param_1 + 0x48) == 1) {
    pcVar2 = pcVar2 + 9;
    param_4 = param_4 + -9;
  }
  else if (*(int *)(param_1 + 0x48) == 2) {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  pcVar1 = pcVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == 2) {
    pcVar2 = _strchr(pcVar1,0x3e);
    uVar5 = 0;
    if (pcVar2 != (char *)0x0) {
      param_4 = pcVar1 + (int)(param_4 + (-1 - (int)pcVar2));
      pcVar1 = pcVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  param_4 = param_4 + -1;
  goto LAB_00476f3f;
switchD_00476f98_caseD_25:
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  goto LAB_0047704c;
}

