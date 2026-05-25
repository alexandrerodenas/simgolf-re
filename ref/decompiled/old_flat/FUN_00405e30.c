/* Ghidra decompiled: golf.exe */
/* Function: FUN_00405e30 @ 0x00405E30 */


void FUN_00405e30(int param_1,int param_2,undefined1 param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  char *pcVar18;
  
  iVar14 = param_2 + param_1 * 0x32;
  pbVar1 = (byte *)((int)&DAT_0053caf0 + iVar14 * 2 + 1);
  *pbVar1 = *pbVar1 & 0xde;
  *(undefined1 *)((int)&DAT_005722e8 + iVar14) = param_3;
  uVar7 = FUN_0045c1e0(3);
  iVar14 = param_1 + -1 + (uVar7 & 0xffff);
  uVar7 = FUN_0045c1e0(3);
  iVar2 = param_2 + -1 + (uVar7 & 0xffff);
  sVar4 = FUN_0045c1e0(8);
  if (((sVar4 == 0) && (uVar7 = FUN_0045c1e0(0x80), (&DAT_00572cc2)[(uVar7 & 0xffff) * 0x14] == -1))
     && ((DAT_005a5a00 & 0x20) != 0)) {
    uVar5 = FUN_0045c1e0(9);
    iVar16 = 1;
    while( true ) {
      uVar7 = (uint)uVar5;
      if (((*(char *)(iVar14 * 0x32 + iVar2 + 0x5722e8) == (&DAT_004c19a8)[uVar7 * 0x12]) &&
          ((1 << (DAT_005a34e0 & 0x1f) & (int)s_Crane_004c19a9[uVar7 * 0x12]) != 0)) &&
         (iVar8 = FUN_0040bf60(iVar14,iVar2), iVar8 == 0)) break;
      uVar5 = FUN_0045c1e0(9);
      iVar16 = iVar16 + 1;
      if (9 < iVar16) {
        return;
      }
    }
    if (iVar16 < 10) {
      iVar9 = FUN_00405970(iVar14,iVar2,uVar7);
      iVar16 = iVar2 * 0x400 + 0x200;
      iVar12 = iVar14 * 0x400 + 0x200;
      FUN_0040c500(0x8f,iVar12,iVar16,0);
      uVar5 = FUN_0045c1e0(2);
      iVar8 = iVar9;
      if (iVar9 != -1) {
        do {
          if (((&DAT_00572cd6)[iVar8 * 0x14] != -1) || (2 < uVar5)) break;
          uVar6 = FUN_0045c1e0(3);
          uVar13 = uVar7;
          uVar10 = FUN_0045c1e0(3);
          iVar11 = FUN_00405970((uVar6 - 1) + iVar14,((uVar10 & 0xffff) - 1) + iVar2,uVar13);
          iVar8 = (int)(short)iVar9;
          (&DAT_00572cbc)[iVar11 * 10] = (short)iVar9;
        } while (iVar8 != -1);
        uVar13 = 0xffffffff;
        pcVar15 = &DAT_004c1998 + uVar7 * 0x12;
        do {
          pcVar18 = pcVar15;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar18 = pcVar15 + 1;
          cVar3 = *pcVar15;
          pcVar15 = pcVar18;
        } while (cVar3 != '\0');
        uVar13 = ~uVar13;
        pcVar15 = pcVar18 + -uVar13;
        pcVar18 = (char *)&DAT_0051a068;
        for (uVar10 = uVar13 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar18 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar18 = pcVar18 + 1;
        }
        uVar13 = 0xffffffff;
        pcVar15 = s_habitat_004c3f9c;
        do {
          pcVar18 = pcVar15;
          if (uVar13 == 0) break;
          uVar13 = uVar13 - 1;
          pcVar18 = pcVar15 + 1;
          cVar3 = *pcVar15;
          pcVar15 = pcVar18;
        } while (cVar3 != '\0');
        uVar13 = ~uVar13;
        iVar14 = -1;
        pcVar15 = (char *)&DAT_0051a068;
        do {
          pcVar17 = pcVar15;
          if (iVar14 == 0) break;
          iVar14 = iVar14 + -1;
          pcVar17 = pcVar15 + 1;
          cVar3 = *pcVar15;
          pcVar15 = pcVar17;
        } while (cVar3 != '\0');
        pcVar15 = pcVar18 + -uVar13;
        pcVar18 = pcVar17 + -1;
        for (uVar10 = uVar13 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar15;
          pcVar15 = pcVar15 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
          *pcVar18 = *pcVar15;
          pcVar15 = pcVar15 + 1;
          pcVar18 = pcVar18 + 1;
        }
        FUN_0040c720(iVar12,iVar16,0x800003ff);
        FUN_00405a00(uVar7,iVar12,iVar16);
      }
    }
  }
  return;
}

