/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003fee0 @ 0x1003FEE0 */
/* Body size: 319 addresses */


void __cdecl FUN_1003fee0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined1 *puVar6;
  int iVar7;
  
  bVar3 = *(byte *)((int)param_1 + 9);
  iVar2 = *param_1;
  if ((7 < bVar3) && (bVar1 = *(byte *)(param_1 + 2), (bVar1 & 2) == 0)) {
    if (bVar1 == 0) {
      if (bVar3 == 8) {
        puVar6 = (undefined1 *)(iVar2 + -1 + param_2);
        puVar4 = puVar6 + iVar2 * 2;
        for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = *puVar6;
          puVar4[-1] = *puVar6;
          puVar4[-2] = *puVar6;
          puVar4 = puVar4 + -3;
          puVar6 = puVar6 + -1;
        }
      }
      else {
        puVar6 = (undefined1 *)(param_2 + -1 + iVar2 * 2);
        puVar4 = puVar6 + iVar2 * 4;
        for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = *puVar6;
          puVar4[-1] = puVar6[-1];
          puVar4[-2] = *puVar6;
          puVar4[-3] = puVar6[-1];
          puVar4[-4] = *puVar6;
          puVar4[-5] = puVar6[-1];
          puVar4 = puVar4 + -6;
          puVar6 = puVar6 + -2;
        }
      }
    }
    else if (bVar1 == 4) {
      if (bVar3 == 8) {
        puVar6 = (undefined1 *)(param_2 + -1 + iVar2 * 2);
        puVar4 = puVar6 + iVar2 * 2;
        for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = *puVar6;
          puVar4[-1] = puVar6[-1];
          puVar4[-2] = puVar6[-1];
          puVar4[-3] = puVar6[-1];
          puVar4 = puVar4 + -4;
          puVar6 = puVar6 + -2;
        }
      }
      else {
        puVar6 = (undefined1 *)(param_2 + -1 + iVar2 * 4);
        puVar4 = puVar6 + iVar2 * 4;
        for (iVar7 = iVar2; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = *puVar6;
          puVar4[-1] = puVar6[-1];
          puVar4[-2] = puVar6[-2];
          puVar4[-3] = puVar6[-3];
          puVar4[-4] = puVar6[-2];
          puVar4[-5] = puVar6[-3];
          puVar4[-6] = puVar6[-2];
          puVar4[-7] = puVar6[-3];
          puVar4 = puVar4 + -8;
          puVar6 = puVar6 + -4;
        }
      }
    }
    cVar5 = *(char *)((int)param_1 + 10) + '\x02';
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 2;
    bVar3 = *(char *)((int)param_1 + 9) * cVar5;
    *(byte *)((int)param_1 + 0xb) = bVar3;
    *(char *)((int)param_1 + 10) = cVar5;
    param_1[1] = (uint)bVar3 * iVar2 + 7 >> 3;
  }
  return;
}

