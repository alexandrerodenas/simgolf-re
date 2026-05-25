/* Ghidra decompiled: Terrain.dll */
/* Function: drawLine @ 0x100011B3 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::drawLine(int,int,int,int,int,int,int) */

void __thiscall
Terrain::drawLine(Terrain *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                 int param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_60 [16];
  int iStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  Terrain *pTStack_8;
  
                    /* 0x11b3  9  ?drawLine@Terrain@@QAEXHHHHHHH@Z */
  puVar2 = auStack_60;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  uStack_18 = param_5 >> 7 & 0xf8;
  fStack_c = (float)uStack_18 / _DAT_1005f200;
  uStack_1c = param_5 >> 2 & 0xf8;
  fStack_10 = (float)uStack_1c / _DAT_1005f200;
  iStack_20 = (param_5 & 0x1fU) << 3;
  fStack_14 = (float)iStack_20 / _DAT_1005f200;
  pTStack_8 = this;
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
  glLineWidth((float)param_6);
  __chkesp();
  glColor4f(fStack_c,fStack_10,fStack_14,(float)param_7 / _DAT_1005f214);
  __chkesp();
  glBegin(1);
  __chkesp();
  glVertex2i(param_1,param_2);
  __chkesp();
  glVertex2i(param_3,param_4);
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
  __chkesp();
  return;
}

