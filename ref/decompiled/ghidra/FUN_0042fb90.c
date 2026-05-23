/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042fb90 @ 0x0042FB90 */
/* Body size: 1157 addresses */


undefined4 FUN_0042fb90(int param_1,int param_2,int *param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  iVar4 = (param_1 + DAT_004c2ba0 * -0x400 + -0x200) * DAT_004c2844 >> 7;
  iVar5 = (param_2 + DAT_004c2ba4 * -0x400 + -0x200) * DAT_004c2844 >> 7;
  if (DAT_00822c8c == 0x400) {
    iVar4 = iVar4 * 0x50 + (iVar4 * 0x50 >> 0x1f & 0x3fU);
    iVar5 = (int)((ulonglong)((longlong)(iVar5 * 0x34) * 0x66666667) >> 0x20);
  }
  else {
    if (DAT_00822c8c != 0x500) goto LAB_0042fc3c;
    iVar4 = iVar4 * 0x68 + (iVar4 * 0x68 >> 0x1f & 0x3fU);
    iVar5 = (int)((ulonglong)((longlong)(iVar5 * 0x44) * 0x66666667) >> 0x20);
  }
  iVar4 = iVar4 >> 6;
  iVar5 = (iVar5 >> 4) - (iVar5 >> 0x1f);
LAB_0042fc3c:
  if (DAT_005685f4 == 0) {
    *param_3 = iVar5 + DAT_00822c8c / 2 + DAT_004c2844 * 8 + iVar4;
    *param_4 = (((int)(iVar5 * 0x14 + (iVar5 * 0x14 >> 0x1f & 0x1fU)) >> 5) -
               ((int)(iVar4 * 0x14 + (iVar4 * 0x14 >> 0x1f & 0x1fU)) >> 5)) + DAT_00822c90 / 2;
  }
  if (DAT_005685f4 == 2) {
    *param_3 = (DAT_00822c8c / 2 - iVar4) + iVar5;
    *param_4 = (((int)(iVar4 * -0x14 + (iVar4 * -0x14 >> 0x1f & 0x1fU)) >> 5) -
               ((int)(iVar5 * 0x14 + (iVar5 * 0x14 >> 0x1f & 0x1fU)) >> 5)) + DAT_00822c90 / 2 +
               DAT_004c2844 * -5;
  }
  if (DAT_005685f4 == 4) {
    *param_3 = ((DAT_00822c8c / 2 + DAT_004c2844 * -8) - iVar5) - iVar4;
    *param_4 = (((int)(iVar4 * 0x14 + (iVar4 * 0x14 >> 0x1f & 0x1fU)) >> 5) -
               ((int)(iVar5 * 0x14 + (iVar5 * 0x14 >> 0x1f & 0x1fU)) >> 5)) + DAT_00822c90 / 2;
  }
  if (DAT_005685f4 == 6) {
    *param_3 = (DAT_00822c8c / 2 - iVar5) + iVar4;
    *param_4 = ((int)(iVar5 * 0x14 + (iVar5 * 0x14 >> 0x1f & 0x1fU)) >> 5) +
               ((int)(iVar4 * 0x14 + (iVar4 * 0x14 >> 0x1f & 0x1fU)) >> 5) + DAT_00822c90 / 2 +
               DAT_004c2844 * 5;
  }
  local_10 = -param_5;
  if ((local_10 <= *param_3) && (*param_3 < DAT_00822c8c + param_5)) {
    iVar4 = *param_4;
    local_c = -(param_5 / 2);
    if ((local_c <= iVar4) && (local_8 = param_5 / 2, iVar4 < local_8 + DAT_00822c90)) {
      iVar6 = param_1 >> 10;
      iVar7 = param_2 >> 10;
      iVar5 = iVar7 + iVar6 * 0x32;
      uVar1 = *(uint *)(&DAT_0057837c + *(char *)((int)&DAT_005722e8 + iVar5) * 0x30);
      if ((uVar1 & 8) == 0) {
        if ((uVar1 & 2) == 0) {
          if ((uVar1 & 4) == 0) {
            iVar2 = FUN_0040bfe0(iVar6,iVar7,5,1);
            iVar2 = iVar2 + -3;
            iVar4 = FUN_0040bfe0(iVar6,iVar7,7,1);
            iVar5 = FUN_0040bfe0(iVar6,iVar7,1,1);
            iVar3 = FUN_0040bfe0(iVar6,iVar7,3,1);
            if (((iVar2 == iVar4 + -3) && (iVar2 == iVar5 + -3)) && (iVar2 == iVar3 + -3)) {
              iVar2 = DAT_004c2e00 * DAT_004c2844 * iVar2;
              iVar4 = -((int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
            }
            else {
              param_1 = param_1 + iVar6 * -0x400;
              param_2 = param_2 + iVar7 * -0x400;
              iVar4 = (((0x400 - param_1) * (iVar4 + -3) + param_1 * (iVar5 + -3)) *
                       (0x400 - param_2) +
                      ((0x400 - param_1) * iVar2 + param_1 * (iVar3 + -3)) * param_2) * DAT_004c2e00
                      * DAT_004c2844;
              iVar4 = -((int)(iVar4 + (iVar4 >> 0x1f & 0x3ffU)) >> 10);
              iVar4 = iVar4 + (iVar4 >> 0x1f & 0x3ffU);
              iVar4 = (int)((iVar4 >> 10) + (iVar4 >> 0x1f & 3U)) >> 2;
            }
            *param_4 = *param_4 + iVar4;
          }
          else {
            iVar5 = ((char)(&DAT_00543018)[iVar5] + -3) * DAT_004c2e00 * DAT_004c2844;
            *param_4 = iVar4 - ((int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2);
          }
        }
        else {
          FUN_0042f4b0(iVar6,iVar7,local_4,&local_14);
          iVar4 = (local_14 + -3) * DAT_004c2e00 * DAT_004c2844;
          *param_4 = *param_4 - ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2);
        }
      }
      if (DAT_005a9cc0 != 0) {
        *param_3 = *param_3 * 2 + -400;
        *param_4 = *param_4 * 2 + -300;
      }
      if (((local_10 <= *param_3) && (*param_3 < DAT_00822c8c + param_5)) &&
         ((local_c <= *param_4 && (*param_4 < local_8 + DAT_00822c90)))) {
        return 1;
      }
    }
  }
  return 0;
}

