/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10004c70 @ 0x10004C70 */
/* Body size: 834 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10004c70(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,uint param_9,int param_10,int param_11)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_9c [5];
  undefined4 uStack_88;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c [2];
  float local_14;
  float local_10;
  float local_c;
  void *local_8;
  
  puVar2 = local_9c;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_44 = (int)param_9 >> 7 & 0xf8;
  local_c = (float)local_44 / _DAT_1005f200;
  local_48 = (int)param_9 >> 2 & 0xf8;
  local_10 = (float)local_48 / _DAT_1005f200;
  local_4c = (param_9 & 0x1f) << 3;
  local_14 = (float)local_4c / _DAT_1005f200;
  local_50 = param_1 - param_5;
  local_34 = (float)local_50;
  local_54 = param_2 - param_6;
  local_30 = (float)local_54;
  local_58 = param_7 - param_3;
  local_3c = (float)local_58;
  local_5c = param_8 - param_4;
  local_38 = (float)local_5c;
  local_24 = (float)param_1;
  local_20 = (float)param_2;
  local_2c = (float)param_3;
  local_28 = (float)param_4;
  glMatrixMode(0x1701);
  __chkesp();
  glPushMatrix();
  __chkesp();
  glLoadIdentity();
  __chkesp();
  glOrtho(0,0,(double)*(int *)((int)local_8 + 0x20),(double)*(int *)((int)local_8 + 0x24),0,0,0,
          0xbff00000,0,0x3ff00000);
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
  glColor4f(local_c,local_10,local_14,(float)param_11 / _DAT_1005f214);
  __chkesp();
  glBegin(3);
  __chkesp();
  glVertex2fv(&local_24);
  __chkesp();
  for (local_40 = 0.01; local_40 < _DAT_1005f024; local_40 = local_40 + _DAT_1005f218) {
    thunk_FUN_10005090(local_8,local_1c,local_40,&local_24,&local_2c,&local_34,&local_3c);
    glVertex2fv(local_1c);
    __chkesp();
  }
  glVertex2fv(&local_2c);
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

