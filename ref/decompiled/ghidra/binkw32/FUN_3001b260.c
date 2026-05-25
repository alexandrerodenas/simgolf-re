/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b260 @ 0x3001B260 */


void __cdecl FUN_3001b260(float *param_1,int param_2)

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
  
  fVar1 = *(float *)(param_2 + 4);
  fVar5 = param_1[4] + param_1[0xc] + param_1[8] + *param_1;
  fVar7 = param_1[5] + param_1[0xd] + param_1[1] + param_1[9];
  fVar6 = (param_1[8] + *param_1) - (param_1[4] + param_1[0xc]);
  fVar8 = (param_1[1] + param_1[9]) - (param_1[5] + param_1[0xd]);
  fVar9 = (*param_1 - param_1[8]) - (param_1[5] - param_1[0xd]);
  fVar10 = (param_1[4] - param_1[0xc]) + (param_1[1] - param_1[9]);
  fVar11 = (param_1[5] - param_1[0xd]) + (*param_1 - param_1[8]);
  fVar12 = (param_1[1] - param_1[9]) - (param_1[4] - param_1[0xc]);
  fVar13 = param_1[6] + param_1[0xe] + param_1[2] + param_1[10];
  fVar15 = param_1[7] + param_1[0xf] + param_1[3] + param_1[0xb];
  fVar14 = (param_1[2] + param_1[10]) - (param_1[6] + param_1[0xe]);
  fVar16 = (param_1[3] + param_1[0xb]) - (param_1[7] + param_1[0xf]);
  fVar4 = (param_1[2] - param_1[10]) - (param_1[7] - param_1[0xf]);
  fVar3 = (param_1[6] - param_1[0xe]) + (param_1[3] - param_1[0xb]);
  fVar17 = (param_1[7] - param_1[0xf]) + (param_1[2] - param_1[10]);
  fVar18 = (param_1[3] - param_1[0xb]) - (param_1[6] - param_1[0xe]);
  fVar2 = (fVar4 - fVar3) * fVar1;
  fVar3 = (fVar3 + fVar4) * fVar1;
  fVar4 = (fVar17 - fVar18) * fVar1;
  fVar1 = (fVar18 + fVar17) * fVar1;
  param_1[8] = fVar2 + fVar9;
  param_1[9] = fVar3 + fVar10;
  param_1[10] = fVar9 - fVar2;
  param_1[0xb] = fVar10 - fVar3;
  param_1[0xc] = fVar11 - fVar1;
  param_1[0xd] = fVar4 + fVar12;
  param_1[0xe] = fVar1 + fVar11;
  param_1[0xf] = fVar12 - fVar4;
  *param_1 = fVar13 + fVar5;
  param_1[1] = fVar15 + fVar7;
  param_1[2] = fVar5 - fVar13;
  param_1[3] = fVar7 - fVar15;
  param_1[4] = fVar6 - fVar16;
  param_1[5] = fVar14 + fVar8;
  param_1[6] = fVar16 + fVar6;
  param_1[7] = fVar8 - fVar14;
  return;
}

