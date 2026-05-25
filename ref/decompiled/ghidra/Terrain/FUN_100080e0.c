/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100080e0 @ 0x100080E0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100080e0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  
  puVar2 = local_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = (float)param_4 / (float)param_5;
  local_18 = param_2 + -0x1b0;
  local_1c = param_3 + -300;
  local_10 = (float)local_18 * _DAT_1005f02c;
  local_14 = (float)local_1c * _DAT_1005f02c;
  glLoadIdentity();
  __chkesp();
  glPushMatrix();
  __chkesp();
  glTranslatef(local_10,local_14,0);
  __chkesp();
  glRotated((double)_DAT_10070a10,0,0x3ff00000,0,0,0,0);
  __chkesp();
  glRotatef(0x42340000,0,0x3f800000,0);
  __chkesp();
  glScalef(local_c,local_c,local_c);
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

