/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10045750 @ 0x10045750 */
/* Body size: 449 addresses */


void __cdecl FUN_10045750(int param_1,int param_2,byte *param_3,byte *param_4,undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  
  switch(param_5) {
  case 0:
    break;
  case 1:
    uVar3 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    pbVar13 = param_3 + uVar3;
    if (uVar3 < *(uint *)(param_2 + 4)) {
      pbVar12 = pbVar13 + -uVar3;
      iVar4 = *(uint *)(param_2 + 4) - uVar3;
      do {
        *pbVar13 = *pbVar13 + *pbVar12;
        pbVar13 = pbVar13 + 1;
        pbVar12 = pbVar12 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
    break;
  case 2:
    uVar3 = *(uint *)(param_2 + 4);
    uVar5 = 0;
    if (uVar3 != 0) {
      do {
        *param_3 = *param_3 + param_4[uVar5];
        param_3 = param_3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      return;
    }
    break;
  case 3:
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    iVar7 = *(int *)(param_2 + 4) - iVar4;
    pbVar13 = param_3;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      bVar8 = *param_4;
      param_4 = param_4 + 1;
      *pbVar13 = *pbVar13 + (bVar8 >> 1);
      pbVar13 = pbVar13 + 1;
    }
    if (iVar7 != 0) {
      do {
        bVar8 = *param_3;
        param_3 = param_3 + 1;
        *pbVar13 = *pbVar13 + (char)(((uint)bVar8 + (uint)*param_4) / 2);
        param_4 = param_4 + 1;
        pbVar13 = pbVar13 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return;
    }
    break;
  case 4:
    iVar4 = (int)(*(byte *)(param_2 + 0xb) + 7) >> 3;
    pbVar6 = (byte *)(*(int *)(param_2 + 4) - iVar4);
    pbVar13 = param_3;
    pbVar12 = param_4;
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pbVar13 = *pbVar13 + *pbVar12;
      pbVar12 = pbVar12 + 1;
      pbVar13 = pbVar13 + 1;
    }
    pbVar9 = param_3;
    pbVar10 = param_4;
    param_3 = pbVar13;
    param_4 = pbVar6;
    if (pbVar6 != (byte *)0x0) {
      do {
        bVar8 = *pbVar9;
        bVar1 = *pbVar12;
        pbVar9 = pbVar9 + 1;
        bVar2 = *pbVar10;
        pbVar12 = pbVar12 + 1;
        iVar4 = (uint)bVar1 - (uint)bVar2;
        pbVar10 = pbVar10 + 1;
        iVar7 = (uint)bVar8 - (uint)bVar2;
        param_2 = iVar4;
        if (iVar4 < 0) {
          param_2 = -iVar4;
        }
        iVar11 = iVar7;
        if (iVar7 < 0) {
          iVar11 = -iVar7;
        }
        iVar4 = iVar4 + iVar7;
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (((iVar11 < param_2) || (iVar4 < param_2)) && (bVar8 = bVar2, iVar11 <= iVar4)) {
          bVar8 = bVar1;
        }
        *param_3 = *param_3 + bVar8;
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != (byte *)0x0);
      return;
    }
    break;
  default:
    FUN_10042dc0(param_1,s_Ignoring_bad_adaptive_filter_typ_100562d0);
    *param_3 = 0;
  }
  return;
}

