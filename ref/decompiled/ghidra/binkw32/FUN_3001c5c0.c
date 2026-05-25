/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c5c0 @ 0x3001C5C0 */


void __cdecl FUN_3001c5c0(int param_1,int param_2,short *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_13c;
  int local_134;
  uint *local_10c;
  uint *local_108;
  int local_100 [16];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  int local_20 [8];
  
  local_108 = (uint *)(param_1 + param_2);
  piVar2 = local_100;
  local_13c = 8;
  do {
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar7 = (int)*param_3 * *param_4 >> 0xb;
      *piVar2 = iVar7;
      piVar2[8] = iVar7;
      piVar2[0x10] = iVar7;
      piVar2[0x18] = iVar7;
      piVar2[0x20] = iVar7;
      piVar2[0x28] = iVar7;
      piVar2[0x30] = iVar7;
      piVar2[0x38] = iVar7;
    }
    else {
      iVar16 = param_4[0x20] * (int)param_3[0x20] >> 0xb;
      iVar9 = param_4[0x10] * (int)param_3[0x10] >> 0xb;
      iVar3 = (int)*param_3 * *param_4 >> 0xb;
      iVar7 = iVar16 + iVar3;
      iVar3 = iVar3 - iVar16;
      iVar8 = param_4[0x30] * (int)param_3[0x30] >> 0xb;
      iVar16 = iVar8 + iVar9;
      iVar1 = iVar16 + iVar7;
      iVar7 = iVar7 - iVar16;
      iVar16 = ((iVar9 - iVar8) * 0xb50 >> 0xb) - iVar16;
      iVar8 = iVar16 + iVar3;
      iVar3 = iVar3 - iVar16;
      iVar16 = param_4[0x18] * (int)param_3[0x18] >> 0xb;
      iVar14 = param_4[0x28] * (int)param_3[0x28] >> 0xb;
      iVar10 = iVar16 + iVar14;
      iVar14 = iVar14 - iVar16;
      iVar11 = param_4[0x38] * (int)param_3[0x38] >> 0xb;
      iVar9 = param_4[8] * (int)param_3[8] >> 0xb;
      iVar16 = iVar11 + iVar9;
      iVar9 = iVar9 - iVar11;
      iVar11 = iVar16 + iVar10;
      iVar13 = (iVar9 + iVar14) * 0xec8 >> 0xb;
      iVar14 = ((iVar14 * -0x14e8 >> 0xb) - iVar11) + iVar13;
      iVar10 = ((iVar16 - iVar10) * 0xb50 >> 0xb) - iVar14;
      iVar16 = ((iVar9 * 0x8a9 >> 0xb) - iVar13) + iVar10;
      *piVar2 = iVar11 + iVar1;
      piVar2[0x38] = iVar1 - iVar11;
      piVar2[0x30] = iVar8 - iVar14;
      piVar2[0x28] = iVar3 - iVar10;
      piVar2[0x10] = iVar10 + iVar3;
      piVar2[8] = iVar14 + iVar8;
      piVar2[0x20] = iVar16 + iVar7;
      piVar2[0x18] = iVar7 - iVar16;
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    piVar2 = piVar2 + 1;
    local_13c = local_13c + -1;
  } while (local_13c != 0);
  local_10c = (uint *)(param_1 + 8);
  piVar2 = local_100 + 6;
  local_134 = 8;
  do {
    iVar7 = piVar2[-6] + piVar2[-2];
    iVar3 = piVar2[-6] - piVar2[-2];
    iVar16 = piVar2[-4] + *piVar2;
    iVar8 = ((piVar2[-4] - *piVar2) * 0xb50 >> 0xb) - iVar16;
    iVar1 = iVar16 + iVar7;
    iVar7 = iVar7 - iVar16;
    iVar16 = iVar8 + iVar3;
    iVar3 = iVar3 - iVar8;
    iVar8 = piVar2[-3] + piVar2[-1];
    iVar9 = piVar2[-1] - piVar2[-3];
    iVar14 = piVar2[1] + piVar2[-5];
    iVar10 = piVar2[-5] - piVar2[1];
    iVar11 = iVar14 + iVar8;
    iVar15 = (iVar10 + iVar9) * 0xec8 >> 0xb;
    iVar13 = ((iVar9 * -0x14e8 >> 0xb) - iVar11) + iVar15;
    iVar8 = ((iVar14 - iVar8) * 0xb50 >> 0xb) - iVar13;
    iVar9 = ((iVar10 * 0x8a9 >> 0xb) - iVar15) + iVar8;
    uVar12 = (iVar13 + 0x7f + iVar16 >> 8 & 0xffU) << 0x10 | iVar1 + 0x7f + iVar11 >> 8 & 0xffU;
    uVar4 = ((iVar1 - iVar11) + 0x7f >> 8 & 0xffU) << 0x10 | (iVar16 - iVar13) + 0x7f >> 8 & 0xffU;
    uVar5 = ((iVar3 - iVar8) + 0x7f >> 8 & 0xffU) << 0x10 | iVar9 + 0x7f + iVar7 >> 8 & 0xffU;
    uVar6 = ((iVar7 - iVar9) + 0x7f >> 8 & 0xffU) << 0x10 | iVar8 + 0x7f + iVar3 >> 8 & 0xffU;
    uVar12 = uVar12 | uVar12 << 8;
    uVar4 = uVar4 | uVar4 << 8;
    uVar5 = uVar5 | uVar5 << 8;
    uVar6 = uVar6 | uVar6 << 8;
    *local_10c = uVar5;
    local_10c[-2] = uVar12;
    local_10c[-1] = uVar6;
    local_10c[1] = uVar4;
    local_108[2] = uVar5;
    local_10c = (uint *)((int)local_10c + param_2 * 2);
    *local_108 = uVar12;
    local_108[1] = uVar6;
    local_108[3] = uVar4;
    local_108 = (uint *)((int)local_108 + param_2 * 2);
    piVar2 = piVar2 + 8;
    local_134 = local_134 + -1;
  } while (local_134 != 0);
  return;
}

