/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10038900 @ 0x10038900 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10038900(void *param_1,int param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  Tile *pTVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_54 [7];
  undefined4 uStack_38;
  int local_14;
  int local_10;
  uint local_c;
  Terrain *local_8;
  
  puVar5 = local_54;
  for (iVar4 = 0x14; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0xcccccccc;
    puVar5 = puVar5 + 1;
  }
  if (param_1 == (void *)0x0) {
    FUN_10019610((uint *)"pTile != NULL",(uint *)"C:\\Projects\\3DTerrainLowPoly\\Terrain.cpp",
                 DAT_10063e44 + 1);
  }
  local_c = local_c & 0xffffff00;
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(_DAT_1005f344 + param_3,0,0x3f800000,0);
  __chkesp();
  if (param_1 != (void *)0x0) {
    local_10 = thunk_FUN_10006810(param_2);
    local_10 = 0x19 - local_10;
    fVar7 = (float)local_10 * _DAT_1005f340;
    uVar6 = 0;
    local_14 = thunk_FUN_10005960(param_2);
    local_14 = 0x19 - local_14;
    glTranslatef((float)local_14 * _DAT_1005f340,uVar6,fVar7);
    __chkesp();
  }
  thunk_FUN_1000adc0(param_3);
  if (param_3 == _DAT_1005f1e0) {
    iVar4 = thunk_FUN_10006810((int)param_1);
    iVar2 = thunk_FUN_10005960((int)param_1);
    pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
    if (pTVar3 != (Tile *)0x0) {
      iVar4 = thunk_FUN_10006810((int)param_1);
      iVar2 = thunk_FUN_10005960((int)param_1);
      pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
      bVar1 = thunk_FUN_10015460((int)pTVar3);
      if (!bVar1) {
        iVar4 = thunk_FUN_10006810((int)param_1);
        iVar4 = iVar4 + -1;
        iVar2 = thunk_FUN_10005960((int)param_1);
        pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
        if (pTVar3 != (Tile *)0x0) {
          iVar4 = thunk_FUN_10006810((int)param_1);
          iVar4 = iVar4 + -1;
          iVar2 = thunk_FUN_10005960((int)param_1);
          pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
          bVar1 = thunk_FUN_10015460((int)pTVar3);
          if (!bVar1) {
            iVar4 = thunk_FUN_10006810((int)param_1);
            iVar4 = iVar4 + -1;
            iVar2 = thunk_FUN_10005960((int)param_1);
            pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
            if (pTVar3 != (Tile *)0x0) {
              iVar4 = thunk_FUN_10006810((int)param_1);
              iVar4 = iVar4 + -1;
              iVar2 = thunk_FUN_10005960((int)param_1);
              pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
              bVar1 = thunk_FUN_10015460((int)pTVar3);
              if (!bVar1) goto LAB_10038e4f;
            }
          }
        }
      }
    }
    local_c = CONCAT31(local_c._1_3_,1);
  }
  else if (param_3 == 90.0) {
    iVar4 = thunk_FUN_10006810((int)param_1);
    iVar2 = thunk_FUN_10005960((int)param_1);
    pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
    if (pTVar3 != (Tile *)0x0) {
      iVar4 = thunk_FUN_10006810((int)param_1);
      iVar2 = thunk_FUN_10005960((int)param_1);
      pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
      bVar1 = thunk_FUN_10015460((int)pTVar3);
      if (!bVar1) {
        iVar4 = thunk_FUN_10006810((int)param_1);
        iVar4 = iVar4 + 1;
        iVar2 = thunk_FUN_10005960((int)param_1);
        pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
        if (pTVar3 != (Tile *)0x0) {
          iVar4 = thunk_FUN_10006810((int)param_1);
          iVar4 = iVar4 + 1;
          iVar2 = thunk_FUN_10005960((int)param_1);
          pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
          bVar1 = thunk_FUN_10015460((int)pTVar3);
          if (!bVar1) {
            iVar4 = thunk_FUN_10006810((int)param_1);
            iVar4 = iVar4 + 1;
            iVar2 = thunk_FUN_10005960((int)param_1);
            pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
            if (pTVar3 != (Tile *)0x0) {
              iVar4 = thunk_FUN_10006810((int)param_1);
              iVar4 = iVar4 + 1;
              iVar2 = thunk_FUN_10005960((int)param_1);
              pTVar3 = Terrain::tileAt(local_8,iVar2 + 1,iVar4);
              bVar1 = thunk_FUN_10015460((int)pTVar3);
              if (!bVar1) goto LAB_10038e4f;
            }
          }
        }
      }
    }
    local_c = CONCAT31(local_c._1_3_,1);
  }
  else if (param_3 == 180.0) {
    iVar4 = thunk_FUN_10006810((int)param_1);
    iVar2 = thunk_FUN_10005960((int)param_1);
    pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
    if (pTVar3 != (Tile *)0x0) {
      iVar4 = thunk_FUN_10006810((int)param_1);
      iVar2 = thunk_FUN_10005960((int)param_1);
      pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
      bVar1 = thunk_FUN_10015460((int)pTVar3);
      if (!bVar1) {
        iVar4 = thunk_FUN_10006810((int)param_1);
        iVar4 = iVar4 + 1;
        iVar2 = thunk_FUN_10005960((int)param_1);
        pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
        if (pTVar3 != (Tile *)0x0) {
          iVar4 = thunk_FUN_10006810((int)param_1);
          iVar4 = iVar4 + 1;
          iVar2 = thunk_FUN_10005960((int)param_1);
          pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
          bVar1 = thunk_FUN_10015460((int)pTVar3);
          if (!bVar1) {
            iVar4 = thunk_FUN_10006810((int)param_1);
            iVar4 = iVar4 + 1;
            iVar2 = thunk_FUN_10005960((int)param_1);
            pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
            if (pTVar3 != (Tile *)0x0) {
              iVar4 = thunk_FUN_10006810((int)param_1);
              iVar4 = iVar4 + 1;
              iVar2 = thunk_FUN_10005960((int)param_1);
              pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
              bVar1 = thunk_FUN_10015460((int)pTVar3);
              if (!bVar1) goto LAB_10038e4f;
            }
          }
        }
      }
    }
    local_c = CONCAT31(local_c._1_3_,1);
  }
  else {
    iVar4 = thunk_FUN_10006810((int)param_1);
    iVar2 = thunk_FUN_10005960((int)param_1);
    pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
    if (pTVar3 != (Tile *)0x0) {
      iVar4 = thunk_FUN_10006810((int)param_1);
      iVar2 = thunk_FUN_10005960((int)param_1);
      pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
      bVar1 = thunk_FUN_10015460((int)pTVar3);
      if (!bVar1) {
        iVar4 = thunk_FUN_10006810((int)param_1);
        iVar4 = iVar4 + -1;
        iVar2 = thunk_FUN_10005960((int)param_1);
        pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
        if (pTVar3 != (Tile *)0x0) {
          iVar4 = thunk_FUN_10006810((int)param_1);
          iVar4 = iVar4 + -1;
          iVar2 = thunk_FUN_10005960((int)param_1);
          pTVar3 = Terrain::tileAt(local_8,iVar2,iVar4);
          bVar1 = thunk_FUN_10015460((int)pTVar3);
          if (!bVar1) {
            iVar4 = thunk_FUN_10006810((int)param_1);
            iVar4 = iVar4 + -1;
            iVar2 = thunk_FUN_10005960((int)param_1);
            pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
            if (pTVar3 != (Tile *)0x0) {
              iVar4 = thunk_FUN_10006810((int)param_1);
              iVar4 = iVar4 + -1;
              iVar2 = thunk_FUN_10005960((int)param_1);
              pTVar3 = Terrain::tileAt(local_8,iVar2 + -1,iVar4);
              bVar1 = thunk_FUN_10015460((int)pTVar3);
              if (!bVar1) goto LAB_10038e4f;
            }
          }
        }
      }
    }
    local_c = CONCAT31(local_c._1_3_,1);
  }
LAB_10038e4f:
  if ((local_c & 0xff) != 0) {
    thunk_FUN_10003830();
    glTranslatef(0x41200000,0,0xc1200000);
    __chkesp();
    thunk_FUN_1000e6c0(param_1);
    glTranslatef(0xc1a00000,0,0);
    __chkesp();
    thunk_FUN_1000e6c0(param_1);
    glTranslatef(0,0,0x41a00000);
    __chkesp();
    thunk_FUN_1000e6c0(param_1);
    glTranslatef(0x41a00000,0,0);
    __chkesp();
    thunk_FUN_1000e6c0(param_1);
    glTranslatef(0xc1200000,0,0xc1200000);
    __chkesp();
    thunk_FUN_1000e6c0(param_1);
    glDisable(0x4001);
    __chkesp();
    glEnable(0x4000);
    __chkesp();
  }
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  uStack_38 = 0x10038f60;
  __chkesp();
  return;
}

