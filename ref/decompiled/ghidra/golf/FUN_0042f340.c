/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042f340 @ 0x0042F340 */
/* Body size: 362 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042f340(void)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  ushort *local_8;
  
  iVar5 = (int)DAT_0058bcbc;
  iVar7 = (int)DAT_0058bcba;
  pbVar1 = (byte *)&DAT_0053caf0;
  do {
    iVar3 = 0x32;
    do {
      *pbVar1 = *pbVar1 & 0xbf;
      pbVar1 = pbVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  } while ((int)pbVar1 < 0x53de78);
  iVar3 = (int)DAT_004c27ec;
  if (iVar7 < iVar3 + iVar7) {
    local_8 = &DAT_0053caf0 + iVar5 + iVar7 * 0x32;
    iVar4 = iVar7;
    cVar2 = DAT_004c27ec;
    do {
      iVar6 = iVar5;
      puVar8 = local_8;
      if (iVar5 < iVar3 + iVar5) {
        do {
          if ((*puVar8 & 0x420) != 0) {
            FUN_0042f120(iVar4,iVar6);
            cVar2 = DAT_004c27ec;
          }
          iVar6 = iVar6 + 1;
          puVar8 = puVar8 + 1;
        } while (iVar6 < cVar2 + iVar5);
      }
      iVar4 = iVar4 + 1;
      local_8 = local_8 + 0x32;
      iVar3 = (int)cVar2;
    } while (iVar4 < iVar3 + iVar7);
  }
  pbVar1 = &DAT_0058bcbf;
  do {
    if (5 < *(short *)(pbVar1 + -7)) {
      if (*(short *)(pbVar1 + -7) < 0x11) {
        *pbVar1 = *pbVar1 & 0xbf;
        iVar7 = (int)*(short *)(pbVar1 + -7);
        iVar5 = (int)(char)(&DAT_004c26c0)[iVar7 * 0x14];
        if ((5 < iVar7) && (iVar7 != 7)) {
          iVar3 = FUN_00467130((&DAT_005a8c38)[iVar7],*(int *)(pbVar1 + 1) + 1,99);
          (&DAT_005a8c38)[iVar7] = iVar3;
          iVar5 = iVar3 + -1 + iVar5;
        }
        iVar7 = 0;
        if (0 < iVar5) {
          do {
            iVar3 = 0;
            do {
              if ((*(byte *)(&DAT_0053caf0 +
                            iVar3 + *(short *)(pbVar1 + -3) +
                            (*(short *)(pbVar1 + -5) + iVar7) * 0x32) & 0x40) != 0) {
                *pbVar1 = *pbVar1 | 0x40;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar5);
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
        if ((DAT_00822c88 != 0) && ((_DAT_0059e7b8 & 0x1000000) == 0)) goto LAB_0042f493;
      }
      *pbVar1 = *pbVar1 | 0x40;
    }
LAB_0042f493:
    pbVar1 = pbVar1 + 0x10;
    if (0x58ccbe < (int)pbVar1) {
      return;
    }
  } while( true );
}

