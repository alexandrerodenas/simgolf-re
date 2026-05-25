/* Ghidra decompiled: golf.exe */
/* Function: FUN_00409620 @ 0x00409620 */


void FUN_00409620(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_10;
  
  if (((3 < DAT_004c2844) &&
      (uVar10 = (uint)(short)(&DAT_0059fc60)[param_1 * 0x1c4], uVar10 != (DAT_004c2e0c & 0xff))) &&
     ((iVar9 = uVar10 * 0x100, ((&DAT_005794d0)[iVar9] & 0xe0) != 0x20 || (uVar10 == DAT_005a59f8)))
     ) {
    iVar2 = FUN_0040acd0((&DAT_0057957c)[uVar10 * 0x40] - (&DAT_0057958c)[uVar10 * 0x40],
                         (&DAT_00579580)[uVar10 * 0x40] - (&DAT_00579590)[uVar10 * 0x40]);
    iVar2 = (int)(iVar2 * 0x19 + (iVar2 * 0x19 >> 0x1f & 0x3ffU)) >> 10;
    iVar3 = FUN_0040c4b0((&DAT_0057958c)[uVar10 * 0x40],(&DAT_00579590)[uVar10 * 0x40],
                         (&DAT_00575ac8)[(char)(&DAT_005794d9)[iVar9] * 0x82],
                         (&DAT_00575acc)[(char)(&DAT_005794d9)[iVar9] * 0x82]);
    iVar4 = FUN_0040bfa0((&DAT_0057957c)[uVar10 * 0x40],(&DAT_00579580)[uVar10 * 0x40]);
    iVar8 = 0;
    if (uVar10 == DAT_005a59f8) {
      iVar5 = 0;
      do {
        iVar8 = iVar8 + (uint)(byte)(&DAT_005795a8)[iVar5 + iVar9];
        iVar5 = iVar5 + 1;
      } while (iVar5 < 10);
    }
    iVar5 = FUN_0040bfa0((&DAT_0057958c)[uVar10 * 0x40],(&DAT_00579590)[uVar10 * 0x40]);
    if ((char)(&DAT_00578372)[iVar5 * 0x30] < '\x01') {
      cVar1 = (&DAT_005794d3)[iVar9];
      iVar5 = 0x14;
      if (cVar1 < '\x05') {
        iVar5 = 0x19;
      }
      if (cVar1 < '\n') {
        iVar5 = iVar5 + 5;
      }
      if ('\n' < cVar1) {
        iVar5 = iVar5 + -5;
      }
      local_10 = iVar3;
      if (iVar3 == 0) {
        iVar5 = iVar5 / 2;
      }
      else if (((0x19 < iVar3) && ('\0' < cVar1)) &&
              (iVar6 = FUN_0040bfa0((&DAT_0057958c)[uVar10 * 0x40],(&DAT_00579590)[uVar10 * 0x40]),
              (char)(&DAT_00578372)[iVar6 * 0x30] < '\x01')) {
        local_10 = 0x19;
        iVar5 = (int)(200 / (longlong)(int)(char)(&DAT_005794d3)[iVar9]);
      }
      if (uVar10 == DAT_005a59f8) {
        if ('\0' < (char)(&DAT_00578372)[iVar4 * 0x30]) {
          iVar9 = FUN_00467130((int)(char)(&DAT_00578372)[iVar4 * 0x30],0,3);
          iVar9 = (int)((ulonglong)((longlong)(iVar9 * iVar5) * -0x2aaaaaab) >> 0x20);
          iVar5 = iVar5 + (iVar9 - (iVar9 >> 0x1f));
        }
        if (uVar10 == DAT_005a59f8) {
          uVar7 = FUN_0045c1e0(iVar8);
          iVar5 = ((uVar7 & 0xffff) + 5 + DAT_00822c88 * 4) * iVar5;
          iVar9 = iVar5 + (iVar5 >> 0x1f & 0x1fU);
          iVar5 = iVar9 >> 5;
          iVar4 = FUN_00407000((&DAT_005794b8)[uVar10 * 0x40],(&DAT_005794bc)[uVar10 * 0x40],4);
          if (iVar4 != 0) {
            iVar5 = iVar5 - (iVar9 >> 0x1f) >> 1;
          }
        }
      }
      if (((local_10 + 1) * iVar5 < iVar2) ||
         (((DAT_0056c7b4 & 0x10) != 0 && ((uVar10 == DAT_005a59f8 || (DAT_005a59f8 == 0xffffffff))))
         )) {
        FUN_00407e00(param_1,iVar3,iVar2,0);
        DAT_0056c7b4 = DAT_0056c7b4 & 0xffffffef;
      }
    }
    else if ((uVar10 == DAT_005a59f8) &&
            (uVar10 = FUN_0045c1e0((((char)(&DAT_00578372)[iVar4 * 0x30] + 4) * 0xfa) /
                                   (DAT_00822c88 + 2)),
            (int)(uVar10 & 0xffff) < (char)(&DAT_00578372)[iVar5 * 0x30] * iVar8)) {
      FUN_00407e00(param_1,iVar3,iVar2,1);
      return;
    }
  }
  return;
}

