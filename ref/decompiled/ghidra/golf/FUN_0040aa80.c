/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040aa80 @ 0x0040AA80 */


int FUN_0040aa80(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  
  iVar4 = FUN_00459400();
  iVar5 = FUN_00483d30();
  if ((-1 < iVar4) && (iVar4 < 0xc)) {
    iVar5 = FUN_0044faf0(DAT_005685f0 + -1);
    if ((iVar5 < 1) && (iVar5 = iVar4 / 3, iVar4 % 3 == 2)) {
      FUN_004481b0(0x18,100,0,0,0);
      uVar7 = 0xffffffff;
      pcVar9 = s_You_need_to_build_up_to_a_Daily_F_004c5228;
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = (char *)&DAT_0051a068;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      iVar5 = FUN_0040cb00(0x80006000,1,0xffffffff);
      return iVar5;
    }
    if (iVar4 != -1) {
      iVar6 = FUN_00406c30(0);
      iVar5 = 0;
      if (iVar6 != 0) {
        *(undefined2 *)(&DAT_0058421a + ((int)DAT_005a6d3c % 100) * 0x14) =
             *(undefined2 *)(&DAT_0058421a + ((int)DAT_005a6d3c % 100) * 0x14);
        iVar6 = FUN_00402970(-2 - iVar4 / 3);
        if (DAT_00575cb8 == '\0') {
          sVar3 = FUN_0045c1e0(2);
          (&DAT_00585860)[iVar6 * 0x4c] = ((-(sVar3 != 0) & 6U) - 3) + (char)DAT_00578150;
          sVar3 = FUN_0045c1e0(2);
          (&DAT_00585861)[iVar6 * 0x4c] = ((-(sVar3 != 0) & 6U) - 3) + (char)DAT_00578154;
        }
        else {
          uVar7 = DAT_00575cb9 + 2 & 7;
          cVar1 = *(char *)(&DAT_004c2898 + uVar7);
          (&DAT_00585860)[iVar6 * 0x4c] = *(char *)(&DAT_004c2878 + uVar7) + (char)DAT_00575cc0;
          (&DAT_00585861)[iVar6 * 0x4c] = cVar1 + (char)DAT_00575cc4;
        }
        iVar5 = iVar6 * 0x4c;
        if (iVar4 % 3 == 2) {
          (&DAT_00585862)[iVar5] = (&DAT_00585862)[iVar5] | 8;
        }
        iVar4 = FUN_004672d0(((char)(&DAT_00585860)[iVar5] * 0x400 - (&DAT_00585850)[iVar6 * 0x13])
                             + 0x200,((char)(&DAT_00585861)[iVar5] * 0x400 -
                                     (&DAT_00585854)[iVar6 * 0x13]) + 0x200);
        bVar2 = (byte)((int)((iVar4 >> 0x1c & 0xfU) + 1) >> 1) & 7;
        (&DAT_00585866)[iVar5] = bVar2;
        (&DAT_00585850)[iVar6 * 0x13] =
             (&DAT_00585850)[iVar6 * 0x13] + (&DAT_004c2878)[(char)bVar2] * 0x400 + 0x200;
        iVar4 = DAT_00834170;
        (&DAT_00585854)[iVar6 * 0x13] =
             (&DAT_00585854)[iVar6 * 0x13] +
             (&DAT_004c2898)[(char)(&DAT_00585866)[iVar5]] * 0x400 + 0x200;
        iVar5 = (int)(iVar4 + (iVar4 >> 0x1f & 0x3ffU)) >> 10;
        (&DAT_00585872)[iVar6 * 0x26] = (short)iVar5;
      }
    }
  }
  return iVar5;
}

