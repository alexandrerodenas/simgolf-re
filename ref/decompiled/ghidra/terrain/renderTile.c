/* Ghidra decompiled: Terrain.dll */
/* Function: renderTile @ 0x100011EA */
/* Body size: 5 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall Terrain::renderTile(int,int,int,int,int) */

void __thiscall
Terrain::renderTile(Terrain *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_5c [16];
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  Terrain *pTStack_8;
  
                    /* 0x11ea  28  ?renderTile@Terrain@@QAEXHHHHH@Z */
  puVar2 = auStack_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  fStack_c = (float)param_4 / (float)param_5;
  iStack_18 = param_2 + -0x1b0;
  iStack_1c = param_3 + -300;
  fStack_10 = (float)iStack_18 * _DAT_1005f02c;
  fStack_14 = (float)iStack_1c * _DAT_1005f02c;
  pTStack_8 = this;
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glTranslatef(fStack_10,fStack_14,0);
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(0x42340000,0,0x3f800000,0);
  __chkesp();
  glScalef(fStack_c,fStack_c,fStack_c);
  __chkesp();
  if (0x1e < param_1) {
    FUN_10019610((uint *)"iTileType < NUM_TEXTURED_TILES",
                 (uint *)"C:\\Projects\\3DTerrainLowPoly\\Terrain.cpp",DAT_10063e40 + 0x13);
  }
  glDisable(0xb50);
  __chkesp();
  glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + param_1 * 900));
  __chkesp();
  glBegin(4);
  __chkesp();
  glNormal3f(0,0x3f800000,0);
  __chkesp();
  glTexCoord2f(0,0x3f800000);
  __chkesp();
  glVertex3f(0xc2480000,0,0xc2480000);
  __chkesp();
  glTexCoord2f(0,0);
  __chkesp();
  glVertex3f(0xc2480000,0,0x42480000);
  __chkesp();
  glTexCoord2f(0x3f800000,0);
  __chkesp();
  glVertex3f(0x42480000,0,0x42480000);
  __chkesp();
  glTexCoord2f(0,0x3f800000);
  __chkesp();
  glVertex3f(0xc2480000,0,0xc2480000);
  __chkesp();
  glTexCoord2f(0x3f800000,0);
  __chkesp();
  glVertex3f(0x42480000,0,0x42480000);
  __chkesp();
  glTexCoord2f(0x3f800000,0x3f800000);
  __chkesp();
  glVertex3f(0x42480000,0,0xc2480000);
  __chkesp();
  glEnd();
  __chkesp();
  glEnable(0xb50);
  __chkesp();
  glPopMatrix();
  __chkesp();
  glFlush();
  __chkesp();
  __chkesp();
  return;
}

