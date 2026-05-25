/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478cd0 @ 0x00478CD0 */


undefined4 __thiscall
FUN_00478cd0(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 local_80;
  
  if (param_2 == (char *)0x0) {
    return 3;
  }
  uVar4 = 0xffffffff;
  pcVar5 = s_monkey_sweats_on_a_tuesday_004e4218;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  iVar2 = _strncmp(param_2,s_monkey_sweats_on_a_tuesday_004e4218,~uVar4 - 1);
  if (iVar2 == 0) {
    uVar4 = 0xffffffff;
    pcVar5 = s_monkey_sweats_on_a_tuesday_004e4218;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_2 = param_2 + ~uVar4;
    uVar4 = 0xffffffff;
    pcVar5 = s_monkey_sweats_on_a_tuesday_004e4218;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    param_3 = param_3 + (-1 - (~uVar4 - 1));
  }
  pcVar5 = param_2;
  puVar6 = &local_80;
  for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    puVar6 = puVar6 + 1;
  }
  if (local_80._3_1_ == '\b') {
    iVar2 = (**(code **)(*param_1 + 0x10))();
    if ((iVar2 != 0) && (iVar2 = FUN_00492460(), iVar2 != 8)) {
      uVar3 = FUN_00495420(param_2,param_3,param_4,param_5,param_6);
      return uVar3;
    }
    uVar3 = FUN_00495100(param_2,param_3,param_4,param_5,param_6);
    return uVar3;
  }
  return 0x17;
}

