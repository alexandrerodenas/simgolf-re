/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_10005230 @ 0x10005230 */
/* Body size: 1042 addresses */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10005230(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 uint param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 local_98 [4];
  undefined4 uStack_88;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34 [4];
  float local_24;
  float local_20;
  float local_1c [4];
  float local_c;
  int local_8;
  
  puVar4 = local_98;
  for (iVar3 = 0x25; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  local_4c = (int)param_7 >> 7 & 0xf8;
  local_c = (float)local_4c / _DAT_1005f200;
  local_50 = (int)param_7 >> 2 & 0xf8;
  local_1c[3] = (float)local_50 / _DAT_1005f200;
  local_54 = (param_7 & 0x1f) << 3;
  local_1c[2] = (float)local_54 / _DAT_1005f200;
  iVar3 = FUN_100158b0(param_1 - param_3);
  iVar1 = FUN_100158b0(param_2 - param_4);
  iVar2 = FUN_100158b0(param_3 - param_5);
  local_58 = FUN_100158b0(param_4 - param_6);
  local_58 = iVar3 + iVar1 + iVar2 + local_58;
  local_3c = _DAT_1005f024 / ((float)local_58 / _DAT_1005f214);
  local_34[0] = (float)param_1;
  local_34[1] = (float)param_2;
  local_34[2] = (float)param_3;
  local_34[3] = (float)param_4;
  local_24 = (float)param_5;
  local_20 = (float)param_6;
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
  glLineWidth((float)param_8);
  __chkesp();
  glColor4f(local_c,local_1c[3],local_1c[2],(float)param_9 / _DAT_1005f214);
  __chkesp();
  glBegin(3);
  __chkesp();
  glVertex2fv(local_34);
  __chkesp();
  for (local_40 = _DAT_1005f1e0 + local_3c; local_40 < _DAT_1005f024; local_40 = local_40 + local_3c
      ) {
    local_1c[0] = 0.0;
    local_1c[1] = 0.0;
    for (local_44 = 0; local_44 < 3; local_44 = local_44 + 1) {
      fVar5 = (float10)thunk_FUN_10005750(local_40,local_44);
      local_38 = (float)fVar5;
      for (local_48 = 0; local_48 < 2; local_48 = local_48 + 1) {
        local_1c[local_48] = local_38 * local_34[local_44 * 2 + local_48] + local_1c[local_48];
      }
    }
    glVertex2fv(local_1c);
    __chkesp();
  }
  glVertex2fv(&local_24);
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

