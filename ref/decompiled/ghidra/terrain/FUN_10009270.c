/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10009270 @ 0x10009270 */
/* Body size: 1840 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10009270(Tile *param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_88 [16];
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  Tile *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  Terrain *local_8;
  
  puVar4 = local_88;
  for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_2c = (Tile *)0x0;
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(_DAT_1005f344 + param_3,0,0x3f800000,0);
  __chkesp();
  if (param_1 != (Tile *)0x0) {
    local_40 = thunk_FUN_10006810((int)param_1);
    local_40 = 0x19 - local_40;
    fVar7 = (float)local_40 * _DAT_1005f340;
    uVar6 = 0;
    local_44 = thunk_FUN_10005960((int)param_1);
    local_44 = 0x19 - local_44;
    glTranslatef((float)local_44 * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  thunk_FUN_1000adc0(param_3);
  local_48 = param_2 + -1;
  switch(local_48) {
  case 0:
    Terrain::stripRender(local_8,param_1,8,param_3);
    Terrain::stripRender(local_8,param_1,2,param_3);
    break;
  case 1:
    local_1c = 0xf << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_20 = 3 << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_24 = (*(int *)(local_8 + 0x1c) << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f)) + 5;
    local_28 = 4;
    local_c = thunk_FUN_10005960((int)param_1);
    local_c = local_c - local_24;
    while (iVar5 = thunk_FUN_10005960((int)param_1), local_c < iVar5 + local_28) {
      local_18 = thunk_FUN_10006810((int)param_1);
      local_18 = local_18 - local_1c;
      local_14 = local_c;
      while (((iVar5 = thunk_FUN_10006810((int)param_1), local_18 < iVar5 + local_20 &&
              (local_2c = Terrain::tileAt(local_8,local_14,local_18), local_18 < 0x32)) &&
             (local_14 < 0x32))) {
        if (((-1 < local_14) && (-1 < local_18)) &&
           ((bVar1 = thunk_FUN_10015460((int)local_2c), !bVar1 &&
            (cVar2 = thunk_FUN_10006850(local_8,(int)local_2c,(int)param_1,param_3), cVar2 == '\0'))
           )) {
          thunk_FUN_100381a0((int)local_2c,param_1,param_3);
          thunk_FUN_10007380(local_2c,(int)param_1,param_3);
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
      }
      local_c = local_c + 1;
    }
    break;
  case 2:
    Terrain::stripRender(local_8,param_1,2,param_3);
    Terrain::stripRender(local_8,param_1,4,param_3);
    break;
  case 3:
    local_24 = 4 << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_28 = 0x10 << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_1c = 2;
    local_20 = (*(int *)(local_8 + 0x1c) << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f)) + 9;
    local_10 = thunk_FUN_10006810((int)param_1);
    local_10 = local_10 - local_20;
    while (iVar5 = thunk_FUN_10006810((int)param_1), local_10 < iVar5 + local_1c) {
      local_14 = thunk_FUN_10005960((int)param_1);
      local_14 = local_14 + local_28;
      local_18 = local_10;
      while (((iVar5 = thunk_FUN_10005960((int)param_1), iVar5 - local_24 < local_14 &&
              (local_2c = Terrain::tileAt(local_8,local_14,local_18), -1 < local_14)) &&
             (local_18 < 0x32))) {
        if (((-1 < local_18) && (local_14 < 0x32)) &&
           ((bVar1 = thunk_FUN_10015460((int)local_2c), !bVar1 &&
            (cVar2 = thunk_FUN_10006850(local_8,(int)local_2c,(int)param_1,param_3), cVar2 == '\0'))
           )) {
          thunk_FUN_100381a0((int)local_2c,param_1,param_3);
          thunk_FUN_10007380(local_2c,(int)param_1,param_3);
        }
        local_14 = local_14 + -1;
        local_18 = local_18 + 1;
      }
      local_10 = local_10 + 1;
    }
    break;
  case 4:
    Terrain::stripRender(local_8,param_1,4,param_3);
    Terrain::stripRender(local_8,param_1,6,param_3);
    break;
  case 5:
    local_24 = 3 << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_28 = 0x10 << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_1c = 4;
    local_20 = (*(int *)(local_8 + 0x1c) << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f)) + 8;
    local_10 = thunk_FUN_10006810((int)param_1);
    local_10 = local_10 - local_20;
    while (iVar5 = thunk_FUN_10006810((int)param_1), local_10 < iVar5 + local_1c) {
      local_14 = thunk_FUN_10005960((int)param_1);
      local_14 = local_14 - local_28;
      local_18 = local_10;
      while (((iVar5 = thunk_FUN_10005960((int)param_1), local_14 < iVar5 + local_24 &&
              (local_2c = Terrain::tileAt(local_8,local_14,local_18), local_18 < 0x32)) &&
             (local_14 < 0x32))) {
        if ((((-1 < local_14) && (-1 < local_18)) &&
            (bVar1 = thunk_FUN_10015460((int)local_2c), !bVar1)) &&
           (cVar2 = thunk_FUN_10006850(local_8,(int)local_2c,(int)param_1,param_3), cVar2 == '\0'))
        {
          thunk_FUN_100381a0((int)local_2c,param_1,param_3);
          thunk_FUN_10007380(local_2c,(int)param_1,param_3);
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + 1;
      }
      local_10 = local_10 + 1;
    }
    break;
  case 6:
    Terrain::stripRender(local_8,param_1,8,param_3);
    Terrain::stripRender(local_8,param_1,6,param_3);
    break;
  case 7:
    local_24 = 4 << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_28 = 0x11 << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f);
    local_1c = (*(int *)(local_8 + 0x1c) << ((byte)*(undefined4 *)(local_8 + 0x1c) & 0x1f)) + 0xc;
    local_20 = -2;
    local_10 = thunk_FUN_10006810((int)param_1);
    local_10 = local_10 + local_20;
    while (iVar5 = thunk_FUN_10006810((int)param_1), local_10 < iVar5 + local_1c) {
      local_14 = thunk_FUN_10005960((int)param_1);
      local_14 = local_14 - local_28;
      local_18 = local_10;
      while (((iVar5 = thunk_FUN_10005960((int)param_1), local_14 < iVar5 + local_24 &&
              (local_2c = Terrain::tileAt(local_8,local_14,local_18), -1 < local_18)) &&
             (local_14 < 0x32))) {
        if (((-1 < local_14) && (local_18 < 0x32)) &&
           ((bVar1 = thunk_FUN_10015460((int)local_2c), !bVar1 &&
            (cVar2 = thunk_FUN_10006850(local_8,(int)local_2c,(int)param_1,param_3), cVar2 == '\0'))
           )) {
          thunk_FUN_100381a0((int)local_2c,param_1,param_3);
          thunk_FUN_10007380(local_2c,(int)param_1,param_3);
        }
        local_14 = local_14 + 1;
        local_18 = local_18 + -1;
      }
      local_10 = local_10 + 1;
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
  local_38 = 0x1000999a;
  __chkesp();
  return;
}

