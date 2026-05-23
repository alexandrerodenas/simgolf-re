/* Ghidra decompiled: Terrain.dll */
/* Function: drawCardinalSpline @ 0x10001244 */
/* Body size: 5 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::drawCardinalSpline(int,int,int,int,int,int,int,int,int,int,int)
    */

void __thiscall
Terrain::drawCardinalSpline
          (Terrain *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_9c [5];
  undefined4 uStack_88;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float afStack_1c [2];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  Terrain *pTStack_8;
  
                    /* 0x1244  7  ?drawCardinalSpline@Terrain@@QAEXHHHHHHHHHHH@Z */
  puVar2 = auStack_9c;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  uStack_44 = param_9 >> 7 & 0xf8;
  fStack_c = (float)uStack_44 / _DAT_1005f200;
  uStack_48 = param_9 >> 2 & 0xf8;
  fStack_10 = (float)uStack_48 / _DAT_1005f200;
  iStack_4c = (param_9 & 0x1fU) << 3;
  fStack_14 = (float)iStack_4c / _DAT_1005f200;
  iStack_50 = param_1 - param_5;
  fStack_34 = (float)iStack_50;
  iStack_54 = param_2 - param_6;
  fStack_30 = (float)iStack_54;
  iStack_58 = param_7 - param_3;
  fStack_3c = (float)iStack_58;
  iStack_5c = param_8 - param_4;
  fStack_38 = (float)iStack_5c;
  fStack_24 = (float)param_1;
  fStack_20 = (float)param_2;
  fStack_2c = (float)param_3;
  fStack_28 = (float)param_4;
  pTStack_8 = this;
  glMatrixMode(0x1701);
  __chkesp();
  glPushMatrix();
  __chkesp();
  glLoadIdentity();
  __chkesp();
  glOrtho(0,0,(double)*(int *)(pTStack_8 + 0x20),(double)*(int *)(pTStack_8 + 0x24),0,0,0,0xbff00000
          ,0,0x3ff00000);
  __chkesp();
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
  glLineWidth((float)param_10);
  __chkesp();
  glColor4f(fStack_c,fStack_10,fStack_14,(float)param_11 / _DAT_1005f214);
  __chkesp();
  glBegin(3);
  __chkesp();
  glVertex2fv(&fStack_24);
  __chkesp();
  for (fStack_40 = 0.01; fStack_40 < _DAT_1005f024; fStack_40 = fStack_40 + _DAT_1005f218) {
    thunk_FUN_10005090(pTStack_8,afStack_1c,fStack_40,&fStack_24,&fStack_2c,&fStack_34,&fStack_3c);
    glVertex2fv(afStack_1c);
    __chkesp();
  }
  glVertex2fv(&fStack_2c);
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
  uStack_88 = 0x10004fac;
  __chkesp();
  return;
}

