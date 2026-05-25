/* Ghidra decompiled: Terrain.dll */
/* Function: drawBezierSpline @ 0x100010A5 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::drawBezierSpline(int,int,int,int,int,int,int,int,int) */

void __thiscall
Terrain::drawBezierSpline
          (Terrain *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_98 [4];
  undefined4 uStack_88;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_20;
  float afStack_1c [4];
  float fStack_c;
  Terrain *pTStack_8;
  
                    /* 0x10a5  6  ?drawBezierSpline@Terrain@@QAEXHHHHHHHHH@Z */
  puVar4 = auStack_98;
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  uStack_4c = param_7 >> 7 & 0xf8;
  fStack_c = (float)uStack_4c / _DAT_1005f200;
  uStack_50 = param_7 >> 2 & 0xf8;
  afStack_1c[3] = (float)uStack_50 / _DAT_1005f200;
  iStack_54 = (param_7 & 0x1fU) << 3;
  afStack_1c[2] = (float)iStack_54 / _DAT_1005f200;
  pTStack_8 = this;
  iVar3 = FUN_100158b0(param_1 - param_3);
  iVar1 = FUN_100158b0(param_2 - param_4);
  iVar2 = FUN_100158b0(param_3 - param_5);
  iStack_58 = FUN_100158b0(param_4 - param_6);
  iStack_58 = iVar3 + iVar1 + iVar2 + iStack_58;
  fStack_3c = _DAT_1005f024 / ((float)iStack_58 / _DAT_1005f214);
  afStack_34[0] = (float)param_1;
  afStack_34[1] = (float)param_2;
  afStack_34[2] = (float)param_3;
  afStack_34[3] = (float)param_4;
  fStack_24 = (float)param_5;
  fStack_20 = (float)param_6;
  glMatrixMode(0x1701);
  __chkesp();
  glPushMatrix();
  __chkesp();
  glLoadIdentity();
  __chkesp();
  if (pTStack_8[0x28] == (Terrain)0x0) {
    glOrtho(0,0,(double)*(int *)(pTStack_8 + 0x20),(double)*(int *)(pTStack_8 + 0x24),0,0,0,
            0xbff00000,0,0x3ff00000);
    __chkesp();
  }
  else {
    glOrtho(0,0,(double)*(int *)(pTStack_8 + 0x20),0,0,(double)*(int *)(pTStack_8 + 0x24),0,
            0xbff00000,0,0x3ff00000);
    __chkesp();
  }
  glMatrixMode(0x1700);
  __chkesp();
  glPushMatrix();
  __chkesp();
  glLoadIdentity();
  __chkesp();
  glDisable(0xb50);
  __chkesp();
  glDisable(0xde1);
  __chkesp();
  glEnable(0xbe2);
  __chkesp();
  glBlendFunc(0x302,0x303);
  __chkesp();
  glLineWidth((float)param_8);
  __chkesp();
  glColor4f(fStack_c,afStack_1c[3],afStack_1c[2],(float)param_9 / _DAT_1005f214);
  __chkesp();
  glBegin(3);
  __chkesp();
  glVertex2fv(afStack_34);
  __chkesp();
  for (fStack_40 = _DAT_1005f1e0 + fStack_3c; fStack_40 < _DAT_1005f024;
      fStack_40 = fStack_40 + fStack_3c) {
    afStack_1c[0] = 0.0;
    afStack_1c[1] = 0.0;
    for (iStack_44 = 0; iStack_44 < 3; iStack_44 = iStack_44 + 1) {
      fVar5 = (float10)thunk_FUN_10005750(fStack_40,iStack_44);
      fStack_38 = (float)fVar5;
      for (iStack_48 = 0; iStack_48 < 2; iStack_48 = iStack_48 + 1) {
        afStack_1c[iStack_48] =
             fStack_38 * afStack_34[iStack_44 * 2 + iStack_48] + afStack_1c[iStack_48];
      }
    }
    glVertex2fv(afStack_1c);
    __chkesp();
  }
  glVertex2fv(&fStack_24);
  __chkesp();
  glEnd();
  __chkesp();
  glEnable(0xb50);
  __chkesp();
  glEnable(0xde1);
  __chkesp();
  glDisable(0xbe2);
  __chkesp();
  glPopMatrix();
  __chkesp();
  glMatrixMode(0x1701);
  __chkesp();
  glPopMatrix();
  __chkesp();
  glMatrixMode(0x1700);
  __chkesp();
  glFlush();
  __chkesp();
  uStack_88 = 0x1000563c;
  __chkesp();
  return;
}

