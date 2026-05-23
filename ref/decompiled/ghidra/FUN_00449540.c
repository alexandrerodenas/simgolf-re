/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449540 @ 0x00449540 */
/* Body size: 588 addresses */


void FUN_00449540(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  Terrain *pTVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = 0x31;
  do {
    FUN_00483bd0();
    iVar6 = 0x31;
    do {
      if ((((iVar7 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < iVar7)) &&
          (iVar6 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < iVar6)) {
        pTVar4 = DAT_00820ed0 + (*(int *)(DAT_00820ed0 + 0x14) * iVar6 + iVar7) * 0x248 + 0x3a4;
      }
      else {
        pTVar4 = (Terrain *)0x0;
      }
      iVar1 = FUN_004492f0(iVar7,iVar6);
      iVar2 = FUN_004492d0(iVar7,iVar6);
      Terrain::setType(DAT_00820ed0,(Tile *)pTVar4,iVar2,iVar1);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  iVar7 = 0x31;
  do {
    FUN_00483bd0();
    iVar6 = 0x31;
    do {
      iVar1 = FUN_004492d0(iVar7,iVar6);
      if (iVar1 != 0x11) {
        iVar1 = 1;
        do {
          iVar2 = FUN_00449310(iVar7,iVar6,iVar1);
          if (3 < iVar2) {
            iVar5 = 0;
            iVar2 = FUN_00449310(iVar7,iVar6,iVar1);
            if (iVar2 != 3 && -1 < iVar2 + -3) {
              do {
                if (((iVar7 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < iVar7)) &&
                   ((iVar6 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < iVar6)))) {
                  pTVar4 = DAT_00820ed0 +
                           (*(int *)(DAT_00820ed0 + 0x14) * iVar6 + iVar7) * 0x248 + 0x3a4;
                }
                else {
                  pTVar4 = (Terrain *)0x0;
                }
                Terrain::elevateCorner(DAT_00820ed0,(Tile *)pTVar4,iVar1);
                iVar5 = iVar5 + 1;
                iVar2 = FUN_00449310(iVar7,iVar6,iVar1);
              } while (iVar5 < iVar2 + -3);
            }
          }
          iVar1 = iVar1 + 2;
        } while (iVar1 < 8);
      }
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  iVar7 = 0x31;
  do {
    iVar6 = 0x31;
    do {
      if (((iVar7 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < iVar7)) &&
         ((iVar6 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < iVar6)))) {
        pTVar4 = DAT_00820ed0 + (*(int *)(DAT_00820ed0 + 0x14) * iVar6 + iVar7) * 0x248 + 0x3a4;
      }
      else {
        pTVar4 = (Terrain *)0x0;
      }
      Terrain::calcNormals(DAT_00820ed0,(Tile *)pTVar4);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  iVar7 = 0x31;
  do {
    iVar6 = 0x31;
    do {
      iVar1 = 0;
      do {
        iVar2 = FUN_00449330(iVar7,iVar6,iVar1);
        if (iVar2 != 0) {
          if ((((iVar7 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < iVar7)) &&
              (iVar6 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < iVar6)) {
            pTVar4 = DAT_00820ed0 + (*(int *)(DAT_00820ed0 + 0x14) * iVar6 + iVar7) * 0x248 + 0x3a4;
          }
          else {
            pTVar4 = (Terrain *)0x0;
          }
          bVar8 = true;
          iVar2 = FUN_00449330(iVar7,iVar6,iVar1);
          Terrain::setWall(DAT_00820ed0,(Tile *)pTVar4,iVar1,iVar2,bVar8);
        }
        iVar1 = iVar1 + 2;
      } while (iVar1 < 8);
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  iVar6 = 0x31;
  iVar7 = 0x992;
  do {
    iVar1 = 0x31;
    do {
      iVar2 = FUN_004493b0(iVar6,iVar1);
      if (iVar2 != 0) {
        if (((iVar6 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < iVar7)) &&
           ((iVar1 < *(int *)(DAT_00820ed0 + 0x18) && (-1 < iVar1)))) {
          pTVar4 = DAT_00820ed0 + (*(int *)(DAT_00820ed0 + 0x14) * iVar1 + iVar6) * 0x248 + 0x3a4;
        }
        else {
          pTVar4 = (Terrain *)0x0;
        }
        uVar3 = *(byte *)(&DAT_0053caf0 + iVar1 + iVar7) & 0x40;
        iVar2 = FUN_004493b0(iVar6,iVar1);
        Terrain::layPath(DAT_00820ed0,(Tile *)pTVar4,iVar2,uVar3);
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    iVar6 = iVar6 + -1;
    iVar7 = iVar7 + -0x32;
  } while (-1 < iVar7);
  return;
}

