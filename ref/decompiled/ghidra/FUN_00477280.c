/* Ghidra decompiled: golf.exe */
/* Function: FUN_00477280 @ 0x00477280 */
/* Body size: 429 addresses */


int __thiscall FUN_00477280(int param_1,char *param_2,char *param_3)

{
  int iVar1;
  char *pcVar2;
  char *_Str;
  undefined4 uVar3;
  
  _Str = param_2;
  if (*(int *)(param_1 + 0x5c) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = DAT_0083ad44;
  }
  param_2 = (char *)0x0;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar1 = FUN_00483930(_Str,param_3);
    return iVar1;
  }
LAB_004772bc:
  if (*(int *)(param_1 + 0x4c) == 1) {
    pcVar2 = (char *)FUN_00476dd0(_Str,&param_3);
  }
  else if (*(int *)(param_1 + 0x38) == 3) {
    pcVar2 = (char *)FUN_00476d80(_Str,&param_3);
  }
  else {
    pcVar2 = (char *)FUN_00476d40(_Str,&param_3);
  }
  if (param_3 == (char *)0x0) {
    iVar1 = FUN_00483930(_Str,(int)pcVar2 - (int)_Str);
    if (*(int *)(param_1 + 0x4c) == 2) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      return (int)param_2 + iVar1 + 0x1e;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    return (int)param_2 + iVar1;
  }
  switch(*pcVar2) {
  case '$':
    iVar1 = _strncmp(pcVar2,s__LINK<_004e4254,6);
    if (iVar1 != 0) {
      iVar1 = _strncmp(pcVar2,s__DROPDOWN_004e4248,9);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x4c) = 1;
      }
      else {
        iVar1 = _strncmp(pcVar2,s__DROPLINK_004e423c,9);
        if (iVar1 == 0) {
          *(undefined4 *)(param_1 + 0x4c) = 1;
          uVar3 = 3;
          break;
        }
      }
      goto LAB_004773c6;
    }
    *(undefined4 *)(param_1 + 0x3c) = 1;
    uVar3 = 3;
    break;
  default:
    goto LAB_004773c6;
  case '=':
    *(undefined4 *)(param_1 + 0x3c) = 2;
    goto LAB_004773c6;
  case '[':
    if (pcVar2[1] == '[') {
LAB_004773bc:
      pcVar2 = pcVar2 + 1;
      param_3 = param_3 + -1;
      goto LAB_004773c6;
    }
    uVar3 = 2;
    break;
  case ']':
    if (pcVar2[1] == ']') goto LAB_004773bc;
    goto LAB_00477390;
  case '^':
    *(undefined4 *)(param_1 + 0x4c) = 2;
    goto LAB_00477390;
  case '{':
    if (pcVar2[1] == '{') goto LAB_004773bc;
    uVar3 = 1;
    break;
  case '}':
    if (pcVar2[1] == '}') goto LAB_004773bc;
LAB_00477390:
    uVar3 = 0;
  }
LAB_004773c9:
  iVar1 = FUN_00483930(_Str,(int)pcVar2 - (int)_Str);
  param_2 = (char *)((int)param_2 + iVar1);
  if (*(int *)(param_1 + 0x3c) == 1) {
    pcVar2 = pcVar2 + 5;
    param_3 = param_3 + -5;
  }
  else if (*(int *)(param_1 + 0x4c) == 1) {
    pcVar2 = pcVar2 + 9;
    param_3 = param_3 + -9;
  }
  else if (*(int *)(param_1 + 0x4c) == 2) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    if (*(int *)(param_1 + 0x54) == 0) {
      param_2 = (char *)((int)param_2 + 0x1e);
    }
    else {
      param_2 = (char *)((int)param_2 + 0x19);
    }
  }
  _Str = pcVar2 + 1;
  if (*(int *)(param_1 + 0x3c) == 2) {
    pcVar2 = _strchr(_Str,0x3e);
    uVar3 = 0;
    if (pcVar2 != (char *)0x0) {
      param_3 = _Str + (int)(param_3 + (-1 - (int)pcVar2));
      _Str = pcVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  param_3 = param_3 + -1;
  goto LAB_004772bc;
LAB_004773c6:
  uVar3 = *(undefined4 *)(param_1 + 0x38);
  goto LAB_004773c9;
}

