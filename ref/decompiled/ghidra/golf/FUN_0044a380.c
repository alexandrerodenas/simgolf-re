/* Ghidra decompiled: golf.exe */
/* Function: FUN_0044a380 @ 0x0044A380 */
/* Body size: 132 addresses */


undefined1 FUN_0044a380(Tile *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined1 local_1;
  
  local_1 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_00449330(param_2,param_3,iVar2);
    if ((iVar1 == 0) || (param_1[iVar2 + 0x234] != (Tile)0x0)) {
      iVar1 = FUN_00449330(param_2,param_3,iVar2);
      if ((iVar1 == 0) && (param_1[iVar2 + 0x234] != (Tile)0x0)) {
        uVar3 = false;
        iVar1 = 0;
        goto LAB_0044a3e0;
      }
    }
    else {
      uVar3 = 1;
      iVar1 = FUN_00449330(param_2,param_3,iVar2);
LAB_0044a3e0:
      Terrain::setWall(DAT_00820ed0,param_1,iVar2,iVar1,(bool)uVar3);
      local_1 = 1;
    }
    iVar2 = iVar2 + 2;
    if (7 < iVar2) {
      return local_1;
    }
  } while( true );
}

