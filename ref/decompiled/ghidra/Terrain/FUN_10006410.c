/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10006410 @ 0x10006410 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10006410(void *this,int param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_7c [16];
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  Tile *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  Terrain *local_8;
  
  puVar4 = local_7c;
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_18 = 0xf << ((byte)*(undefined4 *)((int)this + 0x1c) & 0x1f);
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
    local_38 = thunk_FUN_10006810(param_1);
    local_38 = 0x19 - local_38;
    fVar7 = (float)local_38 * _DAT_1005f340;
    uVar6 = 0;
    local_3c = thunk_FUN_10005960(param_1);
    local_3c = 0x19 - local_3c;
    glTranslatef((float)local_3c * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  iVar5 = thunk_FUN_10006810(param_1);
  if (iVar5 < local_c) {
    local_c = thunk_FUN_10006810(param_1);
  }
  iVar5 = thunk_FUN_10006810(param_1);
  if (0x32 - iVar5 < local_10) {
    local_10 = thunk_FUN_10006810(param_1);
    local_10 = 0x32 - local_10;
  }
  iVar5 = thunk_FUN_10005960(param_1);
  if (iVar5 < local_14) {
    local_14 = thunk_FUN_10005960(param_1);
    local_14 = local_14 + 1;
  }
  iVar5 = thunk_FUN_10005960(param_1);
  if (0x31 - iVar5 < local_18) {
    local_18 = thunk_FUN_10005960(param_1);
    local_18 = 0x31 - local_18;
  }
  local_20 = thunk_FUN_10006810(param_1);
  local_20 = local_20 - local_c;
  while( true ) {
    iVar5 = thunk_FUN_10006810(param_1);
    if (iVar5 + local_10 <= local_20) break;
    local_24 = thunk_FUN_10005960(param_1);
    local_24 = local_24 + local_18;
    while( true ) {
      iVar5 = thunk_FUN_10005960(param_1);
      if (local_24 <= iVar5 - local_14) break;
      local_1c = Terrain::tileAt(local_8,local_24,local_20);
      cVar1 = thunk_FUN_10013320((int)local_1c);
      if (cVar1 != '\0') {
        bVar2 = thunk_FUN_10015460((int)local_1c);
        if (!bVar2) {
          cVar1 = thunk_FUN_10006850(local_8,(int)local_1c,param_1,param_2);
          if (cVar1 == '\0') {
            thunk_FUN_100381a0((int)local_1c,param_1,param_2);
            thunk_FUN_10007380(local_1c,param_1,param_2);
          }
        }
      }
      local_24 = local_24 + -1;
    }
    local_20 = local_20 + 1;
  }
  piVar3 = (int *)thunk_FUN_1000af70(local_8 + 0x164ac4,&local_2c);
  local_28 = *piVar3;
  while( true ) {
    piVar3 = (int *)thunk_FUN_1000afe0(local_8 + 0x164ac4,&local_34);
    cVar1 = thunk_FUN_1000b3d0(&local_28,piVar3);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)thunk_FUN_1000b2d0(&local_28);
    thunk_FUN_1000e6c0((void *)*puVar4);
    thunk_FUN_1000b320(&local_28,&local_30);
  }
  thunk_FUN_1000b210(local_8 + 0x164ac4);
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  local_38 = 0x100066ff;
  __chkesp();
  return;
}

