/* Ghidra decompiled: golf.exe */
/* Function: FUN_00449f00 @ 0x00449F00 */


undefined4 FUN_00449f00(Tile *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  iVar1 = FUN_004492d0(param_2,param_3);
  if (iVar1 == iVar2) {
    iVar2 = Terrain::getVariation(DAT_00820ed0,param_1);
    iVar1 = FUN_004492f0(param_2,param_3);
    if (iVar1 == iVar2) {
      return 0;
    }
  }
  iVar2 = FUN_004492d0(param_2,param_3);
  if ((iVar2 != 7) && (*(int *)(param_1 + 0x24) != 7)) {
    iVar2 = FUN_004492d0(param_2,param_3);
    if ((iVar2 != 6) && (*(int *)(param_1 + 0x24) != 6)) goto LAB_00449f75;
  }
  DAT_00820f2c = 1;
LAB_00449f75:
  iVar2 = FUN_004492f0(param_2,param_3);
  iVar1 = FUN_004492d0(param_2,param_3);
  Terrain::setType(DAT_00820ed0,param_1,iVar1,iVar2);
  return 1;
}

