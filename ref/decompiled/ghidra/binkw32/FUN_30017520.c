/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017520 @ 0x30017520 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30017520(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  *param_2 = param_1;
  param_2[1] = 1;
  if (2 < param_1) {
    iVar10 = param_1 >> 1;
    fVar15 = (float10)fpatan((float10)_DAT_30033fb0,(float10)1);
    *param_3 = 0x3f800000;
    fVar2 = (float)(fVar15 / (float10)iVar10);
    fVar15 = (float10)fcos((float10)iVar10 * (float10)fVar2);
    param_3[1] = (float)fVar15;
    if (3 < iVar10) {
      fVar12 = (float10)fcos((float10)fVar2 + (float10)fVar2);
      param_3[2] = (float)((float10)_DAT_30033fd0 / fVar12);
      fVar12 = (float10)fcos((float10)fVar2 * (float10)_DAT_30033fe4);
      param_3[3] = (float)((float10)_DAT_30033fd0 / fVar12);
    }
    param_2 = (int *)0x4;
    if (4 < iVar10) {
      pfVar7 = (float *)(param_3 + 6);
      do {
        fVar13 = (float10)(int)param_2;
        param_2 = param_2 + 1;
        fVar13 = fVar13 * (float10)fVar2;
        fVar12 = (float10)fcos(fVar13);
        pfVar7[-2] = (float)fVar12;
        fVar12 = (float10)fsin(fVar13);
        pfVar7[-1] = (float)fVar12;
        fVar12 = (float10)_DAT_30033fe0;
        fVar14 = (float10)fcos(fVar13 * fVar12);
        *pfVar7 = (float)fVar14;
        fVar12 = (float10)fsin(fVar13 * fVar12);
        pfVar7[1] = (float)fVar12;
        pfVar7 = pfVar7 + 4;
      } while ((int)param_2 < iVar10);
    }
    iVar1 = 0;
    while (iVar6 = iVar1, 2 < iVar10) {
      iVar1 = iVar6 + iVar10;
      iVar10 = iVar10 >> 1;
      param_3[iVar1] = 0x3f800000;
      param_3[iVar1 + 1] = (float)fVar15;
      if (3 < iVar10) {
        fVar2 = (float)param_3[iVar6 + 6];
        param_3[iVar1 + 2] = _DAT_30033fc0 / (float)param_3[iVar6 + 4];
        param_3[iVar1 + 3] = _DAT_30033fc0 / fVar2;
        if (4 < iVar10) {
          puVar8 = param_3 + iVar1 + 5;
          puVar9 = param_3 + iVar6 + 10;
          uVar11 = iVar10 - 1U >> 2;
          do {
            uVar4 = *puVar9;
            uVar3 = puVar9[-1];
            uVar5 = puVar9[1];
            puVar8[-1] = puVar9[-2];
            *puVar8 = uVar3;
            puVar8[1] = uVar4;
            puVar8[2] = uVar5;
            puVar8 = puVar8 + 4;
            puVar9 = puVar9 + 8;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
      }
    }
  }
  return;
}

