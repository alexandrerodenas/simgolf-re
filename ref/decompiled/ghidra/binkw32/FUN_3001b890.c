/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001b890 @ 0x3001B890 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3001b890(int param_1,float *param_2,int param_3,int param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = param_1 >> 1;
  iVar5 = (param_3 * 2) / iVar9;
  if (2 < iVar9) {
    iVar1 = iVar5 * 4;
    iVar5 = iVar5 * -4;
    iVar10 = param_4 + param_3 * 4;
    uVar8 = iVar9 - 1U >> 1;
    pfVar6 = param_2 + param_1 + -2;
    do {
      pfVar7 = param_2 + 2;
      fVar3 = _DAT_30033fc0 - *(float *)(iVar10 + iVar5);
      iVar10 = iVar10 + iVar5;
      fVar2 = *(float *)(param_4 + iVar1);
      param_4 = param_4 + iVar1;
      uVar8 = uVar8 - 1;
      fVar4 = (*pfVar7 - *pfVar6) * fVar3 - (pfVar6[1] + param_2[3]) * fVar2;
      fVar2 = (pfVar6[1] + param_2[3]) * fVar3 + (*pfVar7 - *pfVar6) * fVar2;
      *pfVar7 = *pfVar7 - fVar4;
      param_2[3] = param_2[3] - fVar2;
      *pfVar6 = fVar4 + *pfVar6;
      pfVar6[1] = pfVar6[1] - fVar2;
      pfVar6 = pfVar6 + -2;
      param_2 = pfVar7;
    } while (uVar8 != 0);
  }
  return;
}

