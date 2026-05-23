/* Ghidra decompiled: golf.exe */
/* Function: FUN_004060a0 @ 0x004060A0 */
/* Body size: 253 addresses */


int FUN_004060a0(short *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int local_40 [8];
  int local_20 [8];
  
  cVar1 = *(char *)(&DAT_00575ab0 + (int)param_1 * 0x82);
  piVar7 = local_40;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = (int)cVar1 << 3;
    piVar7 = piVar7 + 1;
  }
  piVar7 = local_20;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar7 = 8;
    piVar7 = piVar7 + 1;
  }
  param_1 = (short *)(&DAT_00575ada + (int)param_1 * 0x208);
  iVar3 = 1;
  do {
    iVar4 = 0;
    psVar6 = param_1;
    do {
      sVar2 = *psVar6;
      iVar5 = iVar4 + 4;
      *(int *)((int)local_20 + iVar4) = *(int *)((int)local_20 + iVar4) + (int)sVar2;
      *(int *)((int)local_40 + iVar4) = *(int *)((int)local_40 + iVar4) + sVar2 * iVar3;
      psVar6 = psVar6 + 0xb;
      iVar4 = iVar5;
    } while (iVar5 < 0x20);
    iVar3 = iVar3 + 1;
    param_1 = param_1 + 1;
  } while (iVar3 < 10);
  if ((local_20[7] != 0) &&
     ((((local_20[6] != 0 && (param_2 == 1)) ||
       ((local_20[5] != 0 && (local_40[6] = local_40[5], local_20[6] = local_20[5], param_2 == 2))))
      || ((local_20[3] != 0 && (local_40[6] = local_40[3], local_20[6] = local_20[3], param_2 == 4))
         )))) {
    return (local_40[6] * 100) / local_20[6] - (local_40[7] * 100) / local_20[7];
  }
  return 0;
}

