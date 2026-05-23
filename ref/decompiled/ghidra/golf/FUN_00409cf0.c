/* Ghidra decompiled: golf.exe */
/* Function: FUN_00409cf0 @ 0x00409CF0 */
/* Body size: 1087 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00409cf0(void)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char local_c;
  
  iVar5 = DAT_0055e920;
  if ((DAT_004c2f9c != -1) && ((DAT_004c2ba0 != DAT_004c2f9c || (DAT_004c2ba4 != DAT_005685fc)))) {
    iVar5 = FUN_00467150(DAT_004c2f9c - DAT_004c2ba0);
    DAT_004c2ba0 = DAT_004c2ba0 + iVar5;
    iVar5 = FUN_00467150(DAT_005685fc - DAT_004c2ba4);
    DAT_004c2ba4 = DAT_004c2ba4 + iVar5;
    return;
  }
  DAT_0055e920 = DAT_0055e920 + 1;
  if (DAT_0055e920 <= DAT_005a9cd4) {
    iVar3 = *(int *)(&DAT_00586fa8 + iVar5 * 4);
    iVar4 = *(int *)(&DAT_00586b50 + iVar5 * 4);
    piVar1 = (int *)(&DAT_00586fa8 + iVar5 * 4);
    uVar6 = *(uint *)(&DAT_005a8834 + iVar5 * 4);
    if ((uVar6 & 0x80) == 0) {
      if ((uVar6 & 0x100) == 0) {
        if (uVar6 == 0x7f) {
          (&DAT_005a4998)[iVar3 + iVar4 * 0x33] = (&DAT_005a4998)[iVar3 + iVar4 * 0x33] + '\x01';
        }
        if (uVar6 == 0x7e) {
          (&DAT_005a4998)[iVar3 + iVar4 * 0x33] = (&DAT_005a4998)[iVar3 + iVar4 * 0x33] + -1;
        }
        if ((int)uVar6 < 0x7d) {
          local_c = (char)DAT_005685f0;
          if ((uVar6 == 0) ||
             ((local_c = local_c + -1, iVar9 = iVar4, iVar7 = iVar3, uVar6 == 2 &&
              (DAT_00834170 % 6 == 0)))) {
            *(undefined1 *)(&DAT_00575ab0 + DAT_005685f0 * 0x82) = 4;
            iVar7 = FUN_00421bc0(0);
            (&DAT_005794d9)[iVar7 * 0x100] = local_c;
            iVar9 = *(int *)(&DAT_00586b50 + iVar5 * 4) * 0x400 + 0x200;
            (&DAT_0057958c)[iVar7 * 0x40] = iVar9;
            (&DAT_005794b8)[iVar7 * 0x40] = iVar9;
            iVar9 = *piVar1 * 0x400 + 0x200;
            (&DAT_00579590)[iVar7 * 0x40] = iVar9;
            (&DAT_005794bc)[iVar7 * 0x40] = iVar9;
            (&DAT_005794da)[iVar7 * 0x100] = 1;
            (&DAT_00579556)[iVar7 * 0x80] = 2;
            (&DAT_0057955a)[iVar7 * 0x80] = (ushort)iVar7 ^ 1;
            iVar8 = FUN_00421bc0(0);
            iVar9 = *(int *)(&DAT_00586b50 + iVar5 * 4);
            (&DAT_005794d9)[iVar8 * 0x100] = local_c;
            (&DAT_0057958c)[iVar8 * 0x40] = iVar9 << 10;
            (&DAT_005794b8)[iVar8 * 0x40] = iVar9 << 10;
            iVar7 = *piVar1;
            (&DAT_00579590)[iVar8 * 0x40] = iVar7 << 10;
            (&DAT_005794bc)[iVar8 * 0x40] = iVar7 << 10;
            (&DAT_005794da)[iVar8 * 0x100] = 1;
            (&DAT_00579556)[iVar8 * 0x80] = 8;
            (&DAT_0057955a)[iVar8 * 0x80] = (ushort)iVar8 ^ 1;
          }
          iVar8 = DAT_005685f0;
          iVar7 = iVar7 + iVar9 * 0x32;
          iVar9 = *(int *)(&DAT_005a8834 + iVar5 * 4);
          *(undefined *)((int)&DAT_005722e8 + iVar7) = (&DAT_005a8834)[iVar5 * 4];
          if ((&DAT_00578376)[iVar9 * 0x30] == '\r') {
            pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar7 * 2 + 1);
            *pbVar2 = *pbVar2 | 0x40;
            (&DAT_00578804)[iVar7] = 0;
          }
          if ((iVar9 == 1) && ((&DAT_00575ac8)[iVar8 * 0x82] == 0)) {
            (&DAT_00575ac8)[iVar8 * 0x82] = iVar4;
            (&DAT_00575acc)[iVar8 * 0x82] = iVar3;
            iVar7 = (&DAT_00575ab8)[iVar8 * 0x82];
            (&DAT_0053caf0)[iVar3 + iVar4 * 0x32] = (ushort)iVar8 | 0x80;
            if (iVar7 != 0) {
              DAT_004c2f9c = (iVar7 + iVar4) / 2;
              *(undefined1 *)(&DAT_00575ab0 + iVar8 * 0x82) = 4;
              DAT_005685fc = ((&DAT_00575abc)[iVar8 * 0x82] + iVar3) / 2;
              iVar8 = iVar8 + 1;
              DAT_005685f0 = iVar8;
            }
          }
          if (*(int *)(&DAT_005a8834 + iVar5 * 4) == 0) {
            (&DAT_00575ab8)[iVar8 * 0x82] = iVar4;
            (&DAT_00575abc)[iVar8 * 0x82] = iVar3;
            (&DAT_0053caf0)[iVar3 + iVar4 * 0x32] =
                 (&DAT_0053caf0)[iVar3 + iVar4 * 0x32] | (ushort)iVar8;
            if ((&DAT_00575ac8)[iVar8 * 0x82] != 0) {
              DAT_004c2f9c = ((&DAT_00575ac8)[iVar8 * 0x82] + iVar4) / 2;
              *(undefined1 *)(&DAT_00575ab0 + iVar8 * 0x82) = 4;
              DAT_005685fc = ((&DAT_00575acc)[iVar8 * 0x82] + iVar3) / 2;
              DAT_005685f0 = iVar8 + 1;
            }
          }
        }
      }
      else {
        FUN_0040e000(iVar4,iVar3,uVar6 & 0xfffffeff,0);
        DAT_004c2854 = *(uint *)(&DAT_005a8834 + iVar5 * 4) & 0xfffffeff;
        if (((((DAT_004c2854 == 8) || (DAT_004c2854 == 7)) || (DAT_004c2854 == 0xc)) ||
            ((DAT_004c2854 == 9 || (DAT_004c2854 == 0xb)))) ||
           ((DAT_004c2854 == 0xd || ((DAT_004c2854 == 0xe || (DAT_004c2854 == 4)))))) {
          uVar10 = 0;
          iVar3 = iVar3 + iVar4 * 0x32;
          pbVar2 = (byte *)((int)&DAT_0053caf0 + iVar3 * 2 + 1);
          *pbVar2 = *pbVar2 | 0x40;
          (&DAT_00578804)[iVar3] = 0;
          uVar6 = FUN_0045c1e0(300);
          FUN_004481b0(0x90,100,0,-(uVar6 & 0xffff),uVar10);
        }
        DAT_004c2854 = 0xffffffff;
      }
    }
    else {
      (&DAT_0053caf0)[iVar3 + iVar4 * 0x32] =
           (&DAT_0053caf0)[iVar3 + iVar4 * 0x32] ^ (ushort)uVar6 & 0xff7f;
    }
    FUN_0042f2c0();
    FUN_0042f340();
    _DAT_004c2e04 = *(undefined4 *)(&DAT_00586b50 + iVar5 * 4);
    _DAT_005a47e4 = *piVar1;
    FUN_0042f7a0();
    return;
  }
  _DAT_0059e7b8 = _DAT_0059e7b8 & 0xfdffffff;
  DAT_004c2f9c = 0xffffffff;
  return;
}

