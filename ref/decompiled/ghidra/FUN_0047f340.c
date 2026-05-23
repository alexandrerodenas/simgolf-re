/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047f340 @ 0x0047F340 */
/* Body size: 952 addresses */


int * FUN_0047f340(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  piVar5 = param_1;
  iVar2 = FUN_004801f0();
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar2 = *param_2;
  iVar1 = *param_3;
  if ((*(byte *)(param_1 + 0x27) & 0x20) == 0) {
    *param_2 = DAT_00839ab8;
    *param_3 = DAT_00839abc;
  }
  iVar8 = 0;
  if (0 < param_1[0x8b]) {
    do {
      iVar6 = *(int *)(param_1[0x89] + iVar8 * 4);
      if (((*(byte *)(iVar6 + 0x9c) & 0x20) == 0) &&
         (piVar3 = (int *)FUN_0047f340(iVar6,param_2,param_3), piVar3 != (int *)0x0)) {
        return piVar3;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1[0x8b]);
  }
  if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
    iVar8 = FUN_00492610(*param_2,*param_3,param_1 + 0x6b);
    if (iVar8 == 0) goto LAB_0047f6e3;
    *param_2 = *param_2 - param_1[0x6b];
    *param_3 = *param_3 - param_1[0x6c];
  }
  else {
    iVar8 = FUN_00492610(*param_2,*param_3,param_1 + 0x6f);
    if (iVar8 == 0) goto LAB_0047f6e3;
    iVar8 = 0;
    *param_2 = *param_2 - param_1[0x6f];
    *param_3 = *param_3 - param_1[0x70];
    if (0 < param_1[0x8b]) {
      do {
        if (param_1 == (int *)param_1[0x2c]) {
          iVar6 = *(int *)(param_1[0x89] + iVar8 * 4);
          uVar4 = *(uint *)(iVar6 + 0x9c);
          if ((((uVar4 & 0x8000) != 0) && ((uVar4 & 0x20) != 0)) &&
             (piVar3 = (int *)FUN_0047f340(iVar6,param_2,param_3), piVar3 != (int *)0x0)) {
            return piVar3;
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < param_1[0x8b]);
    }
    iVar8 = FUN_00492610(*param_2,*param_3,param_1 + 0x6b);
    if (iVar8 == 0) {
      iVar8 = (**(code **)(*param_1 + 0x11c))();
      if ((iVar8 != 0) && (uVar4 = param_1[0x27], (uVar4 & 0x10000000) != 0)) {
        if (((uVar4 & 0x10) == 0) || ((uVar4 & 0x400000) != 0)) {
          iVar8 = param_1[0x61];
        }
        else {
          iVar8 = param_1[0x60];
        }
        iVar6 = param_1[0x62];
        if (param_1[0x62] == -1) {
          iVar6 = param_1[0x61];
        }
        param_1 = (int *)iVar6;
        iVar6 = *param_3;
        if (iVar6 < iVar8) {
          uVar4 = FUN_00478df0(*param_2,iVar6);
          if (uVar4 == (DAT_004e432c & 0x7fffffff)) {
            *param_2 = *param_2 + piVar5[0x6f];
            *param_3 = *param_3 + piVar5[0x70];
            *param_2 = iVar2;
            *param_3 = iVar1;
            return (int *)0x0;
          }
        }
        else {
          if ((piVar5[0x72] - piVar5[0x70]) - (int)param_1 < iVar6) {
            iVar6 = (piVar5[0x70] - piVar5[0x72]) + iVar6 + (int)param_1;
            iVar7 = *param_2;
          }
          else {
            iVar7 = *param_2;
            if (iVar7 < piVar5[0x61]) {
              iVar6 = iVar6 - iVar8;
            }
            else {
              iVar6 = iVar6 - iVar8;
              iVar7 = (piVar5[0x61] - piVar5[0x71]) + piVar5[0x6f] + iVar7;
            }
          }
          uVar4 = FUN_00478df0(iVar7,iVar6);
          if (uVar4 == (DAT_004e432c & 0x7fffffff)) {
            *param_2 = *param_2 + piVar5[0x6f];
            *param_3 = *param_3 + piVar5[0x70];
            *param_2 = iVar2;
            *param_3 = iVar1;
            return (int *)0x0;
          }
        }
      }
      DAT_0083ab18 = 1;
      return piVar5;
    }
    *param_2 = *param_2 - param_1[0x6b];
    *param_3 = *param_3 - param_1[0x6c];
  }
  DAT_0083ab18 = 0;
  iVar8 = 0;
  if (0 < param_1[0x8b]) {
    do {
      if (param_1 == (int *)param_1[0x2c]) {
        iVar6 = *(int *)(param_1[0x89] + iVar8 * 4);
        uVar4 = *(uint *)(iVar6 + 0x9c);
        if ((((uVar4 & 0x8000) == 0) && ((uVar4 & 0x20) != 0)) &&
           (piVar5 = (int *)FUN_0047f340(iVar6,param_2,param_3), piVar5 != (int *)0x0)) {
          return piVar5;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_1[0x8b]);
  }
  if (((*(byte *)(param_1 + 0x27) & 2) == 0) &&
     ((((iVar8 = (**(code **)(*param_1 + 0x11c))(), iVar8 == 0 ||
        ((param_1[0x27] & 0x1000000U) == 0)) || ((param_1[0x27] & 0x100U) != 0)) ||
      ((uVar4 = FUN_00478df0(*param_2,*param_3), uVar4 != (DAT_004e432c & 0x7fffffff) &&
       ((param_1[0x29] == 0 || (uVar4 != 0)))))))) {
    return param_1;
  }
LAB_0047f6e3:
  *param_2 = iVar2;
  *param_3 = iVar1;
  return (int *)0x0;
}

