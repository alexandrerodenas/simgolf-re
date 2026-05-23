/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044a410 @ 0x0044A410 */
/* Body size: 402 addresses */


undefined4 FUN_0044a410(Tile *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_004493b0(param_2,param_3);
  if (iVar2 != 0) {
    bVar1 = Terrain::hasPath(DAT_00820ed0,param_1);
    if (!bVar1) {
      iVar2 = param_3 + param_2 * 0x32;
      if ((*(byte *)(&DAT_0053caf0 + iVar2) & 0x40) != 0) {
        iVar7 = 0;
        iVar5 = 0;
        do {
          iVar6 = 0;
          do {
            iVar3 = FUN_004493b0(iVar7,iVar6);
            if (iVar3 != 0) {
              Terrain::updatePath(DAT_00820ed0,iVar7,iVar6,
                                  *(byte *)(&DAT_0053caf0 + iVar5 + iVar6) & 0x40);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 0x32);
          iVar5 = iVar5 + 0x32;
          iVar7 = iVar7 + 1;
        } while (iVar5 < 0x9c4);
        DAT_00820f2b = 1;
      }
      uVar4 = *(byte *)(&DAT_0053caf0 + iVar2) & 0x40;
      iVar2 = FUN_004493b0(param_2,param_3);
      Terrain::layPath(DAT_00820ed0,param_1,iVar2,uVar4);
      return 1;
    }
  }
  iVar2 = FUN_004493b0(param_2,param_3);
  if (iVar2 == 0) {
    bVar1 = Terrain::hasPath(DAT_00820ed0,param_1);
    if (bVar1) {
      bVar1 = Terrain::hasConnectedPath(DAT_00820ed0,param_2,param_3);
      if (bVar1) {
        iVar5 = 0;
        iVar2 = 0;
        do {
          iVar7 = 0;
          do {
            iVar6 = FUN_004493b0(iVar5,iVar7);
            if (iVar6 != 0) {
              Terrain::updatePath(DAT_00820ed0,iVar5,iVar7,
                                  *(byte *)(&DAT_0053caf0 + iVar2 + iVar7) & 0x40);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < 0x32);
          iVar2 = iVar2 + 0x32;
          iVar5 = iVar5 + 1;
        } while (iVar2 < 0x9c4);
        DAT_00820f2b = 1;
      }
      uVar4 = *(byte *)(&DAT_0053caf0 + param_3 + param_2 * 0x32) & 0x40;
      iVar2 = FUN_004493b0(param_2,param_3);
      Terrain::layPath(DAT_00820ed0,param_1,iVar2,uVar4);
      return 1;
    }
  }
  return 0;
}

