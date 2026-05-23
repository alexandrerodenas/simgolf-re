/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10007380 @ 0x10007380 */
/* Body size: 853 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10007380(Tile *param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_60 [16];
  int local_20;
  int local_1c;
  int local_18;
  Tile *local_14 [3];
  Terrain *local_8;
  
  puVar4 = local_60;
  for (iVar3 = 0x17; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_18 = thunk_FUN_10005960((int)param_1);
  local_1c = thunk_FUN_10006810((int)param_1);
  local_14[0] = (Tile *)0x0;
  local_14[1] = (Tile *)0x0;
  local_14[2] = (Tile *)0x0;
  if (param_3 == _DAT_1005f1e0) {
    bVar1 = Terrain::getWall(local_8,param_1,6);
    if (bVar1) {
      local_14[0] = Terrain::tileAt(local_8,local_18 + -1,local_1c);
      local_14[2] = Terrain::tileAt(local_8,local_18 + -1,local_1c + 1);
    }
    bVar1 = Terrain::getWall(local_8,param_1,4);
    if (bVar1) {
      local_14[1] = Terrain::tileAt(local_8,local_18,local_1c + 1);
      local_14[2] = Terrain::tileAt(local_8,local_18 + -1,local_1c + 1);
    }
  }
  else if (param_3 == 90.0) {
    bVar1 = Terrain::getWall(local_8,param_1,6);
    if (bVar1) {
      local_14[0] = Terrain::tileAt(local_8,local_18 + -1,local_1c);
      local_14[2] = Terrain::tileAt(local_8,local_18 + -1,local_1c + -1);
    }
    bVar1 = Terrain::getWall(local_8,param_1,0);
    if (bVar1) {
      local_14[1] = Terrain::tileAt(local_8,local_18,local_1c + -1);
      local_14[2] = Terrain::tileAt(local_8,local_18 + -1,local_1c + -1);
    }
  }
  else if (param_3 == 180.0) {
    bVar1 = Terrain::getWall(local_8,param_1,2);
    if (bVar1) {
      local_14[0] = Terrain::tileAt(local_8,local_18 + 1,local_1c);
      local_14[2] = Terrain::tileAt(local_8,local_18 + 1,local_1c + -1);
    }
    bVar1 = Terrain::getWall(local_8,param_1,0);
    if (bVar1) {
      local_14[1] = Terrain::tileAt(local_8,local_18,local_1c + -1);
      local_14[2] = Terrain::tileAt(local_8,local_18 + 1,local_1c + -1);
    }
  }
  else {
    bVar1 = Terrain::getWall(local_8,param_1,2);
    if (bVar1) {
      local_14[0] = Terrain::tileAt(local_8,local_18 + 1,local_1c);
      local_14[2] = Terrain::tileAt(local_8,local_18 + 1,local_1c + 1);
    }
    bVar1 = Terrain::getWall(local_8,param_1,4);
    if (bVar1) {
      local_14[1] = Terrain::tileAt(local_8,local_18,local_1c + 1);
      local_14[2] = Terrain::tileAt(local_8,local_18 + 1,local_1c + 1);
    }
  }
  for (local_20 = 0; local_20 < 3; local_20 = local_20 + 1) {
    if (((local_14[local_20] != (Tile *)0x0) &&
        (bVar1 = thunk_FUN_10015460((int)local_14[local_20]), !bVar1)) &&
       (cVar2 = thunk_FUN_10006850(local_8,(int)local_14[local_20],param_2,param_3), cVar2 == '\0'))
    {
      thunk_FUN_100381a0((int)local_14[local_20],param_2,param_3);
      thunk_FUN_10007380(local_14[local_20],param_2,param_3);
    }
  }
  local_8 = (Terrain *)0x100076cf;
  __chkesp();
  return;
}

