/* Ghidra decompiled: golf.exe */
/* Function: FUN_004862b0 @ 0x004862B0 */


void __thiscall FUN_004862b0(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  
  *param_3 = 1;
  *param_2 = *(undefined4 *)(param_1 + 0x574);
  iVar2 = *(int *)(param_1 + 0x59c);
  iVar3 = *(int *)(param_1 + 0x598);
  if (*(int **)(param_1 + 0x278) == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
  }
  FUN_00476e20(*(undefined4 *)(param_1 + 0x574),iVar4 + (iVar2 + iVar3) * -2,param_2,param_3);
  uVar5 = 0xffffffff;
  pcVar6 = *(char **)(param_1 + 0x574);
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  param_2[*param_3] = *(char **)(param_1 + 0x574) + (~uVar5 - 1);
  return;
}

