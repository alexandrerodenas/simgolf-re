/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001c1a0 @ 0x3001C1A0 */


void __cdecl FUN_3001c1a0(int param_1,int param_2,short *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_12c;
  int local_100 [16];
  int local_c0 [8];
  int local_a0 [8];
  int local_80 [8];
  int local_60 [8];
  int local_40 [8];
  int local_20 [8];
  
  piVar2 = local_100;
  local_12c = 8;
  do {
    if ((((((param_3[8] == 0 && param_3[0x10] == 0) && param_3[0x18] == 0) && param_3[0x20] == 0) &&
         param_3[0x28] == 0) && param_3[0x30] == 0) && param_3[0x38] == 0) {
      iVar4 = (int)*param_3 * *param_4 >> 0xb;
      *piVar2 = iVar4;
      piVar2[8] = iVar4;
      piVar2[0x10] = iVar4;
      piVar2[0x18] = iVar4;
      piVar2[0x20] = iVar4;
      piVar2[0x28] = iVar4;
      piVar2[0x30] = iVar4;
      piVar2[0x38] = iVar4;
    }
    else {
      iVar6 = param_4[0x20] * (int)param_3[0x20] >> 0xb;
      iVar11 = param_4[0x10] * (int)param_3[0x10] >> 0xb;
      iVar12 = (int)*param_3 * *param_4 >> 0xb;
      iVar4 = iVar6 + iVar12;
      iVar12 = iVar12 - iVar6;
      iVar8 = param_4[0x30] * (int)param_3[0x30] >> 0xb;
      iVar6 = iVar8 + iVar11;
      iVar1 = iVar6 + iVar4;
      iVar4 = iVar4 - iVar6;
      iVar6 = ((iVar11 - iVar8) * 0xb50 >> 0xb) - iVar6;
      iVar8 = iVar6 + iVar12;
      iVar12 = iVar12 - iVar6;
      iVar6 = param_4[0x18] * (int)param_3[0x18] >> 0xb;
      iVar10 = param_4[0x28] * (int)param_3[0x28] >> 0xb;
      iVar5 = iVar6 + iVar10;
      iVar10 = iVar10 - iVar6;
      iVar7 = param_4[0x38] * (int)param_3[0x38] >> 0xb;
      iVar11 = param_4[8] * (int)param_3[8] >> 0xb;
      iVar6 = iVar7 + iVar11;
      iVar11 = iVar11 - iVar7;
      iVar7 = iVar6 + iVar5;
      iVar9 = (iVar11 + iVar10) * 0xec8 >> 0xb;
      iVar10 = ((iVar10 * -0x14e8 >> 0xb) - iVar7) + iVar9;
      iVar5 = ((iVar6 - iVar5) * 0xb50 >> 0xb) - iVar10;
      iVar6 = ((iVar11 * 0x8a9 >> 0xb) - iVar9) + iVar5;
      *piVar2 = iVar1 + iVar7;
      piVar2[0x38] = iVar1 - iVar7;
      piVar2[0x30] = iVar8 - iVar10;
      piVar2[0x28] = iVar12 - iVar5;
      piVar2[0x10] = iVar5 + iVar12;
      piVar2[8] = iVar10 + iVar8;
      piVar2[0x20] = iVar6 + iVar4;
      piVar2[0x18] = iVar4 - iVar6;
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + 1;
    piVar2 = piVar2 + 1;
    local_12c = local_12c + -1;
  } while (local_12c != 0);
  puVar3 = (undefined1 *)(param_1 + 1);
  piVar2 = local_100 + 6;
  local_12c = 8;
  do {
    iVar4 = piVar2[-6] + piVar2[-2];
    iVar5 = piVar2[-6] - piVar2[-2];
    iVar6 = piVar2[-4] + *piVar2;
    iVar1 = iVar6 + iVar4;
    iVar4 = iVar4 - iVar6;
    iVar6 = ((piVar2[-4] - *piVar2) * 0xb50 >> 0xb) - iVar6;
    iVar8 = iVar6 + iVar5;
    iVar5 = iVar5 - iVar6;
    iVar6 = piVar2[-3] + piVar2[-1];
    iVar7 = piVar2[-1] - piVar2[-3];
    iVar12 = piVar2[1] + piVar2[-5];
    iVar10 = piVar2[-5] - piVar2[1];
    iVar11 = iVar12 + iVar6;
    iVar9 = (iVar7 + iVar10) * 0xec8 >> 0xb;
    iVar7 = ((iVar7 * -0x14e8 >> 0xb) - iVar11) + iVar9;
    puVar3[-1] = (char)((uint)(iVar11 + 0x7f + iVar1) >> 8);
    iVar12 = ((iVar12 - iVar6) * 0xb50 >> 0xb) - iVar7;
    iVar6 = ((iVar10 * 0x8a9 >> 0xb) - iVar9) + iVar12;
    puVar3[6] = (char)((uint)((iVar1 - iVar11) + 0x7f) >> 8);
    puVar3[5] = (char)((uint)((iVar8 - iVar7) + 0x7f) >> 8);
    puVar3[1] = (char)((uint)(iVar12 + 0x7f + iVar5) >> 8);
    puVar3[4] = (char)((uint)((iVar5 - iVar12) + 0x7f) >> 8);
    puVar3[3] = (char)((uint)(iVar4 + 0x7f + iVar6) >> 8);
    puVar3[2] = (char)((uint)((iVar4 - iVar6) + 0x7f) >> 8);
    *puVar3 = (char)((uint)(iVar7 + 0x7f + iVar8) >> 8);
    piVar2 = piVar2 + 8;
    puVar3 = puVar3 + param_2;
    local_12c = local_12c + -1;
  } while (local_12c != 0);
  return;
}

