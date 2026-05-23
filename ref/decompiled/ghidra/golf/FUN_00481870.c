/* Ghidra decompiled: golf.exe */
/* Function: FUN_00481870 @ 0x00481870 */
/* Body size: 673 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00481870(uint param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  short sVar10;
  ushort uVar11;
  int iVar12;
  double *pdVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int local_1c;
  
  if (((int)param_1 < 4) || ((param_1 & 1) != 0)) {
    return 3;
  }
  DAT_0083ac14 = param_1;
  iVar12 = FUN_00492450();
  DAT_0083abb0 = (-(uint)(*(int *)(iVar12 + 4) != 0) & 0x8000) + 0x8000;
  DAT_0083ac10 = _malloc(DAT_0083abb0 * DAT_0083ac14 * 2);
  if (DAT_0083ac10 == (void *)0x0) {
    return 4;
  }
  pdVar13 = _malloc(DAT_0083ac14 << 3);
  if (pdVar13 != (double *)0x0) {
    dVar8 = (double)(int)DAT_0083ac14;
    *(undefined4 *)pdVar13 = 0;
    *(undefined4 *)((int)pdVar13 + 4) = 0;
    iVar12 = 1;
    dVar8 = _DAT_004ba2a0 / (dVar8 - _DAT_004ba2a0);
    pdVar7 = pdVar13;
    if (1 < (int)DAT_0083ac14 / 2) {
      do {
        dVar9 = dVar8 + *pdVar7;
        pdVar7[1] = dVar9;
        iVar17 = DAT_0083ac14 - iVar12;
        iVar12 = iVar12 + 1;
        pdVar13[iVar17 + -1] = _DAT_004ba2a0 - dVar9;
        pdVar7 = pdVar7 + 1;
      } while (iVar12 < (int)DAT_0083ac14 / 2);
    }
    *(undefined4 *)(pdVar13 + (DAT_0083ac14 - 1)) = 0;
    *(undefined4 *)((int)pdVar13 + DAT_0083ac14 * 8 + -4) = 0x3ff00000;
    iVar12 = FUN_00492450();
    uVar1 = *(undefined2 *)(iVar12 + 8);
    iVar12 = FUN_00492450();
    uVar2 = *(undefined2 *)(iVar12 + 10);
    iVar12 = FUN_00492450();
    uVar3 = *(undefined2 *)(iVar12 + 0xc);
    iVar12 = FUN_00492450();
    uVar4 = *(ushort *)(iVar12 + 0xe);
    iVar12 = FUN_00492450();
    uVar5 = *(ushort *)(iVar12 + 0x10);
    iVar12 = FUN_00492450();
    local_1c = 0;
    uVar6 = *(ushort *)(iVar12 + 0x12);
    iVar12 = DAT_0083abb0;
    if (0 < (int)DAT_0083ac14 / 2) {
      do {
        uVar20 = 0;
        if (0 < iVar12) {
          do {
            uVar18 = uVar20 & uVar4;
            uVar19 = uVar20 & uVar5;
            bVar15 = (byte)uVar1;
            bVar16 = (byte)uVar2;
            uVar14 = uVar20 & uVar6;
            sVar10 = __ftol();
            iVar12 = __ftol();
            uVar11 = __ftol();
            *(ushort *)((int)DAT_0083ac10 + (DAT_0083abb0 * local_1c + uVar20) * 2) =
                 sVar10 << (bVar16 & 0x1f) | (ushort)(iVar12 << (bVar15 & 0x1f)) | uVar11;
            iVar12 = DAT_0083abb0 * local_1c + uVar20;
            iVar17 = ((DAT_0083ac14 - local_1c) + -1) * DAT_0083abb0 + uVar20;
            uVar20 = uVar20 + 1;
            *(ushort *)((int)DAT_0083ac10 + iVar17 * 2) =
                 ((ushort)(((int)uVar19 >> (bVar16 & 0x1f)) << (bVar16 & 0x1f)) |
                  (ushort)(((int)uVar18 >> (bVar15 & 0x1f)) << (bVar15 & 0x1f)) |
                 (ushort)((int)uVar14 >> ((byte)uVar3 & 0x1f))) -
                 *(short *)((int)DAT_0083ac10 + iVar12 * 2);
            iVar12 = DAT_0083abb0;
          } while ((int)uVar20 < DAT_0083abb0);
        }
        local_1c = local_1c + 1;
      } while (local_1c < (int)DAT_0083ac14 / 2);
    }
    return 0;
  }
  return 4;
}

