/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047cb10 @ 0x0047CB10 */


void __thiscall FUN_0047cb10(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_3 == (int *)0x0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x9c) & 4) != 0) {
    *param_3 = *param_3 - DAT_0083ff10;
  }
  if ((*(byte *)(param_1 + 0x9c) & 8) != 0) {
    *param_2 = *param_2 - DAT_0083ff10;
  }
  if ((*(uint *)(param_1 + 0x9c) & 0x400) == 0) {
    if ((*(uint *)(param_1 + 0x9c) & 0x11) == 0) goto LAB_0047cbcc;
    *param_2 = *param_2 + *(int *)(param_1 + 0x184) * -2;
    iVar2 = *param_3 + *(int *)(param_1 + 0x184) * -2;
    *param_3 = iVar2;
    iVar1 = *(int *)(param_1 + 0x188);
  }
  else {
    *param_2 = *param_2 + *(int *)(param_1 + 0x184) * -2;
    iVar2 = *param_3 + *(int *)(param_1 + 0x184) * -2;
    *param_3 = iVar2;
    iVar1 = *(int *)(param_1 + 0x188);
  }
  if (iVar1 != -1) {
    *param_3 = (*(int *)(param_1 + 0x184) - iVar1) + iVar2;
  }
LAB_0047cbcc:
  if ((*(byte *)(param_1 + 0x9c) & 0x10) != 0) {
    *param_3 = *param_3 + (*(int *)(param_1 + 0x184) - *(int *)(param_1 + 0x180));
  }
  if ((*(int **)(param_1 + 0x15c) != (int *)0x0) && ((*(uint *)(param_1 + 0x9c) & 0x20000000) == 0))
  {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x15c) + 0x170))();
    *param_3 = *param_3 - iVar1;
  }
  return;
}

