/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10003e50 @ 0x10003E50 */
/* Body size: 146 addresses */


float * __thiscall FUN_10003e50(void *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 local_54 [20];
  
  puVar10 = local_54;
  for (iVar9 = 0x14; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar10 = 0xcccccccc;
    puVar10 = puVar10 + 1;
  }
  fVar1 = *(float *)this;
  fVar2 = param_2[2];
  fVar3 = *(float *)((int)this + 8);
  fVar4 = *param_2;
  fVar5 = *(float *)this;
  fVar6 = param_2[1];
  fVar7 = *(float *)((int)this + 4);
  fVar8 = *param_2;
  *param_1 = *(float *)((int)this + 4) * param_2[2] - *(float *)((int)this + 8) * param_2[1];
  param_1[1] = fVar3 * fVar4 + -fVar1 * fVar2;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return param_1;
}

