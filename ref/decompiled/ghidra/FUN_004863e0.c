/* Ghidra decompiled: golf.exe */
/* Function: FUN_004863e0 @ 0x004863E0 */
/* Body size: 259 addresses */


int __thiscall FUN_004863e0(int param_1,int param_2,int param_3,undefined1 *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_80 [128];
  
  iVar3 = *(int *)(param_1 + 0x59c) + *(int *)(param_1 + 0x598);
  param_2 = param_2 - iVar3;
  if (*(int **)(param_1 + 0x278) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
  }
  iVar2 = iVar2 + iVar3 * -2 + -1;
  if (*(int **)(param_1 + 0x278) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
  }
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if (param_4 == (undefined1 *)0x0) {
    param_4 = auStack_80;
    FUN_004862b0(auStack_80,&param_5);
  }
  iVar2 = FUN_00477580();
  iVar3 = (param_3 - iVar3) / iVar2 + *(int *)(param_1 + 0x57c);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (param_5 <= iVar3) {
    iVar3 = param_5 + -1;
  }
  uVar1 = *(uint *)(param_4 + iVar3 * 4 + 4);
  for (uVar4 = *(uint *)(param_4 + iVar3 * 4); (0 < param_2 && (uVar4 < uVar1)); uVar4 = uVar4 + 1)
  {
    iVar3 = FUN_00477280(uVar4,1);
    param_2 = param_2 - iVar3;
  }
  return uVar4 - *(int *)(param_1 + 0x574);
}

