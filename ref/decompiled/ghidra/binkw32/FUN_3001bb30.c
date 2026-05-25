/* Ghidra decompiled: binkw32.dll */
/* Function: FUN_3001bb30 @ 0x3001BB30 */


void FUN_3001bb30(int *param_1,int *param_2,int *param_3,int param_4,int *param_5)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  
  uVar3 = FUN_3001bc20();
  uVar5 = 0;
  if (param_1[5] == 0) {
    uVar6 = param_1[2];
    if (uVar6 != 0) {
      piVar8 = param_1 + 0x921;
      do {
        psVar1 = (short *)(param_1[4] + uVar5 * 2);
        iVar2 = *piVar8;
        iVar4 = uVar6 - uVar5;
        iVar7 = (int)*psVar1 * uVar5;
        uVar5 = uVar5 + 1;
        piVar8 = (int *)((int)piVar8 + 2);
        *psVar1 = (short)((uint)(iVar4 * (short)iVar2 + iVar7) / uVar6);
      } while (uVar5 < uVar6);
    }
  }
  else {
    param_1[5] = 0;
  }
  uVar5 = param_1[2];
  piVar8 = (int *)(param_1[4] + (*param_1 - uVar5) * 2);
  piVar9 = param_1 + 0x921;
  for (uVar6 = (uVar5 & 0x7fffffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  for (uVar5 = uVar5 * 2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)piVar9 = (char)*piVar8;
    piVar8 = (int *)((int)piVar8 + 1);
    piVar9 = (int *)((int)piVar9 + 1);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (param_1[2] * 0x7fffffff + *param_1) * 2;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = param_1[4];
  }
  if (param_5 != (int *)0x0) {
    *param_5 = uVar3 + param_4;
  }
  return;
}

