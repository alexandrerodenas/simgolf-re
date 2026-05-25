/* Ghidra decompiled: golf.exe */
/* Function: FUN_004830e0 @ 0x004830E0 */


undefined4 __thiscall FUN_004830e0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_300 [768];
  
  if (param_2 != 0) {
    if (param_1[1] == 0) {
      (**(code **)*param_1)();
    }
    if (param_3 < param_4 + param_3) {
      iVar4 = (param_4 + param_3) - param_3;
      iVar1 = param_3 * 3;
      puVar3 = (undefined1 *)(param_2 + 0x29 + param_3 * 4);
      do {
        auStack_300[iVar1 + param_3 * -3] = puVar3[1];
        auStack_300[iVar1 + param_3 * -3 + 1] = *puVar3;
        iVar4 = iVar4 + -1;
        auStack_300[iVar1 + param_3 * -3 + 2] = puVar3[-1];
        iVar1 = iVar1 + 3;
        puVar3 = puVar3 + 4;
      } while (iVar4 != 0);
    }
    uVar2 = (**(code **)(*(int *)param_1[1] + 0x14))(auStack_300,param_3,param_4);
    return uVar2;
  }
  return 3;
}

