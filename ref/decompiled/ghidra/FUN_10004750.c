/* Ghidra decompiled: jgld.dll */
/* Function: FUN_10004750 @ 0x10004750 */
/* Body size: 312 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10004750(void *this,float *param_1)

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
  int iVar12;
  undefined4 *puVar13;
  undefined4 local_78 [29];
  
  puVar13 = local_78;
  for (iVar12 = 0x1d; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar13 = 0xcccccccc;
    puVar13 = puVar13 + 1;
  }
  fVar8 = param_1[1] + param_1[1];
  fVar9 = param_1[2] + param_1[2];
  fVar10 = (*param_1 + *param_1) * *param_1;
  fVar1 = *param_1;
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar11 = (*param_1 + *param_1) * param_1[3];
  fVar6 = param_1[3];
  fVar7 = param_1[3];
  *(float *)((int)this + 4) = _DAT_1011d050 - (fVar8 * fVar3 + fVar9 * fVar5);
  *(float *)((int)this + 0x14) = fVar8 * fVar1 - fVar9 * fVar7;
  *(float *)((int)this + 0x24) = fVar9 * fVar2 + fVar8 * fVar6;
  *(float *)((int)this + 8) = fVar8 * fVar1 + fVar9 * fVar7;
  *(float *)((int)this + 0x18) = _DAT_1011d050 - (fVar10 + fVar9 * fVar5);
  *(float *)((int)this + 0x28) = fVar9 * fVar4 - fVar11;
  *(float *)((int)this + 0xc) = fVar9 * fVar2 - fVar8 * fVar6;
  *(float *)((int)this + 0x1c) = fVar9 * fVar4 + fVar11;
  *(float *)((int)this + 0x2c) = _DAT_1011d050 - (fVar10 + fVar8 * fVar3);
  return;
}

