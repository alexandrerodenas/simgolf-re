/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_100116d0 @ 0x100116D0 */
/* Body size: 1270 addresses */


void FUN_100116d0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_5c [16];
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  puVar2 = local_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  local_18 = 0;
  local_1c = param_1;
  switch(param_1) {
  case 0:
    local_10 = 3;
    local_c = 3;
    local_18 = 3;
    local_14 = 3;
    break;
  case 1:
    local_14 = 3;
    local_18 = 3;
    break;
  case 2:
    local_c = 3;
    local_10 = 3;
    break;
  default:
    goto LAB_10011bb3;
  case 4:
    local_14 = 3;
    local_c = 3;
    break;
  case 5:
    local_14 = 3;
    local_10 = 2;
    break;
  case 6:
    local_c = 3;
    local_18 = 2;
    break;
  case 7:
    local_10 = 2;
    local_18 = 2;
    break;
  case 8:
    local_18 = 3;
    local_10 = 3;
    break;
  case 9:
    local_18 = 3;
    local_c = 2;
    break;
  case 10:
    local_10 = 3;
    local_14 = 2;
    break;
  case 0xb:
    local_c = 2;
    local_14 = 2;
    break;
  case 0xd:
    local_c = 2;
    local_10 = 2;
    break;
  case 0xe:
    local_14 = 2;
    local_18 = 2;
    break;
  case 0xf:
    local_10 = 2;
    local_c = 2;
    local_18 = 2;
    local_14 = 2;
  }
  if (local_c != 0) {
    glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_c * 4 + param_2 * 900));
    __chkesp();
    glBegin(4);
    __chkesp();
    glTexCoord2f(0,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x4c));
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x50));
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x88));
    __chkesp();
    glEnd();
    __chkesp();
  }
  if (local_10 != 0) {
    glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_10 * 4 + param_2 * 900));
    __chkesp();
    glBegin(4);
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f800000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x88));
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x50));
    __chkesp();
    glTexCoord2f(0x3f800000,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0xf4));
    __chkesp();
    glEnd();
    __chkesp();
  }
  if (local_14 != 0) {
    glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_14 * 4 + param_2 * 900));
    __chkesp();
    glBegin(4);
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x164));
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x130));
    __chkesp();
    glTexCoord2f(0,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x128));
    __chkesp();
    glEnd();
    __chkesp();
  }
  if (local_18 != 0) {
    glBindTexture(0xde1,*(undefined4 *)(&DAT_100687f8 + local_18 * 4 + param_2 * 900));
    __chkesp();
    glBegin(4);
    __chkesp();
    glTexCoord2f(0x3f800000,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0xf4));
    __chkesp();
    glTexCoord2f(0x3f000000,0x3f000000);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x130));
    __chkesp();
    glTexCoord2f(0x3f000000,0);
    __chkesp();
    glArrayElement(*(undefined4 *)(local_8 + 0x164));
    __chkesp();
    glEnd();
    __chkesp();
  }
LAB_10011bb3:
  local_8 = 0x10011bc0;
  __chkesp();
  return;
}

