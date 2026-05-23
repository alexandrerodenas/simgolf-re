/* Ghidra decompiled: jgl.dll */
/* Function: FUN_10041e20 @ 0x10041E20 */
/* Body size: 912 addresses */


void __cdecl FUN_10041e20(int *param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  char *pcVar8;
  ushort uVar9;
  byte *pbVar10;
  
  iVar1 = *param_1;
  if ((char)param_1[2] == '\0') {
    if (param_3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(ushort *)(param_3 + 8);
    }
    bVar2 = *(byte *)((int)param_1 + 9);
    if (bVar2 < 8) {
      if (bVar2 == 1) {
        pcVar8 = (char *)(iVar1 + param_2 + -1);
        uVar9 = uVar9 * 0xff;
        pbVar6 = (byte *)((iVar1 - 1U >> 3) + param_2);
        iVar7 = 7 - (iVar1 - 1U & 7);
        for (iVar3 = iVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pcVar8 = -((*pbVar6 >> ((byte)iVar7 & 0x1f) & 1) != 0);
          if (iVar7 == 7) {
            iVar7 = 0;
            pbVar6 = pbVar6 + -1;
          }
          else {
            iVar7 = iVar7 + 1;
          }
          pcVar8 = pcVar8 + -1;
        }
      }
      else if (bVar2 == 2) {
        uVar9 = uVar9 * 0x55;
        pbVar10 = (byte *)((iVar1 - 1U >> 2) + param_2);
        pbVar6 = (byte *)(iVar1 + param_2 + -1);
        iVar7 = (3 - (iVar1 - 1U & 3)) * 2;
        for (iVar3 = iVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
          bVar2 = *pbVar10 >> ((byte)iVar7 & 0x1f) & 3;
          *pbVar6 = ((bVar2 << 2 | bVar2) << 2 | bVar2) << 2 | bVar2;
          if (iVar7 == 6) {
            iVar7 = 0;
            pbVar10 = pbVar10 + -1;
          }
          else {
            iVar7 = iVar7 + 2;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      else if (bVar2 == 4) {
        uVar9 = uVar9 * 0x11;
        pbVar10 = (byte *)((iVar1 - 1U >> 1) + param_2);
        pbVar6 = (byte *)(iVar1 + param_2 + -1);
        iVar7 = (iVar1 - 1U & 1) * -4 + 4;
        for (iVar3 = iVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
          bVar2 = *pbVar10 >> ((byte)iVar7 & 0x1f);
          *pbVar6 = bVar2 << 4 | bVar2 & 0xf;
          if (iVar7 == 4) {
            iVar7 = 0;
            pbVar10 = pbVar10 + -1;
          }
          else {
            iVar7 = 4;
          }
          pbVar6 = pbVar6 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = iVar1;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar6 = (byte *)(iVar1 + param_2 + -1);
      puVar4 = (undefined1 *)(param_2 + -1 + iVar1 * 2);
      iVar3 = iVar1;
      if (iVar1 != 0) {
        do {
          if (*pbVar6 == uVar9) {
            *puVar4 = 0;
          }
          else {
            *puVar4 = 0xff;
          }
          puVar4[-1] = *pbVar6;
          puVar4 = puVar4 + -2;
          pbVar6 = pbVar6 + -1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(undefined1 *)(param_1 + 2) = 4;
        *(undefined1 *)((int)param_1 + 10) = 2;
        bVar2 = *(char *)((int)param_1 + 9) << 1;
        goto LAB_10042199;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar4 = (undefined1 *)(param_1[1] + -1 + param_2);
      puVar5 = (undefined1 *)(param_2 + -1 + param_1[1] * 2);
      for (iVar3 = iVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (CONCAT11(puVar4[-1],*puVar4) == uVar9) {
          *puVar5 = 0;
          puVar5[-1] = 0;
        }
        else {
          *puVar5 = 0xff;
          puVar5[-1] = 0xff;
        }
        puVar5[-2] = *puVar4;
        puVar5[-3] = puVar4[-1];
        puVar5 = puVar5 + -4;
        puVar4 = puVar4 + -2;
      }
    }
    *(undefined1 *)(param_1 + 2) = 4;
    *(undefined1 *)((int)param_1 + 10) = 2;
    bVar2 = *(char *)((int)param_1 + 9) << 1;
  }
  else {
    if ((char)param_1[2] != '\x02') {
      return;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar6 = (byte *)(param_1[1] + -1 + param_2);
      puVar4 = (undefined1 *)(param_2 + -1 + iVar1 * 4);
      for (iVar3 = iVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
        if ((((ushort)pbVar6[-2] == *(ushort *)(param_3 + 2)) &&
            ((ushort)pbVar6[-1] == *(ushort *)(param_3 + 4))) &&
           ((ushort)*pbVar6 == *(ushort *)(param_3 + 6))) {
          *puVar4 = 0;
        }
        else {
          *puVar4 = 0xff;
        }
        puVar4[-1] = *pbVar6;
        puVar4[-2] = pbVar6[-1];
        puVar4[-3] = pbVar6[-2];
        puVar4 = puVar4 + -4;
        pbVar6 = pbVar6 + -3;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      puVar4 = (undefined1 *)(param_1[1] + -1 + param_2);
      puVar5 = (undefined1 *)(param_2 + -1 + iVar1 * 8);
      for (iVar3 = iVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (((CONCAT11(puVar4[-5],puVar4[-4]) == *(short *)(param_3 + 2)) &&
            (CONCAT11(puVar4[-3],puVar4[-2]) == *(short *)(param_3 + 4))) &&
           (CONCAT11(puVar4[-1],*puVar4) == *(short *)(param_3 + 6))) {
          *puVar5 = 0;
          puVar5[-1] = 0;
        }
        else {
          *puVar5 = 0xff;
          puVar5[-1] = 0xff;
        }
        puVar5[-2] = *puVar4;
        puVar5[-3] = puVar4[-1];
        puVar5[-4] = puVar4[-2];
        puVar5[-5] = puVar4[-3];
        puVar5[-6] = puVar4[-4];
        puVar5[-7] = puVar4[-5];
        puVar5 = puVar5 + -8;
        puVar4 = puVar4 + -6;
      }
    }
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
    bVar2 = *(char *)((int)param_1 + 9) << 2;
  }
LAB_10042199:
  *(byte *)((int)param_1 + 0xb) = bVar2;
  param_1[1] = (uint)bVar2 * iVar1 >> 3;
  return;
}

