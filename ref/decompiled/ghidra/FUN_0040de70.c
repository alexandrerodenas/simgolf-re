/* Ghidra decompiled: golf.exe */
/* Function: FUN_0040de70 @ 0x0040DE70 */
/* Body size: 266 addresses */


void FUN_0040de70(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (param_1 >> 10) + -4;
  iVar4 = (param_1 >> 10) + 4;
  DAT_00568d0c = param_3 << 10;
  DAT_0056a91c = -1;
  if (iVar8 <= iVar4) {
    iVar1 = (param_2 >> 10) + -4;
    iVar2 = (param_2 >> 10) + 4;
    iVar6 = iVar8 * 0x400;
    param_3 = iVar8 * 0x32;
    do {
      if (iVar1 <= iVar2) {
        iVar5 = iVar1 * 0x400;
        iVar7 = iVar1;
        do {
          iVar3 = FUN_0040bf60(iVar8,iVar7);
          if (((iVar3 == 0) && (((&DAT_0053caf0)[param_3 + iVar7] & 0x200) != 0)) &&
             (iVar3 = FUN_0040acd0((iVar6 - param_1) + 0x200,(iVar5 - param_2) + 0x200),
             iVar3 < DAT_00568d0c)) {
            DAT_00568d0c = iVar3;
            DAT_0056a91c = iVar8;
            DAT_0056a920 = iVar7;
          }
          iVar7 = iVar7 + 1;
          iVar5 = iVar5 + 0x400;
        } while (iVar7 <= iVar2);
      }
      iVar8 = iVar8 + 1;
      param_3 = param_3 + 0x32;
      iVar6 = iVar6 + 0x400;
    } while (iVar8 <= iVar4);
  }
  return;
}

