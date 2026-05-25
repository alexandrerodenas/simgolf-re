/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1003e890 @ 0x1003E890 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_1003e890(int *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  byte bVar7;
  ushort uVar8;
  int *piVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  short sVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  byte local_20;
  double local_18;
  
  piVar9 = param_1;
  uVar19 = param_1[0x1c];
  bVar5 = *(byte *)((int)param_1 + 0x126);
  if ((uVar19 & 0x100) != 0) {
    if ((bVar5 & 2) != 0) {
      if (bVar5 == 3) {
        pbVar16 = (byte *)(param_1[0x45] + (uint)*(byte *)(param_1 + 0x4e) * 3);
        *(ushort *)((int)param_1 + 0x13a) = (ushort)*pbVar16;
        *(ushort *)(param_1 + 0x4f) = (ushort)pbVar16[1];
        *(ushort *)((int)param_1 + 0x13e) = (ushort)pbVar16[2];
        if (((uVar19 & 0x80000) != 0) && ((uVar19 & 0x1000) == 0)) {
          iVar18 = 0;
          uVar8 = *(ushort *)((int)param_1 + 0x11a);
          if (uVar8 != 0) {
            do {
              pcVar4 = (char *)(param_1[0x62] + iVar18);
              iVar18 = iVar18 + 1;
              *pcVar4 = -1 - *pcVar4;
            } while (iVar18 < (int)(uint)uVar8);
          }
        }
      }
      goto switchD_1003e8d1_caseD_3;
    }
    switch(*(undefined1 *)((int)param_1 + 0x127)) {
    case 1:
      sVar14 = (short)param_1[0x50] * 0xff;
      break;
    case 2:
      sVar14 = (short)param_1[0x50] * 0x55;
      break;
    default:
      goto switchD_1003e8d1_caseD_3;
    case 4:
      sVar14 = (short)param_1[0x50] * 0x11;
      break;
    case 8:
    case 0x10:
      sVar14 = (short)param_1[0x50];
      goto LAB_1003e8eb;
    }
    *(short *)(param_1 + 0x50) = sVar14;
LAB_1003e8eb:
    *(short *)((int)param_1 + 0x13e) = sVar14;
    *(short *)(param_1 + 0x4f) = sVar14;
    *(short *)((int)param_1 + 0x13a) = sVar14;
  }
switchD_1003e8d1_caseD_3:
  *(int *)((int)param_1 + 0x142) = param_1[0x4e];
  *(int *)((int)param_1 + 0x146) = param_1[0x4f];
  *(short *)((int)param_1 + 0x14a) = (short)param_1[0x50];
  if ((param_1[0x1c] & 0x602000U) == 0) {
    if (((param_1[0x1c] & 0x80U) != 0) && (bVar5 == 3)) {
      bVar10 = *(byte *)(param_1 + 0x4f);
      bVar11 = *(byte *)((int)param_1 + 0x13a);
      uVar8 = *(ushort *)((int)param_1 + 0x11a);
      iVar18 = 0;
      bVar12 = *(byte *)((int)param_1 + 0x13e);
      if (uVar8 != 0) {
        pbVar16 = (byte *)(param_1[0x45] + 2);
        do {
          bVar13 = *(byte *)(iVar18 + param_1[0x62]);
          if (bVar13 == 0) {
            *(ushort *)(pbVar16 + -2) = CONCAT11(bVar10,bVar11);
            *pbVar16 = bVar12;
          }
          else if (bVar13 != 0xff) {
            uVar19 = (0xff - (uint)bVar13) * (uint)bVar11 + 0x80 + (uint)pbVar16[-2] * (uint)bVar13
                     & 0xffff;
            pbVar16[-2] = (byte)((uVar19 >> 8) + uVar19 >> 8);
            uVar19 = (0xff - (uint)*(byte *)(iVar18 + param_1[0x62])) * (uint)bVar10 + 0x80 +
                     (uint)pbVar16[-1] * (uint)*(byte *)(iVar18 + param_1[0x62]) & 0xffff;
            pbVar16[-1] = (byte)((uVar19 >> 8) + uVar19 >> 8);
            uVar19 = (0xff - (uint)*(byte *)(iVar18 + param_1[0x62])) * (uint)bVar12 + 0x80 +
                     (uint)*pbVar16 * (uint)*(byte *)(iVar18 + param_1[0x62]) & 0xffff;
            *pbVar16 = (byte)((uVar19 >> 8) + uVar19 >> 8);
          }
          iVar18 = iVar18 + 1;
          pbVar16 = pbVar16 + 3;
        } while (iVar18 < (int)(uint)uVar8);
      }
    }
    goto LAB_1003eddd;
  }
  FUN_100422d0(param_1);
  if ((*(byte *)(param_1 + 0x1c) & 0x80) == 0) {
    if (bVar5 == 3) {
      uVar19 = (uint)*(ushort *)(param_1 + 0x46);
      if (uVar19 != 0) {
        pbVar16 = (byte *)(param_1[0x45] + 2);
        do {
          pbVar16[-2] = *(byte *)((uint)pbVar16[-2] + param_1[0x59]);
          pbVar16[-1] = *(byte *)((uint)pbVar16[-1] + param_1[0x59]);
          uVar19 = uVar19 - 1;
          *pbVar16 = *(byte *)((uint)*pbVar16 + param_1[0x59]);
          pbVar16 = pbVar16 + 3;
        } while (uVar19 != 0);
      }
    }
    goto LAB_1003eddd;
  }
  if (bVar5 != 3) {
    if ((bVar5 & 2) == 0) {
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)((int)param_1 + 0x14a) = (short)lVar21;
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)(param_1 + 0x50) = (short)lVar21;
    }
    else {
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)(param_1 + 0x51) = (short)lVar21;
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)((int)param_1 + 0x146) = (short)lVar21;
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)(param_1 + 0x52) = (short)lVar21;
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)((int)param_1 + 0x13a) = (short)lVar21;
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)(param_1 + 0x4f) = (short)lVar21;
      FUN_10046e50();
      lVar21 = __ftol();
      *(short *)((int)param_1 + 0x13e) = (short)lVar21;
    }
    goto LAB_1003eddd;
  }
  cVar6 = (char)param_1[0x4c];
  uVar8 = *(ushort *)(param_1 + 0x46);
  if (cVar6 == '\x02') {
    iVar18 = param_1[0x59];
    puVar1 = (ushort *)((int)param_1 + 0x13a);
    puVar2 = (ushort *)(param_1 + 0x4f);
    puVar3 = (ushort *)((int)param_1 + 0x13e);
    param_1._0_2_ =
         CONCAT11(*(undefined1 *)((uint)*puVar2 + iVar18),*(undefined1 *)((uint)*puVar1 + iVar18));
    bVar10 = *(byte *)((uint)*puVar3 + iVar18);
    iVar18 = piVar9[0x5b];
    bVar11 = *(byte *)(iVar18 + (uint)*puVar1);
    bVar12 = *(byte *)(iVar18 + (uint)*puVar2);
    bVar13 = *(byte *)(iVar18 + (uint)*puVar3);
  }
  else {
    if (cVar6 == '\x01') {
LAB_1003eac4:
      local_18 = 1.0;
    }
    else if (cVar6 == '\x02') {
      local_18 = (double)((float)_DAT_100531f0 / ((float)param_1[0x58] * (float)param_1[0x57]));
    }
    else {
      if (cVar6 != '\x03') goto LAB_1003eac4;
      local_18 = (double)((float)_DAT_100531f0 / ((float)param_1[0x58] * (float)param_1[0x4d]));
    }
    if (_DAT_10053958 <= ABS(local_18 - _DAT_100531f0)) {
      FUN_10046e50();
      lVar21 = __ftol();
      FUN_10046e50();
      lVar20 = __ftol();
      param_1._0_2_ = CONCAT11((char)lVar20,(char)lVar21);
      FUN_10046e50();
      lVar21 = __ftol();
      bVar10 = (byte)lVar21;
    }
    else {
      bVar10 = *(byte *)((int)param_1 + 0x13e);
      param_1._0_2_ = CONCAT11((char)param_1[0x4f],*(undefined1 *)((int)param_1 + 0x13a));
    }
    FUN_10046e50();
    lVar21 = __ftol();
    bVar11 = (byte)lVar21;
    FUN_10046e50();
    lVar21 = __ftol();
    bVar12 = (byte)lVar21;
    FUN_10046e50();
    lVar21 = __ftol();
    bVar13 = (byte)lVar21;
  }
  iVar18 = 0;
  if (uVar8 != 0) {
    pbVar16 = (byte *)(piVar9[0x45] + 2);
    do {
      if ((iVar18 < (int)(uint)*(ushort *)((int)piVar9 + 0x11a)) &&
         (bVar7 = *(byte *)(piVar9[0x62] + iVar18), bVar7 != 0xff)) {
        if (bVar7 == 0) {
          *(undefined2 *)(pbVar16 + -2) = param_1._0_2_;
          *pbVar16 = bVar10;
        }
        else {
          uVar19 = (uint)*(byte *)((uint)pbVar16[-2] + piVar9[0x5b]) * (uint)bVar7 + 0x80 +
                   (0xff - (uint)bVar7) * (uint)bVar11 & 0xffff;
          pbVar16[-2] = *(byte *)(((int)((uVar19 >> 8) + uVar19) >> 8 & 0xffU) + piVar9[0x5a]);
          uVar19 = (uint)*(byte *)((uint)pbVar16[-1] + piVar9[0x5b]) *
                   (uint)*(byte *)(piVar9[0x62] + iVar18) + 0x80 +
                   (0xff - (uint)*(byte *)(piVar9[0x62] + iVar18)) * (uint)bVar12 & 0xffff;
          pbVar16[-1] = *(byte *)(((int)((uVar19 >> 8) + uVar19) >> 8 & 0xffU) + piVar9[0x5a]);
          uVar19 = (uint)*(byte *)((uint)*pbVar16 + piVar9[0x5b]) *
                   (uint)*(byte *)(piVar9[0x62] + iVar18) + 0x80 +
                   (0xff - (uint)*(byte *)(piVar9[0x62] + iVar18)) * (uint)bVar13 & 0xffff;
          *pbVar16 = *(byte *)(((int)((uVar19 >> 8) + uVar19) >> 8 & 0xffU) + piVar9[0x5a]);
        }
      }
      else {
        pbVar16[-2] = *(byte *)((uint)pbVar16[-2] + piVar9[0x59]);
        pbVar16[-1] = *(byte *)((uint)pbVar16[-1] + piVar9[0x59]);
        *pbVar16 = *(byte *)((uint)*pbVar16 + piVar9[0x59]);
      }
      iVar18 = iVar18 + 1;
      pbVar16 = pbVar16 + 3;
    } while (iVar18 < (int)(uint)uVar8);
  }
LAB_1003eddd:
  if (((*(byte *)(piVar9 + 0x1c) & 8) != 0) && (bVar5 == 3)) {
    iVar17 = 8 - (uint)*(byte *)(piVar9 + 0x5f);
    param_1 = (int *)(8 - (uint)*(byte *)((int)piVar9 + 0x17d));
    iVar18 = 8 - (uint)*(byte *)((int)piVar9 + 0x17e);
    iVar15 = 0;
    if ((iVar17 < 0) || (8 < iVar17)) {
      iVar17 = 0;
    }
    if (((int)param_1 < 0) || (8 < (int)param_1)) {
      param_1 = (int *)0x0;
    }
    if ((iVar18 < 0) || (8 < iVar18)) {
      iVar18 = 0;
    }
    if (*(ushort *)(piVar9 + 0x46) != 0) {
      uVar19 = (uint)*(ushort *)(piVar9 + 0x46);
      do {
        *(byte *)(iVar15 + piVar9[0x45]) = *(byte *)(iVar15 + piVar9[0x45]) >> ((byte)iVar17 & 0x1f)
        ;
        pbVar16 = (byte *)(iVar15 + 1 + piVar9[0x45]);
        *pbVar16 = *pbVar16 >> ((byte)param_1 & 0x1f);
        pbVar16 = (byte *)(iVar15 + 2 + piVar9[0x45]);
        local_20 = (byte)iVar18;
        iVar15 = iVar15 + 3;
        *pbVar16 = *pbVar16 >> (local_20 & 0x1f);
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  return;
}

