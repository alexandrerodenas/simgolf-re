/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000ea30 @ 0x1000EA30 */
/* Body size: 2528 addresses */


void __thiscall FUN_1000ea30(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_4c [16];
  int local_c;
  void *local_8;
  
  puVar2 = local_4c;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)((int)this + 0x24) != 0x14) {
    if ((DAT_10070a14 == 0) || (DAT_10070a14 == 2)) {
      local_c = 0;
    }
    else {
      local_c = 1;
    }
    local_8 = this;
    glBindTexture(0xde1,DAT_10070688);
    __chkesp();
    if (((*(int *)((int)local_8 + 0x38) != 0) &&
        (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x38)), iVar1 == 0x14)) &&
       ((DAT_10070a14 == 0 || (DAT_10070a14 == 3)))) {
      glBegin(4);
      __chkesp();
      glNormal3fv(&DAT_10063c40 + local_c * 0xc);
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x160) * 0xc);
      __chkesp();
      glTexCoord2f(0,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0x160) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0x160) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0x1a0) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0x1a0) * 0xc));
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x160) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0x1a0) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0x1a0) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x1a0) * 0xc);
      __chkesp();
      glEnd();
      __chkesp();
      if (DAT_10070a14 == 0) {
        if ((*(int *)((int)local_8 + 0x40) != 0) && (0 < param_1)) {
          thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x40),param_1 + -1);
        }
      }
      else if (((DAT_10070a14 == 3) && (*(int *)((int)local_8 + 0x3c) != 0)) && (0 < param_1)) {
        thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x3c),param_1 + -1);
      }
    }
    if (((*(int *)((int)local_8 + 0x34) != 0) &&
        (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x34)), iVar1 == 0x14)) &&
       ((DAT_10070a14 == 1 || (DAT_10070a14 == 2)))) {
      glBegin(4);
      __chkesp();
      glNormal3fv(&DAT_10063c58 + local_c * 0xc);
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0xc0) * 0xc);
      __chkesp();
      glTexCoord2f(0,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0xc0) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0xc0) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0x48) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0x48) * 0xc));
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0xc0) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0x48) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0x48) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x48) * 0xc);
      __chkesp();
      glEnd();
      __chkesp();
      if (DAT_10070a14 == 1) {
        if ((*(int *)((int)local_8 + 0x40) != 0) && (0 < param_1)) {
          thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x40),param_1 + -1);
        }
      }
      else if (((DAT_10070a14 == 2) && (*(int *)((int)local_8 + 0x3c) != 0)) && (0 < param_1)) {
        thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x3c),param_1 + -1);
      }
    }
    if (((*(int *)((int)local_8 + 0x3c) != 0) &&
        (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x3c)), iVar1 == 0x14)) &&
       ((DAT_10070a14 == 0 || (DAT_10070a14 == 1)))) {
      glBegin(4);
      __chkesp();
      glNormal3fv(&DAT_10063c88 + local_c * 0xc);
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x48) * 0xc);
      __chkesp();
      glTexCoord2f(0,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0x48) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0x48) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 300) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 300) * 0xc));
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x48) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 300) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 300) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 300) * 0xc);
      __chkesp();
      glEnd();
      __chkesp();
      if (DAT_10070a14 == 0) {
        if ((*(int *)((int)local_8 + 0x34) != 0) && (0 < param_1)) {
          thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x34),param_1 + -1);
        }
      }
      else if (((DAT_10070a14 == 1) && (*(int *)((int)local_8 + 0x38) != 0)) && (0 < param_1)) {
        thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x38),param_1 + -1);
      }
    }
    if (((*(int *)((int)local_8 + 0x40) != 0) &&
        (iVar1 = thunk_FUN_10001f60(*(int *)((int)local_8 + 0x40)), iVar1 == 0x14)) &&
       ((DAT_10070a14 == 2 || (DAT_10070a14 == 3)))) {
      glBegin(4);
      __chkesp();
      glNormal3fv(&DAT_10063c70 + local_c * 0xc);
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x1d4) * 0xc);
      __chkesp();
      glTexCoord2f(0,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0x1d4) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0x1d4) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0xf8) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0xf8) * 0xc));
      __chkesp();
      glTexCoord2f(0,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0x1d4) * 0xc);
      __chkesp();
      glTexCoord2f(0x3f800000,0);
      __chkesp();
      glVertex3f(*(undefined4 *)(&DAT_100b28c8 + *(int *)((int)local_8 + 0xf8) * 0xc),0xc2960000,
                 *(undefined4 *)(&DAT_100b28d0 + *(int *)((int)local_8 + 0xf8) * 0xc));
      __chkesp();
      glTexCoord2f(0x3f800000,0x3f800000);
      __chkesp();
      glVertex3fv(&DAT_100b28c8 + *(int *)((int)local_8 + 0xf8) * 0xc);
      __chkesp();
      glEnd();
      __chkesp();
      if (DAT_10070a14 == 2) {
        if ((*(int *)((int)local_8 + 0x38) != 0) && (0 < param_1)) {
          thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x38),param_1 + -1);
        }
      }
      else if (((DAT_10070a14 == 3) && (*(int *)((int)local_8 + 0x34) != 0)) && (0 < param_1)) {
        thunk_FUN_1000ea30(*(void **)((int)local_8 + 0x34),param_1 + -1);
      }
    }
  }
  local_8 = (void *)0x1000f40a;
  __chkesp();
  return;
}

