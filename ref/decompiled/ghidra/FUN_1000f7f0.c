/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000f7f0 @ 0x1000F7F0 */
/* Body size: 3476 addresses */


void __fastcall FUN_1000f7f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  int local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((DAT_10070a14 == 0) || (DAT_10070a14 == 2)) {
    local_c = 0;
  }
  else {
    local_c = 1;
  }
  local_8 = param_1;
  if ((*(char *)(param_1 + 0x234) != '\0') && (*(int *)(param_1 + 0x34) != 0)) {
    if (*(int *)(param_1 + 0x210) == 1) {
      glBindTexture(0xde1,DAT_10070304);
      __chkesp();
    }
    else {
      glBindTexture(0xde1,DAT_1006ff80);
      __chkesp();
    }
    glBegin(4);
    __chkesp();
    glNormal3fv(&DAT_10063c40 + local_c * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x34) + 0x160) * 0xc);
    __chkesp();
    glTexCoord2f(0,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x48) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x88) * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x34) + 0x160) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x88) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x34) + 0x164) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x34) + 0x164) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x88) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0xc0) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x34) + 0x164) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0xc0) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x34) + 0x1a0) * 0xc);
    __chkesp();
    glEnd();
    __chkesp();
  }
  if ((*(char *)(local_8 + 0x23a) != '\0') && (*(int *)(local_8 + 0x3c) != 0)) {
    if (*(int *)(local_8 + 0x228) == 1) {
      glBindTexture(0xde1,DAT_10070304);
      __chkesp();
    }
    else {
      glBindTexture(0xde1,DAT_1006ff80);
      __chkesp();
    }
    glBegin(4);
    __chkesp();
    glNormal3fv(&DAT_10063c70 + local_c * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x3c) + 0x1d4) * 0xc);
    __chkesp();
    glTexCoord2f(0,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 300) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x128) * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x3c) + 0x1d4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x128) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x3c) + 0xf4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x3c) + 0xf4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x128) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x48) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x3c) + 0xf4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x48) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x3c) + 0xf8) * 0xc);
    __chkesp();
    glEnd();
    __chkesp();
  }
  if ((*(char *)(local_8 + 0x236) != '\0') && (*(int *)(local_8 + 0x40) != 0)) {
    if (*(int *)(local_8 + 0x218) == 1) {
      glBindTexture(0xde1,DAT_10070304);
      __chkesp();
    }
    else {
      glBindTexture(0xde1,DAT_1006ff80);
      __chkesp();
    }
    glBegin(4);
    __chkesp();
    glNormal3fv(&DAT_10063c88 + local_c * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x40) + 0x48) * 0xc);
    __chkesp();
    glTexCoord2f(0,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0xf8) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0xf4) * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x40) + 0x48) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0xf4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x40) + 0x128) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x40) + 0x128) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0xf4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x1d4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x40) + 0x128) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x1d4) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x40) + 300) * 0xc);
    __chkesp();
    glEnd();
    __chkesp();
  }
  if ((*(char *)(local_8 + 0x238) != '\0') && (*(int *)(local_8 + 0x38) != 0)) {
    if (*(int *)(local_8 + 0x220) == 1) {
      glBindTexture(0xde1,DAT_10070304);
      __chkesp();
    }
    else {
      glBindTexture(0xde1,DAT_1006ff80);
      __chkesp();
    }
    glBegin(4);
    __chkesp();
    glNormal3fv(&DAT_10063c58 + local_c * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x38) + 0xc0) * 0xc);
    __chkesp();
    glTexCoord2f(0,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x1a0) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x164) * 0xc);
    __chkesp();
    glTexCoord2f(0,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x38) + 0xc0) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x164) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x38) + 0x88) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x38) + 0x88) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x164) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x160) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x38) + 0x88) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(local_8 + 0x160) * 0xc);
    __chkesp();
    glTexCoord2f(0x3f800000,0x3f800000);
    __chkesp();
    glVertex3fv(&DAT_100b28c8 + *(int *)(*(int *)(local_8 + 0x38) + 0x48) * 0xc);
    __chkesp();
    glEnd();
    __chkesp();
  }
  local_8 = 0x10010580;
  __chkesp();
  return;
}

