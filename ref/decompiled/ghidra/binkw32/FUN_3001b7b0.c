/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b7b0 @ 0x3001B7B0 */


void __cdecl FUN_3001b7b0(float *param_1)

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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_1;
  fVar4 = param_1[4];
  fVar5 = param_1[1];
  fVar6 = param_1[5];
  fVar7 = param_1[2];
  fVar8 = param_1[6];
  fVar9 = param_1[3];
  *param_1 = param_1[6] + param_1[2] + fVar1 + param_1[4];
  param_1[1] = param_1[3] + param_1[7] + fVar2 + param_1[5];
  param_1[4] = (fVar1 + param_1[4]) - (param_1[6] + param_1[2]);
  param_1[5] = (fVar2 + param_1[5]) - (param_1[3] + param_1[7]);
  param_1[2] = (fVar9 - param_1[7]) + (fVar3 - fVar4);
  param_1[3] = (fVar5 - fVar6) - (fVar7 - fVar8);
  param_1[6] = (fVar3 - fVar4) - (fVar9 - param_1[7]);
  param_1[7] = (fVar7 - fVar8) + (fVar5 - fVar6);
  return;
}

