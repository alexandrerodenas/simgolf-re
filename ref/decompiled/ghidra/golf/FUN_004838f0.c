/* Ghidra decompiled: golf.exe */
/* Function: FUN_004838f0 @ 0x004838F0 */


undefined4 __thiscall FUN_004838f0(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((*(int **)(param_1 + 4) == (int *)0x0) || (param_2 == (char *)0x0)) {
    return 0;
  }
  uVar3 = 0xffffffff;
  pcVar4 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x10))(param_2,~uVar3 - 1);
  return uVar2;
}

