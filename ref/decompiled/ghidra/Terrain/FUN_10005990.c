/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10005990 @ 0x10005990 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10005990(void *this,int param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  Tile *pTVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_8c [16];
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  Tile *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  Terrain *local_8;
  
  puVar5 = local_8c;
  for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  local_1c = (Tile *)0x0;
  local_18 = 0x10 << ((byte)*(undefined4 *)((int)this + 0x1c) & 0x1f);
  local_14 = local_18;
  local_10 = local_18;
  local_c = local_18;
  local_8 = this;
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(_DAT_1005f344 + param_2,0,0x3f800000,0);
  __chkesp();
  if (param_1 != 0) {
    local_48 = thunk_FUN_10006810(param_1);
    local_48 = 0x19 - local_48;
    fVar7 = (float)local_48 * _DAT_1005f340;
    uVar6 = 0;
    local_4c = thunk_FUN_10005960(param_1);
    local_4c = 0x19 - local_4c;
    glTranslatef((float)local_4c * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  thunk_FUN_1000adc0(param_2);
  if (param_1 == 0) {
    for (local_20 = 10; local_20 < 0x28; local_20 = local_20 + 1) {
      for (local_24 = 0x28; 10 < local_24; local_24 = local_24 + -1) {
        pTVar3 = Terrain::tileAt(local_8,local_24,local_20);
        thunk_FUN_1000e6c0(pTVar3);
      }
    }
  }
  else {
    iVar4 = thunk_FUN_10006810(param_1);
    if (iVar4 < local_c) {
      local_c = thunk_FUN_10006810(param_1);
    }
    iVar4 = thunk_FUN_10006810(param_1);
    if (0x32 - iVar4 < local_10) {
      local_10 = thunk_FUN_10006810(param_1);
      local_10 = 0x32 - local_10;
    }
    iVar4 = thunk_FUN_10005960(param_1);
    if (iVar4 < local_14) {
      local_14 = thunk_FUN_10005960(param_1);
    }
    iVar4 = thunk_FUN_10005960(param_1);
    if (0x32 - iVar4 < local_18) {
      local_18 = thunk_FUN_10005960(param_1);
      local_18 = 0x32 - local_18;
    }
    if (param_2 == _DAT_1005f1e0) {
      local_28 = thunk_FUN_10006810(param_1);
      local_28 = local_28 - local_c;
      while (iVar4 = thunk_FUN_10006810(param_1), local_28 < iVar4 + local_10) {
        local_2c = thunk_FUN_10005960(param_1);
        local_2c = local_2c + local_18;
        while (iVar4 = thunk_FUN_10005960(param_1), iVar4 - local_14 <= local_2c) {
          local_1c = Terrain::tileAt(local_8,local_2c,local_28);
          if (((local_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_1c), !bVar1)) &&
             (cVar2 = thunk_FUN_10006850(local_8,(int)local_1c,param_1,param_2), cVar2 == '\0')) {
            thunk_FUN_1000e6c0(local_1c);
          }
          local_2c = local_2c + -1;
        }
        local_28 = local_28 + 1;
      }
    }
    else if (param_2 == 90.0) {
      local_30 = thunk_FUN_10005960(param_1);
      local_30 = local_30 + local_18;
      while (iVar4 = thunk_FUN_10005960(param_1), iVar4 - local_14 <= local_30) {
        local_34 = thunk_FUN_10006810(param_1);
        local_34 = local_34 + local_10;
        while (iVar4 = thunk_FUN_10006810(param_1), iVar4 - local_c <= local_34) {
          local_1c = Terrain::tileAt(local_8,local_30,local_34);
          if (((local_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_1c), !bVar1)) &&
             (cVar2 = thunk_FUN_10006850(local_8,(int)local_1c,param_1,90.0), cVar2 == '\0')) {
            thunk_FUN_1000e6c0(local_1c);
          }
          local_34 = local_34 + -1;
        }
        local_30 = local_30 + -1;
      }
    }
    else if (param_2 == 180.0) {
      local_38 = thunk_FUN_10006810(param_1);
      local_38 = local_38 + local_10;
      while (iVar4 = thunk_FUN_10006810(param_1), iVar4 - local_c <= local_38) {
        local_3c = thunk_FUN_10005960(param_1);
        local_3c = local_3c - local_14;
        while (iVar4 = thunk_FUN_10005960(param_1), local_3c < iVar4 + local_18) {
          local_1c = Terrain::tileAt(local_8,local_3c,local_38);
          if (((local_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_1c), !bVar1)) &&
             (cVar2 = thunk_FUN_10006850(local_8,(int)local_1c,param_1,180.0), cVar2 == '\0')) {
            thunk_FUN_1000e6c0(local_1c);
          }
          local_3c = local_3c + 1;
        }
        local_38 = local_38 + -1;
      }
    }
    else {
      local_40 = thunk_FUN_10006810(param_1);
      local_40 = local_40 - local_c;
      while (iVar4 = thunk_FUN_10006810(param_1), local_40 < iVar4 + local_10) {
        local_44 = thunk_FUN_10005960(param_1);
        local_44 = local_44 - local_14;
        while (iVar4 = thunk_FUN_10005960(param_1), local_44 < iVar4 + local_18) {
          local_1c = Terrain::tileAt(local_8,local_44,local_40);
          if (((local_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)local_1c), !bVar1)) &&
             (cVar2 = thunk_FUN_10006850(local_8,(int)local_1c,param_1,param_2), cVar2 == '\0')) {
            thunk_FUN_1000e6c0(local_1c);
          }
          local_44 = local_44 + 1;
        }
        local_40 = local_40 + 1;
      }
    }
  }
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  local_38 = 0x10005e89;
  __chkesp();
  return;
}

