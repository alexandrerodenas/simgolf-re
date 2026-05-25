/* Ghidra decompiled: Terrain.dll */
/* Function: stripRender @ 0x10001299 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::stripRender(class Tile *,int,float) */

void __thiscall Terrain::stripRender(Terrain *this,Tile *param_1,int param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 auStack_88 [16];
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  Tile *pTStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  Terrain *pTStack_8;
  
                    /* 0x1299  35  ?stripRender@Terrain@@QAEXPAVTile@@HM@Z */
  puVar4 = auStack_88;
  for (iVar5 = 0x21; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  pTStack_2c = (Tile *)0x0;
  pTStack_8 = this;
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(_DAT_1005f344 + param_3,0,0x3f800000,0);
  __chkesp();
  if (param_1 != (Tile *)0x0) {
    iStack_40 = thunk_FUN_10006810((int)param_1);
    iStack_40 = 0x19 - iStack_40;
    fVar7 = (float)iStack_40 * _DAT_1005f340;
    uVar6 = 0;
    iStack_44 = thunk_FUN_10005960((int)param_1);
    iStack_44 = 0x19 - iStack_44;
    glTranslatef((float)iStack_44 * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  thunk_FUN_1000adc0(param_3);
  iStack_48 = param_2 + -1;
  switch(iStack_48) {
  case 0:
    stripRender(pTStack_8,param_1,8,param_3);
    stripRender(pTStack_8,param_1,2,param_3);
    break;
  case 1:
    iStack_1c = 0xf << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_20 = 3 << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_24 = (*(int *)(pTStack_8 + 0x1c) << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f)) + 5
    ;
    iStack_28 = 4;
    iStack_c = thunk_FUN_10005960((int)param_1);
    iStack_c = iStack_c - iStack_24;
    while (iVar5 = thunk_FUN_10005960((int)param_1), iStack_c < iVar5 + iStack_28) {
      iStack_18 = thunk_FUN_10006810((int)param_1);
      iStack_18 = iStack_18 - iStack_1c;
      iStack_14 = iStack_c;
      while (((iVar5 = thunk_FUN_10006810((int)param_1), iStack_18 < iVar5 + iStack_20 &&
              (pTStack_2c = tileAt(pTStack_8,iStack_14,iStack_18), iStack_18 < 0x32)) &&
             (iStack_14 < 0x32))) {
        if (((-1 < iStack_14) && (-1 < iStack_18)) &&
           ((bVar1 = thunk_FUN_10015460((int)pTStack_2c), !bVar1 &&
            (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_2c,(int)param_1,param_3),
            cVar2 == '\0')))) {
          thunk_FUN_100381a0((int)pTStack_2c,param_1,param_3);
          thunk_FUN_10007380(pTStack_2c,(int)param_1,param_3);
        }
        iStack_14 = iStack_14 + 1;
        iStack_18 = iStack_18 + 1;
      }
      iStack_c = iStack_c + 1;
    }
    break;
  case 2:
    stripRender(pTStack_8,param_1,2,param_3);
    stripRender(pTStack_8,param_1,4,param_3);
    break;
  case 3:
    iStack_24 = 4 << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_28 = 0x10 << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_1c = 2;
    iStack_20 = (*(int *)(pTStack_8 + 0x1c) << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f)) + 9
    ;
    iStack_10 = thunk_FUN_10006810((int)param_1);
    iStack_10 = iStack_10 - iStack_20;
    while (iVar5 = thunk_FUN_10006810((int)param_1), iStack_10 < iVar5 + iStack_1c) {
      iStack_14 = thunk_FUN_10005960((int)param_1);
      iStack_14 = iStack_14 + iStack_28;
      iStack_18 = iStack_10;
      while (((iVar5 = thunk_FUN_10005960((int)param_1), iVar5 - iStack_24 < iStack_14 &&
              (pTStack_2c = tileAt(pTStack_8,iStack_14,iStack_18), -1 < iStack_14)) &&
             (iStack_18 < 0x32))) {
        if (((-1 < iStack_18) && (iStack_14 < 0x32)) &&
           ((bVar1 = thunk_FUN_10015460((int)pTStack_2c), !bVar1 &&
            (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_2c,(int)param_1,param_3),
            cVar2 == '\0')))) {
          thunk_FUN_100381a0((int)pTStack_2c,param_1,param_3);
          thunk_FUN_10007380(pTStack_2c,(int)param_1,param_3);
        }
        iStack_14 = iStack_14 + -1;
        iStack_18 = iStack_18 + 1;
      }
      iStack_10 = iStack_10 + 1;
    }
    break;
  case 4:
    stripRender(pTStack_8,param_1,4,param_3);
    stripRender(pTStack_8,param_1,6,param_3);
    break;
  case 5:
    iStack_24 = 3 << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_28 = 0x10 << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_1c = 4;
    iStack_20 = (*(int *)(pTStack_8 + 0x1c) << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f)) + 8
    ;
    iStack_10 = thunk_FUN_10006810((int)param_1);
    iStack_10 = iStack_10 - iStack_20;
    while (iVar5 = thunk_FUN_10006810((int)param_1), iStack_10 < iVar5 + iStack_1c) {
      iStack_14 = thunk_FUN_10005960((int)param_1);
      iStack_14 = iStack_14 - iStack_28;
      iStack_18 = iStack_10;
      while (((iVar5 = thunk_FUN_10005960((int)param_1), iStack_14 < iVar5 + iStack_24 &&
              (pTStack_2c = tileAt(pTStack_8,iStack_14,iStack_18), iStack_18 < 0x32)) &&
             (iStack_14 < 0x32))) {
        if ((((-1 < iStack_14) && (-1 < iStack_18)) &&
            (bVar1 = thunk_FUN_10015460((int)pTStack_2c), !bVar1)) &&
           (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_2c,(int)param_1,param_3),
           cVar2 == '\0')) {
          thunk_FUN_100381a0((int)pTStack_2c,param_1,param_3);
          thunk_FUN_10007380(pTStack_2c,(int)param_1,param_3);
        }
        iStack_14 = iStack_14 + 1;
        iStack_18 = iStack_18 + 1;
      }
      iStack_10 = iStack_10 + 1;
    }
    break;
  case 6:
    stripRender(pTStack_8,param_1,8,param_3);
    stripRender(pTStack_8,param_1,6,param_3);
    break;
  case 7:
    iStack_24 = 4 << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_28 = 0x11 << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f);
    iStack_1c = (*(int *)(pTStack_8 + 0x1c) << ((byte)*(undefined4 *)(pTStack_8 + 0x1c) & 0x1f)) +
                0xc;
    iStack_20 = -2;
    iStack_10 = thunk_FUN_10006810((int)param_1);
    iStack_10 = iStack_10 + iStack_20;
    while (iVar5 = thunk_FUN_10006810((int)param_1), iStack_10 < iVar5 + iStack_1c) {
      iStack_14 = thunk_FUN_10005960((int)param_1);
      iStack_14 = iStack_14 - iStack_28;
      iStack_18 = iStack_10;
      while (((iVar5 = thunk_FUN_10005960((int)param_1), iStack_14 < iVar5 + iStack_24 &&
              (pTStack_2c = tileAt(pTStack_8,iStack_14,iStack_18), -1 < iStack_18)) &&
             (iStack_14 < 0x32))) {
        if (((-1 < iStack_14) && (iStack_18 < 0x32)) &&
           ((bVar1 = thunk_FUN_10015460((int)pTStack_2c), !bVar1 &&
            (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_2c,(int)param_1,param_3),
            cVar2 == '\0')))) {
          thunk_FUN_100381a0((int)pTStack_2c,param_1,param_3);
          thunk_FUN_10007380(pTStack_2c,(int)param_1,param_3);
        }
        iStack_14 = iStack_14 + 1;
        iStack_18 = iStack_18 + -1;
      }
      iStack_10 = iStack_10 + 1;
    }
  }
  piVar3 = (int *)thunk_FUN_1000af70(pTStack_8 + 0x164ac4,&uStack_34);
  iStack_30 = *piVar3;
  while( true ) {
    piVar3 = (int *)thunk_FUN_1000afe0(pTStack_8 + 0x164ac4,&uStack_3c);
    cVar2 = thunk_FUN_1000b3d0(&iStack_30,piVar3);
    if (cVar2 == '\0') break;
    puVar4 = (undefined4 *)thunk_FUN_1000b2d0(&iStack_30);
    thunk_FUN_1000e6c0((void *)*puVar4);
    thunk_FUN_1000b320(&iStack_30,&uStack_38);
  }
  thunk_FUN_1000b210(pTStack_8 + 0x164ac4);
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  uStack_38 = 0x1000999a;
  __chkesp();
  return;
}

