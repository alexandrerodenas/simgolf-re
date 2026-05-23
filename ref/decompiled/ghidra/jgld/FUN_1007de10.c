/* Ghidra decompiled: jgld.dll */
/* Function: FUN_1007de10 @ 0x1007DE10 */
/* Body size: 431 addresses */


void __cdecl
FUN_1007de10(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6,int param_7,char *param_8,int param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_4c [16];
  int local_c;
  uint local_8;
  
  puVar3 = local_4c;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xcccccccc;
    puVar3 = puVar3 + 1;
  }
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_8 = _strlen(param_3);
    local_8 = local_8 + 1;
    uVar1 = FUN_10078e60(param_1,local_8);
    *(undefined4 *)(param_2 + 0xa0) = uVar1;
    FUN_1007f3a0(*(undefined4 **)(param_2 + 0xa0),(undefined4 *)param_3,local_8);
    *(undefined4 *)(param_2 + 0xa4) = param_4;
    *(undefined4 *)(param_2 + 0xa8) = param_5;
    *(undefined1 *)(param_2 + 0xb4) = param_6;
    *(undefined1 *)(param_2 + 0xb5) = (undefined1)param_7;
    local_8 = _strlen(param_8);
    local_8 = local_8 + 1;
    uVar1 = FUN_10078e60(param_1,local_8);
    *(undefined4 *)(param_2 + 0xac) = uVar1;
    FUN_1007f3a0(*(undefined4 **)(param_2 + 0xac),(undefined4 *)param_8,local_8);
    uVar1 = FUN_10078e60(param_1,param_7 * 4 + 4);
    *(undefined4 *)(param_2 + 0xb0) = uVar1;
    *(undefined4 *)(*(int *)(param_2 + 0xb0) + param_7 * 4) = 0;
    for (local_c = 0; local_c < param_7; local_c = local_c + 1) {
      local_8 = _strlen(*(char **)(param_9 + local_c * 4));
      local_8 = local_8 + 1;
      uVar1 = FUN_10078e60(param_1,local_8);
      *(undefined4 *)(*(int *)(param_2 + 0xb0) + local_c * 4) = uVar1;
      FUN_1007f3a0(*(undefined4 **)(*(int *)(param_2 + 0xb0) + local_c * 4),
                   *(undefined4 **)(param_9 + local_c * 4),local_8);
    }
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
  }
  local_8 = 0x1007dfbb;
  __chkesp();
  return;
}

