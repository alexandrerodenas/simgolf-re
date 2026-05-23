/* Ghidra decompiled: Terrain.dll */
/* Function: FUN_1000e6c0 @ 0x1000E6C0 */
/* Body size: 703 addresses */


void __fastcall FUN_1000e6c0(void *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 local_5c [16];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  puVar3 = local_5c;
  for (iVar1 = 0x16; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  local_8 = param_1;
  for (local_10 = 0; local_10 < *(int *)((int)local_8 + 0x44); local_10 = local_10 + 1) {
    if ((DAT_10070a14 == 0) || (iVar1 = thunk_FUN_10001f60((int)local_8), iVar1 != 7)) {
      if (*(int *)((int)local_8 + local_10 * 0x38 + 0x6c) != local_c) {
        glBindTexture(0xde1,*(undefined4 *)((int)local_8 + local_10 * 0x38 + 0x6c));
        __chkesp();
        local_c = *(int *)((int)local_8 + local_10 * 0x38 + 0x6c);
      }
    }
    else {
      uVar2 = *(uint *)((int)local_8 + 0x28) & 0x80000003;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      local_1c = uVar2 - DAT_10070a14;
      if (local_1c < 0) {
        local_1c = local_1c + 4;
      }
      local_14 = local_1c;
      local_18 = *(int *)(&DAT_100687f8 +
                         (uint)*(byte *)((int)local_8 + local_10 * 0x38 + 0x70) * 4 +
                         *(int *)((int)local_8 + 0x240) * 0x24 + (local_1c + 0x1b) * 900);
      if (local_18 != local_c) {
        glBindTexture(0xde1,local_18);
        __chkesp();
        local_c = local_18;
      }
    }
    glBegin(4);
    __chkesp();
    glTexCoord2fv(&DAT_10063ca0 +
                  DAT_10070a14 * 8 +
                  *(int *)((int)local_8 + local_10 * 0x38 + 0x58) * 0x20 +
                  *(int *)((int)local_8 + local_10 * 0x38 + 0x54) * 0x60);
    __chkesp();
    glArrayElement(*(undefined4 *)((int)local_8 + local_10 * 0x38 + 0x48));
    __chkesp();
    glTexCoord2fv(&DAT_10063ca0 +
                  DAT_10070a14 * 8 +
                  *(int *)((int)local_8 + local_10 * 0x38 + 0x60) * 0x20 +
                  *(int *)((int)local_8 + local_10 * 0x38 + 0x5c) * 0x60);
    __chkesp();
    glArrayElement(*(undefined4 *)((int)local_8 + local_10 * 0x38 + 0x4c));
    __chkesp();
    glTexCoord2fv(&DAT_10063ca0 +
                  DAT_10070a14 * 8 +
                  *(int *)((int)local_8 + local_10 * 0x38 + 0x68) * 0x20 +
                  *(int *)((int)local_8 + local_10 * 0x38 + 100) * 0x60);
    __chkesp();
    glArrayElement(*(undefined4 *)((int)local_8 + local_10 * 0x38 + 0x50));
    __chkesp();
    glEnd();
    __chkesp();
  }
  if ((*(char *)((int)local_8 + 0x208) != '\0') && (*(char *)((int)local_8 + 0x20a) != '\0')) {
    thunk_FUN_100108f0((int)local_8);
  }
  thunk_FUN_1000f7f0((int)local_8);
  thunk_FUN_1000ea30(local_8,3);
  local_8 = (void *)0x1000e97b;
  __chkesp();
  return;
}

