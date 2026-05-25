/* Ghidra decompiled: golf.exe */
/* Function: FUN_00409cf0 @ 0x00409CF0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409cf0(void)

{
  int *piVar1;
  byte *pbVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char local_c;
  
  iVar6 = DAT_0055e920;
  if ((DAT_004c2f9c != -1) && ((DAT_004c2ba0 != DAT_004c2f9c || (DAT_004c2ba4 != DAT_005685fc)))) {
    iVar6 = FUN_00467150(DAT_004c2f9c - DAT_004c2ba0);
    DAT_004c2ba0 = DAT_004c2ba0 + iVar6;
    iVar6 = FUN_00467150(DAT_005685fc - DAT_004c2ba4);
    DAT_004c2ba4 = DAT_004c2ba4 + iVar6;
    return;
  }
  DAT_0055e920 = DAT_0055e920 + 1;
  if (DAT_0055e920 <= DAT_005a9cd4) {
    iVar4 = *(int *)(&DAT_00586fa8 + iVar6 * 4);
    iVar5 = *(int *)(&DAT_00586b50 + iVar6 * 4);
    piVar1 = (int *)(&DAT_00586fa8 + iVar6 * 4);
    uVar7 = *(uint *)(&DAT_005a8834 + iVar6 * 4);
    if ((uVar7 & 0x80) == 0) {
      if ((uVar7 & 0x100) == 0) {
        if (uVar7 == 0x7f) {
          pcVar3 = (char *)((int)&DAT_005a4998 + iVar4 + iVar5 * 0x33);
          *pcVar3 = *pcVar3 + '\x01';
        }
        if (uVar7 == 0x7e) {
          pcVar3 = (char *)((int)&DAT_005a4998 + iVar4 + iVar5 * 0x33);
          *pcVar3 = *pcVar3 + -1;
        }
        if ((int)uVar7 < 0x7d) {
          local_c = (char)DAT_005685f0;
          if ((uVar7 == 0) ||
             ((local_c = local_c + -1, iVar10 = iVar5, iVar8 = iVar4, uVar7 == 2 &&
              (DAT_00834170 % 6 == 0)))) {
            (&DAT_00575ab0)[DAT_005685f0 * 0x208] = 4;
            iVar8 = FUN_00421bc0(0);
            (&DAT_005794d9)[iVar8 * 0x100] = local_c;
            iVar10 = *(int *)(&DAT_00586b50 + iVar6 * 4) * 0x400 + 0x200;
            (&DAT_0057958c)[iVar8 * 0x40] = iVar10;
            (&DAT_005794b8)[iVar8 * 0x40] = iVar10;
            iVar10 = *piVar1 * 0x400 + 0x200;
            (&DAT_00579590)[iVar8 * 0x40] = iVar10;
            (&DAT_005794bc)[iVar8 * 0x40] = iVar10;
            (&DAT_005794da)[iVar8 * 0x100] = 1;
            (&DAT_00579556)[iVar8 * 0x80] = 2;
            (&DAT_0057955a)[iVar8 * 0x80] = (ushort)iVar8 ^ 1;
            iVar9 = FUN_00421bc0(0);
            iVar10 = *(int *)(&DAT_00586b50 + iVar6 * 4);
            (&DAT_005794d9)[iVar9 * 0x100] = local_c;
            (&DAT_0057958c)[iVar9 * 0x40] = iVar10 << 10;
            (&DAT_005794b8)[iVar9 * 0x40] = iVar10 << 10;
            iVar8 = *piVar1;
            (&DAT_00579590)[iVar9 * 0x40] = iVar8 << 10;
            (&DAT_005794bc)[iVar9 * 0x40] = iVar8 << 10;
            (&DAT_005794da)[iVar9 * 0x100] = 1;
            (&DAT_00579556)[iVar9 * 0x80] = 8;
            (&DAT_0057955a)[iVar9 * 0x80] = (ushort)iVar9 ^ 1;
          }
          iVar9 = DAT_005685f0;
          iVar8 = iVar8 + iVar10 * 0x32;
          iVar10 = *(int *)(&DAT_005a8834 + iVar6 * 4);
          *(undefined *)((int)&DAT_005722e8 + iVar8) = (&DAT_005a8834)[iVar6 * 4];
          if ((&DAT_00578376)[iVar10 * 0x30] == '\r') {
            pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar8 * 2 + 1);
            *pbVar2 = *pbVar2 | 0x40;
            (&DAT_00578804)[iVar8] = 0;
          }
          if ((iVar10 == 1) && ((&DAT_00575ac8)[iVar9 * 0x82] == 0)) {
            (&DAT_00575ac8)[iVar9 * 0x82] = iVar5;
            (&DAT_00575acc)[iVar9 * 0x82] = iVar4;
            iVar8 = (&DAT_00575ab8)[iVar9 * 0x82];
            (&DAT_0053caf0)[iVar4 + iVar5 * 0x32] = (ushort)iVar9 | 0x80;
            if (iVar8 != 0) {
              DAT_004c2f9c = (iVar8 + iVar5) / 2;
              iVar8 = (&DAT_00575abc)[iVar9 * 0x82];
              (&DAT_00575ab0)[iVar9 * 0x208] = 4;
              DAT_005685fc = (iVar8 + iVar4) / 2;
              iVar9 = iVar9 + 1;
              DAT_005685f0 = iVar9;
            }
          }
          if (*(int *)(&DAT_005a8834 + iVar6 * 4) == 0) {
            (&DAT_00575ab8)[iVar9 * 0x82] = iVar5;
            (&DAT_00575abc)[iVar9 * 0x82] = iVar4;
            (&DAT_0053caf0)[iVar4 + iVar5 * 0x32] =
                 (&DAT_0053caf0)[iVar4 + iVar5 * 0x32] | (ushort)iVar9;
            if ((&DAT_00575ac8)[iVar9 * 0x82] != 0) {
              DAT_004c2f9c = ((&DAT_00575ac8)[iVar9 * 0x82] + iVar5) / 2;
              iVar5 = (&DAT_00575acc)[iVar9 * 0x82];
              (&DAT_00575ab0)[iVar9 * 0x208] = 4;
              DAT_005685fc = (iVar5 + iVar4) / 2;
              DAT_005685f0 = iVar9 + 1;
            }
          }
        }
      }
      else {
        FUN_0040e000(iVar5,iVar4,uVar7 & 0xfffffeff,0);
        DAT_004c2854 = *(uint *)(&DAT_005a8834 + iVar6 * 4) & 0xfffffeff;
        if (((((DAT_004c2854 == 8) || (DAT_004c2854 == 7)) || (DAT_004c2854 == 0xc)) ||
            ((DAT_004c2854 == 9 || (DAT_004c2854 == 0xb)))) ||
           ((DAT_004c2854 == 0xd || ((DAT_004c2854 == 0xe || (DAT_004c2854 == 4)))))) {
          uVar11 = 0;
          iVar4 = iVar4 + iVar5 * 0x32;
          pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar4 * 2 + 1);
          *pbVar2 = *pbVar2 | 0x40;
          (&DAT_00578804)[iVar4] = 0;
          uVar7 = FUN_0045c1e0(300);
          FUN_004481b0(0x90,100,0,-(uVar7 & 0xffff),uVar11);
        }
        DAT_004c2854 = 0xffffffff;
      }
    }
    else {
      (&DAT_0053caf0)[iVar4 + iVar5 * 0x32] =
           (&DAT_0053caf0)[iVar4 + iVar5 * 0x32] ^ (ushort)uVar7 & 0xff7f;
    }
    FUN_0042f2c0();
    FUN_0042f340();
    _DAT_004c2e04 = *(undefined4 *)(&DAT_00586b50 + iVar6 * 4);
    _DAT_005a47e4 = *piVar1;
    FUN_0042f7a0();
    return;
  }
  DAT_0059e7b8 = DAT_0059e7b8 & 0xfdffffff;
  DAT_004c2f9c = 0xffffffff;
  return;
}

