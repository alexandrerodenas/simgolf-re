/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047cc10 @ 0x0047CC10 */
/* Body size: 205 addresses */


void __thiscall FUN_0047cc10(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (int *)0x0) {
    if ((*(byte *)(param_1 + 0x9c) & 4) != 0) {
      param_2[3] = param_2[3] + DAT_0083ff10;
    }
    if ((*(byte *)(param_1 + 0x9c) & 8) != 0) {
      param_2[2] = param_2[2] + DAT_0083ff10;
    }
    if (((*(uint *)(param_1 + 0x9c) & 0x400) != 0) || ((*(uint *)(param_1 + 0x9c) & 0x11) != 0)) {
      iVar2 = *(int *)(param_1 + 0x184);
      *param_2 = *param_2 - iVar2;
      param_2[2] = param_2[2] + iVar2;
      param_2[1] = param_2[1] - iVar2;
      iVar1 = param_2[3];
      param_2[3] = iVar1 + iVar2;
      if (*(int *)(param_1 + 0x188) != -1) {
        param_2[3] = (*(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x184)) + iVar1 + iVar2;
      }
    }
    if ((*(byte *)(param_1 + 0x9c) & 0x10) != 0) {
      param_2[1] = param_2[1] + (*(int *)(param_1 + 0x184) - *(int *)(param_1 + 0x180));
    }
    if ((*(int **)(param_1 + 0x15c) != (int *)0x0) &&
       ((*(uint *)(param_1 + 0x9c) & 0x20000000) == 0)) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x15c) + 0x170))();
      param_2[1] = param_2[1] - iVar2;
    }
  }
  return;
}

