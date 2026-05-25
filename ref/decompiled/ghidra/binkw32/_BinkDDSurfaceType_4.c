/* Ghidra decompiled: binkw32.dll */
/* Function: _BinkDDSurfaceType@4 @ 0x300036D0 */


int _BinkDDSurfaceType_4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_20 [4];
  int iStack_10;
  int iStack_c;
  
                    /* 0x36d0  19  _BinkDDSurfaceType@4 */
  if (param_1 == (int *)0x0) {
    return -1;
  }
  piVar2 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  local_20[0] = 0x20;
  (**(code **)(*param_1 + 0x54))(param_1,local_20);
  if (local_20[0] == 0x59565955) {
    return 0xe;
  }
  if (local_20[0] == 0x32315659) {
    return 0xf;
  }
  if (local_20[0] == 0x32595559) {
    return 0xd;
  }
  if (local_20[1] == 8) {
    return 0;
  }
  if (local_20[1] == 0x18) {
    return (local_20[2] != 0xff0000) + 1;
  }
  if (local_20[1] == 0x20) {
    if (iStack_c != 0) {
      return (local_20[2] != 0xff0000) + 5;
    }
    return (local_20[2] != 0xff0000) + 3;
  }
  if (((local_20[2] == 0xf800) && (local_20[3] == 0x7e0)) && (iStack_10 == 0x1f)) {
    return 10;
  }
  if (iStack_c == 0x8000) {
    if (local_20[2] == 0x7c00) {
      if (local_20[3] != 0x3e0) {
        return -1;
      }
      if (iStack_10 != 0x1f) {
        return -1;
      }
      return 8;
    }
  }
  else if (local_20[2] == 0x7c00) {
    if ((local_20[3] == 0x3e0) && (iStack_10 == 0x1f)) {
      return 9;
    }
    goto LAB_30003869;
  }
  if (local_20[2] == 0xfc00) {
    if (local_20[3] == 0x3e0) {
      if (iStack_10 == 0x1f) {
        return 0xb;
      }
    }
    else if ((local_20[3] == 0x3f0) && (iStack_10 == 0xf)) {
      return 0xc;
    }
  }
LAB_30003869:
  if ((((iStack_c == 0xf000) && (local_20[2] == 0xf00)) && (local_20[3] == 0xf0)) &&
     (iStack_10 == 0xf)) {
    return 7;
  }
  return -1;
}

