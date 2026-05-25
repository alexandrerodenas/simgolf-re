/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1000aca0 @ 0x1000ACA0 */


undefined4 __thiscall FUN_1000aca0(void *this,char param_1,char param_2)

{
  char *pcVar1;
  uint local_c;
  int local_8;
  
  pcVar1 = *(char **)((int)this + 0x14);
  if (pcVar1 == (char *)0x0) {
    return 7;
  }
  if ((*(byte *)((int)this + 0x18) & 1) == 0) {
    local_8 = *(int *)((int)this + 0x34) * *(int *)((int)this + 0x2c);
    local_c = local_8 >> 2;
    local_8 = local_8 + local_c * -4;
  }
  else {
    local_c = *(uint *)((int)this + 0x24) >> 2;
    local_8 = *(uint *)((int)this + 0x24) + local_c * -4;
  }
  if (local_c != 0) {
    do {
      if (*pcVar1 == param_1) goto LAB_1000ad36;
LAB_1000ad1d:
      pcVar1 = pcVar1 + 1;
      if (*pcVar1 == param_1) goto LAB_1000ad3d;
LAB_1000ad22:
      pcVar1 = pcVar1 + 1;
      if (*pcVar1 == param_1) goto LAB_1000ad44;
      while (pcVar1 = pcVar1 + 1, *pcVar1 == param_1) {
        while( true ) {
          *pcVar1 = param_2;
          pcVar1 = pcVar1 + 1;
          local_c = local_c - 1;
          if (local_c == 0) goto LAB_1000ad51;
          if (*pcVar1 != param_1) goto LAB_1000ad1d;
LAB_1000ad36:
          *pcVar1 = param_2;
          pcVar1 = pcVar1 + 1;
          if (*pcVar1 != param_1) goto LAB_1000ad22;
LAB_1000ad3d:
          *pcVar1 = param_2;
          pcVar1 = pcVar1 + 1;
          if (*pcVar1 != param_1) break;
LAB_1000ad44:
          *pcVar1 = param_2;
          pcVar1 = pcVar1 + 1;
          if (*pcVar1 != param_1) goto LAB_1000ad2c;
        }
      }
LAB_1000ad2c:
      pcVar1 = pcVar1 + 1;
      local_c = local_c - 1;
    } while (local_c != 0);
LAB_1000ad51:
    pcVar1 = pcVar1 + -1;
    for (; local_8 != 0; local_8 = local_8 + -1) {
      pcVar1 = pcVar1 + 1;
      if (*pcVar1 == param_1) {
        *pcVar1 = param_2;
      }
    }
  }
  return 0;
}

