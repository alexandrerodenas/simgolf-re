/* Ghidra decompiled: Terrain.dll */
/* Function: pathUpdateRender @ 0x100011E0 */
/* Body size: 5 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::pathUpdateRender(class Tile *,float) */

void __thiscall Terrain::pathUpdateRender(Terrain *this,Tile *param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 auStack_7c [16];
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  Tile *pTStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  Terrain *pTStack_8;
  
                    /* 0x11e0  26  ?pathUpdateRender@Terrain@@QAEXPAVTile@@M@Z */
  puVar4 = auStack_7c;
  for (iVar5 = 0x1e; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  iStack_18 = 0xf << ((byte)*(undefined4 *)(this + 0x1c) & 0x1f);
  iStack_14 = iStack_18;
  iStack_10 = iStack_18;
  iStack_c = iStack_18;
  pTStack_8 = this;
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(_DAT_1005f344 + param_2,0,0x3f800000,0);
  __chkesp();
  if (param_1 != (Tile *)0x0) {
    iStack_38 = thunk_FUN_10006810((int)param_1);
    iStack_38 = 0x19 - iStack_38;
    fVar7 = (float)iStack_38 * _DAT_1005f340;
    uVar6 = 0;
    iStack_3c = thunk_FUN_10005960((int)param_1);
    iStack_3c = 0x19 - iStack_3c;
    glTranslatef((float)iStack_3c * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  iVar5 = thunk_FUN_10006810((int)param_1);
  if (iVar5 < iStack_c) {
    iStack_c = thunk_FUN_10006810((int)param_1);
  }
  iVar5 = thunk_FUN_10006810((int)param_1);
  if (0x32 - iVar5 < iStack_10) {
    iStack_10 = thunk_FUN_10006810((int)param_1);
    iStack_10 = 0x32 - iStack_10;
  }
  iVar5 = thunk_FUN_10005960((int)param_1);
  if (iVar5 < iStack_14) {
    iStack_14 = thunk_FUN_10005960((int)param_1);
    iStack_14 = iStack_14 + 1;
  }
  iVar5 = thunk_FUN_10005960((int)param_1);
  if (0x31 - iVar5 < iStack_18) {
    iStack_18 = thunk_FUN_10005960((int)param_1);
    iStack_18 = 0x31 - iStack_18;
  }
  iStack_20 = thunk_FUN_10006810((int)param_1);
  iStack_20 = iStack_20 - iStack_c;
  while( true ) {
    iVar5 = thunk_FUN_10006810((int)param_1);
    if (iVar5 + iStack_10 <= iStack_20) break;
    iStack_24 = thunk_FUN_10005960((int)param_1);
    iStack_24 = iStack_24 + iStack_18;
    while( true ) {
      iVar5 = thunk_FUN_10005960((int)param_1);
      if (iStack_24 <= iVar5 - iStack_14) break;
      pTStack_1c = tileAt(pTStack_8,iStack_24,iStack_20);
      cVar1 = thunk_FUN_10013320((int)pTStack_1c);
      if (cVar1 != '\0') {
        bVar2 = thunk_FUN_10015460((int)pTStack_1c);
        if (!bVar2) {
          cVar1 = thunk_FUN_10006850(pTStack_8,(int)pTStack_1c,(int)param_1,param_2);
          if (cVar1 == '\0') {
            thunk_FUN_100381a0((int)pTStack_1c,param_1,param_2);
            thunk_FUN_10007380(pTStack_1c,(int)param_1,param_2);
          }
        }
      }
      iStack_24 = iStack_24 + -1;
    }
    iStack_20 = iStack_20 + 1;
  }
  piVar3 = (int *)thunk_FUN_1000af70(pTStack_8 + 0x164ac4,&uStack_2c);
  iStack_28 = *piVar3;
  while( true ) {
    piVar3 = (int *)thunk_FUN_1000afe0(pTStack_8 + 0x164ac4,&uStack_34);
    cVar1 = thunk_FUN_1000b3d0(&iStack_28,piVar3);
    if (cVar1 == '\0') break;
    puVar4 = (undefined4 *)thunk_FUN_1000b2d0(&iStack_28);
    thunk_FUN_1000e6c0((void *)*puVar4);
    thunk_FUN_1000b320(&iStack_28,&uStack_30);
  }
  thunk_FUN_1000b210(pTStack_8 + 0x164ac4);
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  iStack_38 = 0x100066ff;
  __chkesp();
  return;
}

