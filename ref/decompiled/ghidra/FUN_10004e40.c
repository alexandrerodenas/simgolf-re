/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004e40 @ 0x10004E40 */
/* Body size: 205 addresses */


float * __thiscall FUN_10004e40(void *this,float *param_1,float *param_2)

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
  int iVar15;
  undefined4 *puVar16;
  undefined4 local_54 [20];
  
  puVar16 = local_54;
  for (iVar15 = 0x14; iVar15 != 0; iVar15 = iVar15 + -1) {
    *puVar16 = 0xcccccccc;
    puVar16 = puVar16 + 1;
  }
  fVar1 = *(float *)((int)this + 8);
  fVar2 = *param_2;
  fVar3 = *(float *)((int)this + 0x18);
  fVar4 = param_2[1];
  fVar5 = *(float *)((int)this + 0x28);
  fVar6 = param_2[2];
  fVar7 = *(float *)((int)this + 0x38);
  fVar8 = *(float *)((int)this + 0xc);
  fVar9 = *param_2;
  fVar10 = *(float *)((int)this + 0x1c);
  fVar11 = param_2[1];
  fVar12 = *(float *)((int)this + 0x2c);
  fVar13 = param_2[2];
  fVar14 = *(float *)((int)this + 0x3c);
  *param_1 = *(float *)((int)this + 0x24) * param_2[2] +
             *(float *)((int)this + 0x14) * param_2[1] + *(float *)((int)this + 4) * *param_2 +
             *(float *)((int)this + 0x34);
  param_1[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  param_1[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  return param_1;
}

