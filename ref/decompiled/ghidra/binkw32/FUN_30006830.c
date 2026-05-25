/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30006830 @ 0x30006830 */


undefined4 __cdecl FUN_30006830(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  iVar4 = ((int)(*param_4 + (*param_4 >> 0x1f & 0xfU)) >> 4) +
          param_2 + ((int)(param_4[1] + (param_4[1] >> 0x1f & 0xfU)) >> 4) * param_3;
  iVar2 = (int)(param_4[3] + (param_4[3] >> 0x1f & 0xfU)) >> 4;
  iVar1 = (int)(param_4[2] + (param_4[2] >> 0x1f & 0xfU)) >> 4;
  iVar3 = 0;
  iVar6 = iVar4;
  if (0 < iVar2) {
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        do {
          if (*(char *)(iVar5 + iVar6) != '\0') {
            iVar4 = iVar4 + iVar3 * param_3;
            iVar2 = iVar2 - iVar3;
            param_1[1] = param_4[1] + iVar3 * 0x10;
            iVar6 = param_4[3] + iVar3 * -0x10;
            param_1[3] = iVar6;
            if (iVar6 < 2) goto LAB_3000690b;
            iVar6 = (iVar2 + -1) * param_3 + iVar4;
            iVar3 = 0;
            if (0 < iVar2) goto LAB_300068de;
            goto LAB_300068f6;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar1);
      }
      iVar6 = iVar6 + param_3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 0;
LAB_300068de:
  do {
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        if (*(char *)(iVar5 + iVar6) != '\0') goto LAB_300068f6;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    iVar6 = iVar6 - param_3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar2);
LAB_300068f6:
  iVar2 = iVar2 - iVar3;
  param_1[3] = param_1[3] + iVar3 * -0x10;
LAB_3000690b:
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = 0;
      pcVar7 = (char *)(iVar6 + iVar4);
      if (0 < iVar2) {
        do {
          if (*pcVar7 != '\0') goto LAB_3000692f;
          pcVar7 = pcVar7 + param_3;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
LAB_3000692f:
  *param_1 = *param_4 + iVar6 * 0x10;
  iVar5 = param_4[2] + iVar6 * -0x10;
  param_1[2] = iVar5;
  iVar3 = iVar1 - iVar6;
  if (1 < iVar5) {
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      iVar5 = 0;
      pcVar7 = (char *)(iVar3 + iVar4 + iVar6);
      if (0 < iVar2) {
        do {
          if (*pcVar7 != '\0') goto LAB_30006970;
          pcVar7 = pcVar7 + param_3;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar2);
      }
    }
LAB_30006970:
    param_1[2] = param_1[2] + ((iVar3 - (iVar1 - iVar6)) + 1) * 0x10;
  }
  return 1;
}

