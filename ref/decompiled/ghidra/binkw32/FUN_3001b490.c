/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b490 @ 0x3001B490 */


void __cdecl FUN_3001b490(float *param_1,int param_2)

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
  float fVar21;
  float fVar22;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar8 = *(float *)(param_2 + 0x10);
  fVar9 = *(float *)(param_2 + 0x14);
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[9];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[8];
  fVar10 = ((param_1[4] - param_1[0xd]) - (param_1[0xc] + param_1[5])) * fVar1;
  fVar11 = (param_1[0xc] + param_1[5] + (param_1[4] - param_1[0xd])) * fVar1;
  fVar12 = ((param_1[0xd] + param_1[4]) - (param_1[5] - param_1[0xc])) * fVar1;
  fVar1 = ((param_1[5] - param_1[0xc]) + param_1[0xd] + param_1[4]) * fVar1;
  fVar16 = (param_1[2] - param_1[0xb]) * fVar8 - (param_1[3] + param_1[10]) * fVar9;
  fVar13 = (param_1[3] + param_1[10]) * fVar8 + (param_1[2] - param_1[0xb]) * fVar9;
  fVar18 = (param_1[0xb] + param_1[2]) * fVar9 - (param_1[3] - param_1[10]) * fVar8;
  fVar17 = (param_1[0xb] + param_1[2]) * fVar8 + (param_1[3] - param_1[10]) * fVar9;
  fVar15 = (param_1[6] - param_1[0xf]) * fVar9 - (param_1[7] + param_1[0xe]) * fVar8;
  fVar14 = (param_1[6] - param_1[0xf]) * fVar8 + (param_1[7] + param_1[0xe]) * fVar9;
  fVar19 = (param_1[0xf] + param_1[6]) * fVar8 - (param_1[7] - param_1[0xe]) * fVar9;
  fVar8 = (param_1[7] - param_1[0xe]) * fVar8 + (param_1[0xf] + param_1[6]) * fVar9;
  fVar20 = fVar10 + (fVar2 - param_1[9]);
  fVar22 = fVar11 + param_1[8] + fVar3;
  fVar21 = fVar15 + fVar16;
  fVar9 = fVar14 + fVar13;
  *param_1 = fVar21 + fVar20;
  param_1[1] = fVar9 + fVar22;
  param_1[2] = fVar20 - fVar21;
  param_1[3] = fVar22 - fVar9;
  fVar10 = (fVar2 - param_1[9]) - fVar10;
  fVar11 = (param_1[8] + fVar3) - fVar11;
  fVar16 = fVar16 - fVar15;
  fVar13 = fVar13 - fVar14;
  param_1[4] = fVar10 - fVar13;
  param_1[5] = fVar16 + fVar11;
  param_1[6] = fVar13 + fVar10;
  param_1[7] = fVar11 - fVar16;
  fVar2 = (fVar4 + fVar5) - fVar1;
  fVar9 = fVar12 + (fVar6 - fVar7);
  fVar3 = fVar18 - fVar19;
  fVar10 = fVar17 - fVar8;
  param_1[8] = fVar3 + fVar2;
  param_1[9] = fVar10 + fVar9;
  param_1[10] = fVar2 - fVar3;
  param_1[0xb] = fVar9 - fVar10;
  fVar1 = fVar1 + fVar4 + fVar5;
  fVar12 = (fVar6 - fVar7) - fVar12;
  fVar19 = fVar19 + fVar18;
  fVar8 = fVar8 + fVar17;
  param_1[0xc] = fVar1 - fVar8;
  param_1[0xd] = fVar19 + fVar12;
  param_1[0xe] = fVar8 + fVar1;
  param_1[0xf] = fVar12 - fVar19;
  return;
}

