/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001ca30 @ 0x3001CA30 */


void FUN_3001ca30(int param_1,int param_2,short *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int local_130;
  int local_12c;
  int local_100 [16];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  int local_20 [8];
  
  piVar2 = (int *)(&DAT_30035fec + param_4 * 0x100);
  piVar1 = local_100;
  local_130 = 8;
  do {
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar4 = (int)*param_3 * *piVar2 >> 0xb;
      *piVar1 = iVar4;
      piVar1[8] = iVar4;
      piVar1[0x10] = iVar4;
      piVar1[0x18] = iVar4;
      piVar1[0x20] = iVar4;
      piVar1[0x28] = iVar4;
      piVar1[0x30] = iVar4;
      piVar1[0x38] = iVar4;
    }
    else {
      iVar9 = piVar2[0x20] * (int)param_3[0x20] >> 0xb;
      iVar7 = piVar2[0x10] * (int)param_3[0x10] >> 0xb;
      iVar5 = (int)*param_3 * *piVar2 >> 0xb;
      iVar4 = iVar9 + iVar5;
      iVar5 = iVar5 - iVar9;
      iVar13 = piVar2[0x30] * (int)param_3[0x30] >> 0xb;
      iVar9 = iVar13 + iVar7;
      iVar6 = iVar9 + iVar4;
      iVar4 = iVar4 - iVar9;
      iVar9 = ((iVar7 - iVar13) * 0xb50 >> 0xb) - iVar9;
      iVar13 = iVar9 + iVar5;
      iVar5 = iVar5 - iVar9;
      iVar9 = piVar2[0x18] * (int)param_3[0x18] >> 0xb;
      iVar12 = piVar2[0x28] * (int)param_3[0x28] >> 0xb;
      iVar8 = iVar9 + iVar12;
      iVar12 = iVar12 - iVar9;
      iVar10 = piVar2[0x38] * (int)param_3[0x38] >> 0xb;
      iVar7 = piVar2[8] * (int)param_3[8] >> 0xb;
      iVar9 = iVar10 + iVar7;
      iVar7 = iVar7 - iVar10;
      iVar10 = iVar9 + iVar8;
      iVar11 = (iVar7 + iVar12) * 0xec8 >> 0xb;
      iVar12 = ((iVar12 * -0x14e8 >> 0xb) - iVar10) + iVar11;
      iVar8 = ((iVar9 - iVar8) * 0xb50 >> 0xb) - iVar12;
      iVar9 = ((iVar7 * 0x8a9 >> 0xb) - iVar11) + iVar8;
      *piVar1 = iVar6 + iVar10;
      piVar1[0x38] = iVar6 - iVar10;
      piVar1[0x30] = iVar13 - iVar12;
      piVar1[0x28] = iVar5 - iVar8;
      piVar1[0x10] = iVar8 + iVar5;
      piVar1[8] = iVar12 + iVar13;
      piVar1[0x20] = iVar9 + iVar4;
      piVar1[0x18] = iVar4 - iVar9;
    }
    param_3 = param_3 + 1;
    piVar2 = piVar2 + 1;
    piVar1 = piVar1 + 1;
    local_130 = local_130 + -1;
  } while (local_130 != 0);
  pcVar3 = (char *)(param_1 + 1);
  piVar1 = local_100 + 6;
  local_12c = 8;
  pcVar14 = (char *)(param_5 + 1);
  do {
    iVar4 = piVar1[-6] + piVar1[-2];
    iVar5 = piVar1[-6] - piVar1[-2];
    iVar9 = *piVar1 + piVar1[-4];
    iVar6 = ((piVar1[-4] - *piVar1) * 0xb50 >> 0xb) - iVar9;
    iVar10 = iVar9 + iVar4;
    iVar4 = iVar4 - iVar9;
    iVar9 = iVar6 + iVar5;
    iVar5 = iVar5 - iVar6;
    iVar6 = piVar1[-3] + piVar1[-1];
    iVar7 = piVar1[-1] - piVar1[-3];
    iVar13 = piVar1[-5] + piVar1[1];
    iVar8 = piVar1[-5] - piVar1[1];
    iVar11 = iVar13 + iVar6;
    iVar12 = (iVar8 + iVar7) * 0xec8 >> 0xb;
    iVar7 = ((iVar7 * -0x14e8 >> 0xb) - iVar11) + iVar12;
    iVar13 = ((iVar13 - iVar6) * 0xb50 >> 0xb) - iVar7;
    iVar6 = ((iVar8 * 0x8a9 >> 0xb) - iVar12) + iVar13;
    piVar1 = piVar1 + 8;
    pcVar3[-1] = (char)((uint)(iVar11 + 0x7f + iVar10) >> 8) + pcVar14[-1];
    pcVar3[6] = (char)((uint)((iVar10 - iVar11) + 0x7f) >> 8) + pcVar14[6];
    *pcVar3 = (char)((uint)(iVar7 + 0x7f + iVar9) >> 8) + *pcVar14;
    pcVar3[5] = (char)((uint)((iVar9 - iVar7) + 0x7f) >> 8) + pcVar14[5];
    pcVar3[1] = (char)((uint)(iVar5 + 0x7f + iVar13) >> 8) + pcVar14[1];
    pcVar3[4] = (char)((uint)((iVar5 - iVar13) + 0x7f) >> 8) + pcVar14[4];
    pcVar3[3] = (char)((uint)(iVar4 + 0x7f + iVar6) >> 8) + pcVar14[3];
    pcVar3[2] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8) + pcVar14[2];
    pcVar3 = pcVar3 + param_2;
    local_12c = local_12c + -1;
    pcVar14 = pcVar14 + 8;
  } while (local_12c != 0);
  return;
}

