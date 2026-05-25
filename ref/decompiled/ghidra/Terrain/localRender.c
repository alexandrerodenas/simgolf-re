/* Ghidra decompiled: Terrain.dll */
/* Function: localRender @ 0x1000117C */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::localRender(class Tile *,class Tile *,float) */

void __thiscall Terrain::localRender(Terrain *this,Tile *param_1,Tile *param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 auStack_84 [16];
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  Tile *pTStack_c;
  Terrain *pTStack_8;
  
                    /* 0x117c  22  ?localRender@Terrain@@QAEXPAVTile@@0M@Z */
  puVar4 = auStack_84;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  pTStack_8 = this;
  if (param_1 == (Tile *)0x0) {
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
  if (param_1 != (Tile *)0x0) {
    iStack_40 = thunk_FUN_10006810((int)param_2);
    iStack_40 = 0x19 - iStack_40;
    fVar7 = (float)iStack_40 * _DAT_1005f340;
    uVar6 = 0;
    iStack_44 = thunk_FUN_10005960((int)param_2);
    iStack_44 = 0x19 - iStack_44;
    glTranslatef((float)iStack_44 * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  thunk_FUN_1000adc0(param_3);
  if (param_3 == _DAT_1005f1e0) {
    iStack_10 = thunk_FUN_10006810((int)param_1);
    iStack_10 = iStack_10 + -2;
    while (iVar5 = thunk_FUN_10006810((int)param_1), iStack_10 <= iVar5 + 2) {
      iStack_14 = thunk_FUN_10005960((int)param_1);
      iStack_14 = iStack_14 + 2;
      while (iVar5 = thunk_FUN_10005960((int)param_1), iVar5 + -2 <= iStack_14) {
        pTStack_c = tileAt(pTStack_8,iStack_14,iStack_10);
        if ((pTStack_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_c), !bVar1)) {
          thunk_FUN_100381a0((int)pTStack_c,param_1,param_3);
          thunk_FUN_10007380(pTStack_c,(int)param_1,param_3);
        }
        iStack_14 = iStack_14 + -1;
      }
      iStack_10 = iStack_10 + 1;
    }
  }
  else if (param_3 == 90.0) {
    iStack_18 = thunk_FUN_10005960((int)param_1);
    iStack_18 = iStack_18 + 2;
    while (iVar5 = thunk_FUN_10005960((int)param_1), iVar5 + -2 <= iStack_18) {
      iStack_1c = thunk_FUN_10006810((int)param_1);
      iStack_1c = iStack_1c + 2;
      while (iVar5 = thunk_FUN_10006810((int)param_1), iVar5 + -2 <= iStack_1c) {
        pTStack_c = tileAt(pTStack_8,iStack_18,iStack_1c);
        if ((pTStack_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_c), !bVar1)) {
          thunk_FUN_100381a0((int)pTStack_c,param_1,90.0);
          thunk_FUN_10007380(pTStack_c,(int)param_1,90.0);
        }
        iStack_1c = iStack_1c + -1;
      }
      iStack_18 = iStack_18 + -1;
    }
  }
  else if (param_3 == 180.0) {
    iStack_20 = thunk_FUN_10006810((int)param_1);
    iStack_20 = iStack_20 + 2;
    while (iVar5 = thunk_FUN_10006810((int)param_1), iVar5 + -2 <= iStack_20) {
      iStack_24 = thunk_FUN_10005960((int)param_1);
      iStack_24 = iStack_24 + -2;
      while (iVar5 = thunk_FUN_10005960((int)param_1), iStack_24 <= iVar5 + 2) {
        pTStack_c = tileAt(pTStack_8,iStack_24,iStack_20);
        if ((pTStack_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_c), !bVar1)) {
          thunk_FUN_100381a0((int)pTStack_c,param_1,180.0);
          thunk_FUN_10007380(pTStack_c,(int)param_1,180.0);
        }
        iStack_24 = iStack_24 + 1;
      }
      iStack_20 = iStack_20 + -1;
    }
  }
  else {
    iStack_28 = thunk_FUN_10006810((int)param_1);
    iStack_28 = iStack_28 + -2;
    while (iVar5 = thunk_FUN_10006810((int)param_1), iStack_28 <= iVar5 + 2) {
      iStack_2c = thunk_FUN_10005960((int)param_1);
      iStack_2c = iStack_2c + -2;
      while (iVar5 = thunk_FUN_10005960((int)param_1), iStack_2c <= iVar5 + 2) {
        pTStack_c = tileAt(pTStack_8,iStack_2c,iStack_28);
        if ((pTStack_c != (Tile *)0x0) && (bVar1 = thunk_FUN_10015460((int)pTStack_c), !bVar1)) {
          thunk_FUN_100381a0((int)pTStack_c,param_1,param_3);
          thunk_FUN_10007380(pTStack_c,(int)param_1,param_3);
        }
        iStack_2c = iStack_2c + 1;
      }
      iStack_28 = iStack_28 + 1;
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
  uStack_38 = 0x10008e8a;
  __chkesp();
  return;
}

