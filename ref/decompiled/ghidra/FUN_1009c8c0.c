/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1009c8c0 @ 0x1009C8C0 */
/* Body size: 379 addresses */


void __cdecl FUN_1009c8c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58 [16];
  int local_18;
  int local_14;
  uint local_10;
  char *local_c;
  int local_8;
  
  puVar2 = local_58;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xcccccccc;
    puVar2 = puVar2 + 1;
  }
  if ((param_1 != (int *)0x0) && (param_1[7] != 0)) {
    if (*(int *)param_1[7] != 0xd) {
      *(undefined4 *)param_1[7] = 0xd;
      *(undefined4 *)(param_1[7] + 4) = 0;
    }
    local_8 = param_1[1];
    if (local_8 != 0) {
      local_c = (char *)*param_1;
      local_10 = *(uint *)(param_1[7] + 4);
      while ((local_8 != 0 && (local_10 < 4))) {
        if (*local_c == (byte)((-(local_10 < 2) & 1U) - 1)) {
          local_10 = local_10 + 1;
        }
        else if (*local_c == '\0') {
          local_10 = 4 - local_10;
        }
        else {
          local_10 = 0;
        }
        local_c = local_c + 1;
        local_8 = local_8 + -1;
      }
      param_1[2] = (int)(local_c + (param_1[2] - *param_1));
      *param_1 = (int)local_c;
      param_1[1] = local_8;
      *(uint *)(param_1[7] + 4) = local_10;
      if (local_10 == 4) {
        local_14 = param_1[2];
        local_18 = param_1[5];
        FUN_1009bdd0((int)param_1);
        param_1[2] = local_14;
        param_1[5] = local_18;
        *(undefined4 *)param_1[7] = 7;
      }
    }
  }
  local_8 = 0x1009ca37;
  __chkesp();
  return;
}

