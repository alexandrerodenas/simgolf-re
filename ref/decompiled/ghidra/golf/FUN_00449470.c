/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449470 @ 0x00449470 */


void FUN_00449470(void)

{
  int iVar1;
  int iVar2;
  Terrain *pTVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0x31;
  do {
    FUN_00483bd0();
    iVar4 = 0x31;
    do {
      if ((((iVar5 < *(int *)(DAT_00820ed0 + 0x14)) && (-1 < iVar5)) &&
          (iVar4 < *(int *)(DAT_00820ed0 + 0x18))) && (-1 < iVar4)) {
        pTVar3 = DAT_00820ed0 + (*(int *)(DAT_00820ed0 + 0x14) * iVar4 + iVar5) * 0x248 + 0x3a4;
      }
      else {
        pTVar3 = (Terrain *)0x0;
      }
      iVar2 = *(int *)(pTVar3 + 0x24);
      iVar1 = FUN_004492d0(iVar5,iVar4);
      if (iVar1 == iVar2) {
        iVar2 = Terrain::getVariation(DAT_00820ed0,(Tile *)pTVar3);
        iVar1 = FUN_004492f0(iVar5,iVar4);
        if (iVar1 != iVar2) goto LAB_004494e0;
      }
      else {
LAB_004494e0:
        iVar2 = FUN_004492f0(iVar5,iVar4);
        iVar1 = FUN_004492d0(iVar5,iVar4);
        Terrain::setType(DAT_00820ed0,(Tile *)pTVar3,iVar1,iVar2);
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      DAT_00820f2a = 1;
      return;
    }
  } while( true );
}

