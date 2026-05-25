/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30019e90 @ 0x30019E90 */


void __cdecl FUN_30019e90(int param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *local_34;
  float *local_30;
  float *local_2c;
  float *local_28;
  float *local_10;
  float *local_c;
  uint local_8;
  
  fVar1 = *(float *)(param_3 + 4);
  iVar24 = param_1 >> 3;
  fVar2 = *param_2;
  fVar3 = param_2[iVar24 * 4 + 1];
  fVar4 = param_2[1];
  fVar5 = param_2[iVar24 * 4];
  fVar6 = param_2[iVar24 * 4 + 1];
  fVar7 = *param_2;
  fVar8 = param_2[1];
  fVar9 = param_2[iVar24 * 4];
  fVar10 = param_2[iVar24 * 2];
  fVar11 = param_2[iVar24 * 6 + 1];
  fVar12 = param_2[iVar24 * 2 + 1];
  fVar13 = param_2[iVar24 * 6];
  fVar14 = ((param_2[iVar24 * 2] - param_2[iVar24 * 6 + 1]) -
           (param_2[iVar24 * 6] + param_2[iVar24 * 2 + 1])) * fVar1;
  fVar15 = (param_2[iVar24 * 6] + param_2[iVar24 * 2 + 1] +
           (param_2[iVar24 * 2] - param_2[iVar24 * 6 + 1])) * fVar1;
  *param_2 = fVar14 + (fVar2 - fVar3);
  param_2[1] = fVar15 + fVar4 + fVar5;
  param_2[iVar24 * 2] = (fVar2 - fVar3) - fVar14;
  param_2[iVar24 * 2 + 1] = (fVar4 + fVar5) - fVar15;
  fVar2 = ((fVar10 + fVar11) - (fVar12 - fVar13)) * fVar1;
  fVar1 = ((fVar12 - fVar13) + fVar10 + fVar11) * fVar1;
  param_2[iVar24 * 4] = (fVar6 + fVar7) - fVar1;
  param_2[iVar24 * 4 + 1] = fVar2 + (fVar8 - fVar9);
  param_2[iVar24 * 6] = fVar1 + fVar6 + fVar7;
  param_2[iVar24 * 6 + 1] = (fVar8 - fVar9) - fVar2;
  if (2 < iVar24) {
    local_2c = param_2 + iVar24 * 2 + -2;
    local_30 = param_2 + iVar24 * 4 + -2;
    local_8 = iVar24 - 1U >> 1;
    pfVar28 = param_2 + iVar24 * 2 + 2;
    pfVar27 = param_2 + iVar24 * 4 + 2;
    pfVar21 = param_2 + iVar24 * 6;
    pfVar22 = param_2;
    local_28 = param_2 + iVar24 * 8 + -2;
    local_10 = (float *)(param_3 + 8);
    local_c = (float *)(param_3 + 8 + iVar24 * 0x10);
    pfVar23 = param_2 + iVar24 * 6;
    do {
      local_34 = pfVar23 + -2;
      pfVar26 = pfVar22 + 2;
      pfVar25 = pfVar21 + 2;
      fVar1 = local_10[2];
      fVar2 = local_10[3];
      fVar13 = local_10[4];
      fVar17 = -local_10[5];
      fVar3 = local_c[-6];
      fVar4 = local_c[-5];
      fVar14 = local_c[-4];
      fVar20 = -local_c[-3];
      fVar5 = *pfVar26;
      fVar6 = pfVar27[1];
      fVar7 = pfVar22[3];
      fVar8 = *pfVar27;
      fVar9 = *pfVar28;
      fVar10 = pfVar21[3];
      fVar11 = pfVar28[1];
      fVar12 = *pfVar25;
      fVar16 = fVar1 * (*pfVar26 - pfVar27[1]) - fVar2 * (pfVar22[3] + *pfVar27);
      fVar15 = fVar2 * (*pfVar26 - pfVar27[1]) + fVar1 * (pfVar22[3] + *pfVar27);
      fVar19 = fVar4 * (*pfVar28 - pfVar21[3]) - fVar3 * (pfVar28[1] + *pfVar25);
      fVar18 = fVar3 * (*pfVar28 - pfVar21[3]) + fVar4 * (pfVar28[1] + *pfVar25);
      *pfVar26 = fVar19 + fVar16;
      pfVar22[3] = fVar18 + fVar15;
      *pfVar28 = fVar16 - fVar19;
      pfVar28[1] = fVar15 - fVar18;
      fVar15 = fVar13 * (fVar5 + fVar6) + fVar17 * (fVar7 - fVar8);
      fVar6 = fVar13 * (fVar7 - fVar8) - fVar17 * (fVar5 + fVar6);
      fVar5 = fVar20 * (fVar9 + fVar10) + fVar14 * (fVar11 - fVar12);
      fVar7 = fVar20 * (fVar11 - fVar12) - fVar14 * (fVar9 + fVar10);
      *pfVar27 = fVar5 + fVar15;
      pfVar27[1] = fVar7 + fVar6;
      *pfVar25 = fVar15 - fVar5;
      pfVar21[3] = fVar6 - fVar7;
      fVar5 = *local_2c;
      fVar6 = pfVar23[-1];
      fVar7 = local_2c[1];
      fVar8 = *local_34;
      fVar9 = local_28[1];
      fVar10 = *local_30;
      fVar11 = local_30[1];
      fVar12 = *local_28;
      fVar15 = fVar3 * (*local_2c - pfVar23[-1]) - fVar4 * (*local_34 + local_2c[1]);
      fVar4 = fVar4 * (*local_2c - pfVar23[-1]) + fVar3 * (*local_34 + local_2c[1]);
      pfVar27 = pfVar27 + 2;
      pfVar28 = pfVar28 + 2;
      fVar3 = fVar2 * (*local_30 - local_28[1]) - fVar1 * (local_30[1] + *local_28);
      fVar1 = fVar1 * (*local_30 - local_28[1]) + fVar2 * (local_30[1] + *local_28);
      *local_2c = fVar3 + fVar15;
      local_2c[1] = fVar1 + fVar4;
      *local_30 = fVar15 - fVar3;
      local_30[1] = fVar4 - fVar1;
      fVar1 = fVar14 * (fVar5 + fVar6) + fVar20 * (fVar7 - fVar8);
      fVar3 = fVar14 * (fVar7 - fVar8) - fVar20 * (fVar5 + fVar6);
      fVar2 = fVar17 * (fVar9 + fVar10) + fVar13 * (fVar11 - fVar12);
      fVar4 = fVar17 * (fVar11 - fVar12) - fVar13 * (fVar9 + fVar10);
      *local_34 = fVar2 + fVar1;
      pfVar23[-1] = fVar4 + fVar3;
      *local_28 = fVar1 - fVar2;
      local_28[1] = fVar3 - fVar4;
      local_30 = local_30 + -2;
      local_2c = local_2c + -2;
      local_8 = local_8 - 1;
      pfVar21 = pfVar25;
      pfVar22 = pfVar26;
      local_28 = local_28 + -2;
      local_10 = local_10 + 4;
      local_c = local_c + -4;
      pfVar23 = local_34;
    } while (local_8 != 0);
  }
  fVar1 = *(float *)(param_3 + iVar24 * 8);
  fVar2 = *(float *)(param_3 + 4 + iVar24 * 8);
  fVar3 = param_2[iVar24];
  fVar4 = param_2[iVar24 * 5 + 1];
  fVar5 = param_2[iVar24 + 1];
  fVar6 = param_2[iVar24 * 5];
  fVar7 = param_2[iVar24 * 3];
  fVar8 = param_2[iVar24 * 7 + 1];
  fVar9 = param_2[iVar24 * 3 + 1];
  fVar10 = param_2[iVar24 * 7];
  fVar14 = fVar1 * (param_2[iVar24] - param_2[iVar24 * 5 + 1]) -
           fVar2 * (param_2[iVar24 + 1] + param_2[iVar24 * 5]);
  fVar13 = fVar2 * (param_2[iVar24] - param_2[iVar24 * 5 + 1]) +
           fVar1 * (param_2[iVar24 + 1] + param_2[iVar24 * 5]);
  fVar12 = fVar2 * (param_2[iVar24 * 3] - param_2[iVar24 * 7 + 1]) -
           fVar1 * (param_2[iVar24 * 7] + param_2[iVar24 * 3 + 1]);
  fVar11 = fVar1 * (param_2[iVar24 * 3] - param_2[iVar24 * 7 + 1]) +
           fVar2 * (param_2[iVar24 * 7] + param_2[iVar24 * 3 + 1]);
  param_2[iVar24] = fVar12 + fVar14;
  param_2[iVar24 + 1] = fVar11 + fVar13;
  param_2[iVar24 * 3] = fVar14 - fVar12;
  param_2[iVar24 * 3 + 1] = fVar13 - fVar11;
  fVar11 = fVar2 * (fVar3 + fVar4) - fVar1 * (fVar5 - fVar6);
  fVar4 = fVar1 * (fVar3 + fVar4) + fVar2 * (fVar5 - fVar6);
  fVar3 = fVar1 * (fVar7 + fVar8) - fVar2 * (fVar9 - fVar10);
  fVar1 = fVar2 * (fVar7 + fVar8) + fVar1 * (fVar9 - fVar10);
  param_2[iVar24 * 5] = fVar11 - fVar3;
  param_2[iVar24 * 5 + 1] = fVar4 - fVar1;
  param_2[iVar24 * 7] = fVar3 + fVar11;
  param_2[iVar24 * 7 + 1] = fVar1 + fVar4;
  return;
}

