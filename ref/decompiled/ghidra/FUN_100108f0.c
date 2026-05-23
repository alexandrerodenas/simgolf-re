/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100108f0 @ 0x100108F0 */
/* Body size: 2836 addresses */


void __fastcall FUN_100108f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_74 [16];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_74;
  for (iVar1 = 0x1c; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(char *)(param_1 + 0x20a) != '\0') {
    local_10 = 0;
    local_14 = 16.67;
    if ((*(int *)(param_1 + 0x34) == 0) || (*(char *)(*(int *)(param_1 + 0x34) + 0x208) == '\0')) {
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    local_18 = CONCAT31(local_18._1_3_,(undefined1)local_28);
    if ((*(int *)(param_1 + 0x3c) == 0) || (*(char *)(*(int *)(param_1 + 0x3c) + 0x208) == '\0')) {
      local_2c = 0;
    }
    else {
      local_2c = 1;
    }
    local_1c = CONCAT31(local_1c._1_3_,(undefined1)local_2c);
    if ((*(int *)(param_1 + 0x40) == 0) || (*(char *)(*(int *)(param_1 + 0x40) + 0x208) == '\0')) {
      local_30 = 0;
    }
    else {
      local_30 = 1;
    }
    local_20 = CONCAT31(local_20._1_3_,(undefined1)local_30);
    if ((*(int *)(param_1 + 0x38) == 0) || (*(char *)(*(int *)(param_1 + 0x38) + 0x208) == '\0')) {
      local_34 = 0;
    }
    else {
      local_34 = 1;
    }
    local_24 = CONCAT31(local_24._1_3_,(undefined1)local_34);
    if (*(char *)(param_1 + 0x209) == '\0') {
      local_c = 0x20;
    }
    else {
      local_c = 0x21;
    }
    local_8 = param_1;
    glEnable(0xbe2);
    __chkesp();
    glBlendFunc(0x302,0x303);
    __chkesp();
    glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_c * 900));
    __chkesp();
    if ((local_18 & 0xff) != 0) {
      local_10 = local_10 + 1;
      glBegin(6);
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3eaa7efa,0x3f2ac083);
      __chkesp();
      glVertex3f(*(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc) - local_14,
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f2ac083,0x3f2ac083);
      __chkesp();
      glVertex3f(local_14 + *(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x88) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f2ac083,0x3f800000);
      __chkesp();
      glVertex3f(local_14 + *(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x88) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x88) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x88) * 0xc);
      __chkesp();
      glTexCoord2f(0x3eaa7efa,0x3f800000);
      __chkesp();
      glVertex3f(*(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc) - local_14,
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x88) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x88) * 0xc));
      __chkesp();
      glEnd();
      __chkesp();
    }
    if ((local_24 & 0xff) != 0) {
      local_10 = local_10 + 2;
      glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_c * 900));
      __chkesp();
      glBegin(6);
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3eaa7efa,0x3eaa7efa);
      __chkesp();
      glVertex3f(*(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc) - local_14,
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x19c) * 0xc);
      __chkesp();
      glTexCoord2f(0x3eaa7efa,0);
      __chkesp();
      glVertex3f(*(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x19c) * 0xc) - local_14,
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x19c) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x19c) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x1a0) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f2ac083,0);
      __chkesp();
      glVertex3f(local_14 + *(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x19c) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x19c) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x19c) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f2ac083,0x3eaa7efa);
      __chkesp();
      glVertex3f(local_14 + *(float *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc));
      __chkesp();
      glEnd();
      __chkesp();
    }
    if ((local_20 & 0xff) != 0) {
      local_10 = local_10 + 4;
      glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_c * 900));
      __chkesp();
      glBegin(6);
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f2ac083,0x3f2ac083);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc) - local_14);
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f2ac083,0x3eaa7efa);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 local_14 + *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x1d8) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f800000,0x3eaa7efa);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x1d8) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x1d8) * 0xc),
                 local_14 + *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x1d8) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x1d8) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f800000,0x3f2ac083);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x1d8) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x1d8) * 0xc),
                 *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x1d8) * 0xc) - local_14);
      __chkesp();
      glEnd();
      __chkesp();
    }
    if ((local_1c & 0xff) != 0) {
      local_10 = local_10 + 8;
      glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_c * 900));
      __chkesp();
      glBegin(6);
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3eaa7efa,0x3f2ac083);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc) - local_14);
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x128) * 0xc);
      __chkesp();
      glTexCoord2f(0,0x3f2ac083);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x128) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x128) * 0xc),
                 *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x128) * 0xc) - local_14);
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x128) * 0xc);
      __chkesp();
      glTexCoord2f(0,0x3eaa7efa);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x128) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x128) * 0xc),
                 local_14 + *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x128) * 0xc));
      __chkesp();
      glNormal3fv(&DAT_10070a18 + *(int *)(local_8 + 0x50) * 0xc);
      __chkesp();
      glTexCoord2f(0x3eaa7efa,0x3eaa7efa);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)(local_8 + 0x50) * 0xc),
                 *(undefined4 *)(&DAT_100b28cc + *(int *)(local_8 + 0x50) * 0xc),
                 local_14 + *(float *)(&DAT_100b28d0 + *(int *)(local_8 + 0x50) * 0xc));
      __chkesp();
      glEnd();
      __chkesp();
    }
    thunk_FUN_100116d0(local_10,local_c);
    glDisable(0xbe2);
    __chkesp();
  }
  local_8 = 0x10011400;
  __chkesp();
  return;
}

