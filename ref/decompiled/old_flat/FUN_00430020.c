/* Ghidra decompiled: golf.exe */
/* Function: FUN_00430020 @ 0x00430020 */


void FUN_00430020(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  int local_4;
  
  if (DAT_005a9cc0 != 0) {
    param_1 = (param_1 + -400) / 2 + 400;
    param_2 = (param_2 + -300) / 2 + 300;
  }
  iVar4 = param_1 - DAT_00822c8c / 2;
  iVar1 = param_2 - DAT_00822c90 / 2;
  if (DAT_005685f4 == 2) {
    iVar1 = iVar1 + 0x14;
    iVar2 = iVar4 + -0x20;
  }
  else {
    iVar2 = iVar4;
    if ((DAT_005685f4 != 4) && (iVar2 = iVar4 + -0x40, DAT_005685f4 == 6)) {
      iVar1 = iVar1 + -0x14;
      iVar2 = iVar4 + -0x20;
    }
  }
  iVar1 = (iVar1 << 5) / 0x28;
  if (DAT_005685f4 == 0) {
    *param_3 = (((DAT_004c2ba0 * 2 + 1) * DAT_004c2840 + iVar1 * -2 + iVar2) / DAT_004c2840) / 2;
    *param_4 = ((DAT_004c2840 + (DAT_004c2ba4 * DAT_004c2840 + iVar1) * 2 + iVar2) / DAT_004c2840) /
               2;
  }
  if (DAT_005685f4 == 2) {
    *param_3 = ((((DAT_004c2ba0 * 2 + 1) * DAT_004c2840 + iVar1 * -2) - iVar2) / DAT_004c2840) / 2;
    *param_4 = (((DAT_004c2ba4 * 2 + 1) * DAT_004c2840 + iVar1 * -2 + iVar2) / DAT_004c2840) / 2;
  }
  if (DAT_005685f4 == 4) {
    *param_3 = ((((DAT_004c2840 * DAT_004c2ba0 + iVar1) * 2 - iVar2) + DAT_004c2840) / DAT_004c2840)
               / 2;
    *param_4 = ((((DAT_004c2ba4 * 2 + 1) * DAT_004c2840 + iVar1 * -2) - iVar2) / DAT_004c2840) / 2;
  }
  if (DAT_005685f4 == 6) {
    *param_3 = ((DAT_004c2840 + (DAT_004c2840 * DAT_004c2ba0 + iVar1) * 2 + iVar2) / DAT_004c2840) /
               2;
    *param_4 = ((((DAT_004c2ba4 * DAT_004c2840 + iVar1) * 2 - iVar2) + DAT_004c2840) / DAT_004c2840)
               / 2;
  }
  do {
    iVar1 = *param_3;
    iVar4 = *param_4;
    if (param_5 == 0) {
      FUN_0042f940(iVar1,iVar4,&local_4,&local_8);
    }
    else {
      FUN_0042fb90(iVar1 << 10,(iVar4 + 1) * 0x400,&local_4,&local_8,0);
    }
    iVar2 = FUN_0040acd0(param_1 - local_4,(param_2 - local_8) * 2);
    iVar5 = 0;
    do {
      if (param_5 == 0) {
        FUN_0042f940(*(int *)((int)&DAT_004c2878 + iVar5) + iVar1,
                     *(int *)((int)&DAT_004c2898 + iVar5) + iVar4,&local_4,&local_8);
      }
      else {
        FUN_0042fb90((*(int *)((int)&DAT_004c2878 + iVar5) + iVar1) * 0x400,
                     (*(int *)((int)&DAT_004c2898 + iVar5) + 1 + iVar4) * 0x400,&local_4,&local_8,0)
        ;
      }
      iVar3 = FUN_0040acd0(param_1 - local_4,(param_2 - local_8) * 2);
      if (iVar3 < iVar2) {
        *param_3 = *(int *)((int)&DAT_004c2878 + iVar5) + iVar1;
        *param_4 = *(int *)((int)&DAT_004c2898 + iVar5) + iVar4;
        iVar2 = iVar3;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x20);
  } while ((*param_3 != iVar1) || (*param_4 != iVar4));
  return;
}

