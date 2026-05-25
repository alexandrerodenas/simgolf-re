/* Ghidra decompiled: Terrain.dll */
/* Function: render @ 0x1000104B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: bool __thiscall Terrain::render(class Tile *,float) */

bool __thiscall Terrain::render(Terrain *this,Tile *param_1,float param_2)

{
  bool bVar1;
  char cVar2;
  Tile *pTVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 auStack_8c [16];
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  Tile *pTStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  Terrain *pTStack_8;
  
                    /* 0x104b  27  ?render@Terrain@@QAE_NPAVTile@@M@Z */
  puVar5 = auStack_8c;
  for (iVar4 = 0x22; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  pTStack_1c = (Tile *)0x0;
  iStack_18 = 0x10 << ((byte)*(undefined4 *)(this + 0x1c) & 0x1f);
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
    iStack_48 = thunk_FUN_10006810((int)param_1);
    iStack_48 = 0x19 - iStack_48;
    fVar7 = (float)iStack_48 * _DAT_1005f340;
    uVar6 = 0;
    iStack_4c = thunk_FUN_10005960((int)param_1);
    iStack_4c = 0x19 - iStack_4c;
    glTranslatef((float)iStack_4c * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  thunk_FUN_1000adc0(param_2);
  if (param_1 == (Tile *)0x0) {
    for (iStack_20 = 10; iStack_20 < 0x28; iStack_20 = iStack_20 + 1) {
      for (iStack_24 = 0x28; 10 < iStack_24; iStack_24 = iStack_24 + -1) {
        pTVar3 = tileAt(pTStack_8,iStack_24,iStack_20);
        thunk_FUN_1000e6c0(pTVar3);
      }
    }
  }
  else {
    iVar4 = thunk_FUN_10006810((int)param_1);
    if (iVar4 < iStack_c) {
      iStack_c = thunk_FUN_10006810((int)param_1);
    }
    iVar4 = thunk_FUN_10006810((int)param_1);
    if (0x32 - iVar4 < iStack_10) {
      iStack_10 = thunk_FUN_10006810((int)param_1);
      iStack_10 = 0x32 - iStack_10;
    }
    iVar4 = thunk_FUN_10005960((int)param_1);
    if (iVar4 < iStack_14) {
      iStack_14 = thunk_FUN_10005960((int)param_1);
    }
    iVar4 = thunk_FUN_10005960((int)param_1);
    if (0x32 - iVar4 < iStack_18) {
      iStack_18 = thunk_FUN_10005960((int)param_1);
      iStack_18 = 0x32 - iStack_18;
    }
    if (param_2 == _DAT_1005f1e0) {
      iStack_28 = thunk_FUN_10006810((int)param_1);
      iStack_28 = iStack_28 - iStack_c;
      while (iVar4 = thunk_FUN_10006810((int)param_1), iStack_28 < iVar4 + iStack_10) {
        iStack_2c = thunk_FUN_10005960((int)param_1);
        iStack_2c = iStack_2c + iStack_18;
        while (iVar4 = thunk_FUN_10005960((int)param_1), iVar4 - iStack_14 <= iStack_2c) {
          pTStack_1c = tileAt(pTStack_8,iStack_2c,iStack_28);
          if (((pTStack_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_1c), !bVar1))
             && (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_1c,(int)param_1,param_2),
                cVar2 == '\0')) {
            thunk_FUN_1000e6c0(pTStack_1c);
          }
          iStack_2c = iStack_2c + -1;
        }
        iStack_28 = iStack_28 + 1;
      }
    }
    else if (param_2 == 90.0) {
      iStack_30 = thunk_FUN_10005960((int)param_1);
      iStack_30 = iStack_30 + iStack_18;
      while (iVar4 = thunk_FUN_10005960((int)param_1), iVar4 - iStack_14 <= iStack_30) {
        iStack_34 = thunk_FUN_10006810((int)param_1);
        iStack_34 = iStack_34 + iStack_10;
        while (iVar4 = thunk_FUN_10006810((int)param_1), iVar4 - iStack_c <= iStack_34) {
          pTStack_1c = tileAt(pTStack_8,iStack_30,iStack_34);
          if (((pTStack_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_1c), !bVar1))
             && (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_1c,(int)param_1,90.0),
                cVar2 == '\0')) {
            thunk_FUN_1000e6c0(pTStack_1c);
          }
          iStack_34 = iStack_34 + -1;
        }
        iStack_30 = iStack_30 + -1;
      }
    }
    else if (param_2 == 180.0) {
      iStack_38 = thunk_FUN_10006810((int)param_1);
      iStack_38 = iStack_38 + iStack_10;
      while (iVar4 = thunk_FUN_10006810((int)param_1), iVar4 - iStack_c <= iStack_38) {
        iStack_3c = thunk_FUN_10005960((int)param_1);
        iStack_3c = iStack_3c - iStack_14;
        while (iVar4 = thunk_FUN_10005960((int)param_1), iStack_3c < iVar4 + iStack_18) {
          pTStack_1c = tileAt(pTStack_8,iStack_3c,iStack_38);
          if (((pTStack_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_1c), !bVar1))
             && (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_1c,(int)param_1,180.0),
                cVar2 == '\0')) {
            thunk_FUN_1000e6c0(pTStack_1c);
          }
          iStack_3c = iStack_3c + 1;
        }
        iStack_38 = iStack_38 + -1;
      }
    }
    else {
      iStack_40 = thunk_FUN_10006810((int)param_1);
      iStack_40 = iStack_40 - iStack_c;
      while (iVar4 = thunk_FUN_10006810((int)param_1), iStack_40 < iVar4 + iStack_10) {
        iStack_44 = thunk_FUN_10005960((int)param_1);
        iStack_44 = iStack_44 - iStack_14;
        while (iVar4 = thunk_FUN_10005960((int)param_1), iStack_44 < iVar4 + iStack_18) {
          pTStack_1c = tileAt(pTStack_8,iStack_44,iStack_40);
          if (((pTStack_1c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_1c), !bVar1))
             && (cVar2 = thunk_FUN_10006850(pTStack_8,(int)pTStack_1c,(int)param_1,param_2),
                cVar2 == '\0')) {
            thunk_FUN_1000e6c0(pTStack_1c);
          }
          iStack_44 = iStack_44 + 1;
        }
        iStack_40 = iStack_40 + 1;
      }
    }
  }
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  iStack_38 = 0x10005e89;
  uVar6 = __chkesp();
  return SUB41(uVar6,0);
}

