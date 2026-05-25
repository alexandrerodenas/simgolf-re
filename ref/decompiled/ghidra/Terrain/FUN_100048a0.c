/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100048a0 @ 0x100048A0 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100048a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5,int param_6,int param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_60 [16];
  int local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  puVar2 = local_60;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_18 = (int)param_5 >> 7 & 0xf8;
  local_c = (float)local_18 / _DAT_1005f200;
  local_1c = (int)param_5 >> 2 & 0xf8;
  local_10 = (float)local_1c / _DAT_1005f200;
  local_20 = (param_5 & 0x1f) << 3;
  local_14 = (float)local_20 / _DAT_1005f200;
  glMatrixMode(0x1701);
  __chkesp();
  glPushMatrix();
  __chkesp();
  glLoadIdentity();
  __chkesp();
  if (*(char *)(local_8 + 0x28) == '\0') {
    glOrtho(0,0,(double)*(int *)(local_8 + 0x20),(double)*(int *)(local_8 + 0x24),0,0,0,0xbff00000,0
            ,0x3ff00000);
    __chkesp();
  }
  else {
    glOrtho(0,0,(double)*(int *)(local_8 + 0x20),0,0,(double)*(int *)(local_8 + 0x24),0,0xbff00000,0
            ,0x3ff00000);
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
  glColor4f(local_c,local_10,local_14,(float)param_7 / _DAT_1005f214);
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

