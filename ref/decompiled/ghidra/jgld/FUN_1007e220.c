/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007e220 @ 0x1007E220 */
/* Body size: 480 addresses */


void __cdecl FUN_1007e220(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_54 [16];
  undefined4 *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  
  puVar4 = local_54;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0xcccccccc;
    puVar4 = puVar4 + 1;
  }
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_4 != 0)) {
    if (*(int *)(param_2 + 0x34) < *(int *)(param_2 + 0x30) + param_4) {
      if (*(int *)(param_2 + 0x38) == 0) {
        *(int *)(param_2 + 0x34) = param_4 + 8;
        *(undefined4 *)(param_2 + 0x30) = 0;
        uVar1 = FUN_10078e60(param_1,*(int *)(param_2 + 0x34) << 4);
        *(undefined4 *)(param_2 + 0x38) = uVar1;
      }
      else {
        local_10 = *(int *)(param_2 + 0x34);
        *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x30) + 8 + param_4;
        local_c = *(undefined4 **)(param_2 + 0x38);
        uVar1 = FUN_10078e60(param_1,*(int *)(param_2 + 0x34) << 4);
        *(undefined4 *)(param_2 + 0x38) = uVar1;
        FUN_1007f3a0(*(undefined4 **)(param_2 + 0x38),local_c,local_10 << 4);
        FUN_10078ed0((int)param_1,local_c);
      }
    }
    for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
      local_14 = (undefined4 *)(*(int *)(param_2 + 0x38) + *(int *)(param_2 + 0x30) * 0x10);
      if (*(int *)(param_3 + 8 + local_8 * 0x10) == 0) {
        *(undefined **)(param_3 + 8 + local_8 * 0x10) = &DAT_1011df00;
      }
      if (**(char **)(param_3 + 8 + local_8 * 0x10) == '\0') {
        local_14[3] = 0;
        *local_14 = 0xffffffff;
      }
      else {
        sVar2 = _strlen(*(char **)(param_3 + 8 + local_8 * 0x10));
        local_14[3] = sVar2;
        *local_14 = *(undefined4 *)(param_3 + local_8 * 0x10);
      }
      local_14[2] = *(undefined4 *)(param_3 + 8 + local_8 * 0x10);
      local_14[1] = *(undefined4 *)(param_3 + 4 + local_8 * 0x10);
      *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
    }
  }
  local_8 = 0x1007e3fc;
  __chkesp();
  return;
}

