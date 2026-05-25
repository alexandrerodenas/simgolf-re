/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_30017680 @ 0x30017680 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30017680(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = param_1;
  *(int *)(param_2 + 4) = param_1;
  if (1 < param_1) {
    iVar2 = param_1 >> 1;
    fVar6 = (float10)fpatan((float10)_DAT_30033fb0,(float10)1);
    param_1 = 1;
    fVar4 = (float10)fcos((float10)iVar2 * (float10)(float)(fVar6 / (float10)iVar2));
    *param_3 = (float)fVar4;
    param_3[iVar2] = (float)(fVar4 * (float10)_DAT_30033fc0);
    if (1 < iVar2) {
      pfVar3 = param_3 + iVar1 + -1;
      do {
        param_3 = param_3 + 1;
        fVar4 = (float10)param_1;
        param_1 = param_1 + 1;
        fVar4 = fVar4 * (float10)(float)(fVar6 / (float10)iVar2);
        fVar5 = (float10)fcos(fVar4);
        *param_3 = (float)(fVar5 * (float10)_DAT_30033fd0);
        fVar4 = (float10)fsin(fVar4);
        *pfVar3 = (float)(fVar4 * (float10)_DAT_30033fd0);
        pfVar3 = pfVar3 + -1;
      } while (param_1 < iVar2);
    }
  }
  return;
}

