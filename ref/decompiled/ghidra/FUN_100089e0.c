/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100089e0 @ 0x100089E0 */
/* Body size: 1200 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100089e0(int param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_84 [16];
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  Tile *local_c;
  Terrain *local_8;
  
  puVar4 = local_84;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (param_1 == 0) {
    FUN_10019610((uint *)"pTile != NULL",(uint *)"C:\\Projects\\3DTerrainLowPoly\\Terrain.cpp",
                 DAT_10063e48 + 3);
  }
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(_DAT_1005f344 + param_3,0,0x3f800000,0);
  __chkesp();
  if (param_1 != 0) {
    local_40 = thunk_FUN_10006810(param_2);
    local_40 = 0x19 - local_40;
    fVar7 = (float)local_40 * _DAT_1005f340;
    uVar6 = 0;
    local_44 = thunk_FUN_10005960(param_2);
    local_44 = 0x19 - local_44;
    glTranslatef((float)local_44 * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  thunk_FUN_1000adc0(param_3);
  if (param_3 == _DAT_1005f1e0) {
    local_10 = thunk_FUN_10006810(param_1);
    local_10 = local_10 + -2;
    while (iVar5 = thunk_FUN_10006810(param_1), local_10 <= iVar5 + 2) {
      local_14 = thunk_FUN_10005960(param_1);
      local_14 = local_14 + 2;
      while (iVar5 = thunk_FUN_10005960(param_1), iVar5 + -2 <= local_14) {
        local_c = Terrain::tileAt(local_8,local_14,local_10);
        if ((local_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_c), !bVar1)) {
          thunk_FUN_100381a0((int)local_c,param_1,param_3);
          thunk_FUN_10007380(local_c,param_1,param_3);
        }
        local_14 = local_14 + -1;
      }
      local_10 = local_10 + 1;
    }
  }
  else if (param_3 == 90.0) {
    local_18 = thunk_FUN_10005960(param_1);
    local_18 = local_18 + 2;
    while (iVar5 = thunk_FUN_10005960(param_1), iVar5 + -2 <= local_18) {
      local_1c = thunk_FUN_10006810(param_1);
      local_1c = local_1c + 2;
      while (iVar5 = thunk_FUN_10006810(param_1), iVar5 + -2 <= local_1c) {
        local_c = Terrain::tileAt(local_8,local_18,local_1c);
        if ((local_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_c), !bVar1)) {
          thunk_FUN_100381a0((int)local_c,param_1,90.0);
          thunk_FUN_10007380(local_c,param_1,90.0);
        }
        local_1c = local_1c + -1;
      }
      local_18 = local_18 + -1;
    }
  }
  else if (param_3 == 180.0) {
    local_20 = thunk_FUN_10006810(param_1);
    local_20 = local_20 + 2;
    while (iVar5 = thunk_FUN_10006810(param_1), iVar5 + -2 <= local_20) {
      local_24 = thunk_FUN_10005960(param_1);
      local_24 = local_24 + -2;
      while (iVar5 = thunk_FUN_10005960(param_1), local_24 <= iVar5 + 2) {
        local_c = Terrain::tileAt(local_8,local_24,local_20);
        if ((local_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_c), !bVar1)) {
          thunk_FUN_100381a0((int)local_c,param_1,180.0);
          thunk_FUN_10007380(local_c,param_1,180.0);
        }
        local_24 = local_24 + 1;
      }
      local_20 = local_20 + -1;
    }
  }
  else {
    local_28 = thunk_FUN_10006810(param_1);
    local_28 = local_28 + -2;
    while (iVar5 = thunk_FUN_10006810(param_1), local_28 <= iVar5 + 2) {
      local_2c = thunk_FUN_10005960(param_1);
      local_2c = local_2c + -2;
      while (iVar5 = thunk_FUN_10005960(param_1), local_2c <= iVar5 + 2) {
        local_c = Terrain::tileAt(local_8,local_2c,local_28);
        if ((local_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_c), !bVar1)) {
          thunk_FUN_100381a0((int)local_c,param_1,param_3);
          thunk_FUN_10007380(local_c,param_1,param_3);
        }
        local_2c = local_2c + 1;
      }
      local_28 = local_28 + 1;
    }
  }
  piVar3 = (int *)thunk_FUN_1000af70(local_8 + 0x164ac4,&local_34);
  local_30 = *piVar3;
  while( true ) {
    piVar3 = (int *)thunk_FUN_1000afe0(local_8 + 0x164ac4,&local_3c);
    cVar2 = thunk_FUN_1000b3d0(&local_30,piVar3);
    if (cVar2 == '\0') break;
    puVar4 = (undefined4 *)thunk_FUN_1000b2d0(&local_30);
    thunk_FUN_1000e6c0((void *)*puVar4);
    thunk_FUN_1000b320(&local_30,&local_38);
  }
  thunk_FUN_1000b210(local_8 + 0x164ac4);
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  local_38 = 0x10008e8a;
  __chkesp();
  return;
}

