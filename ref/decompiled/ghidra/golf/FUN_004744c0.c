/* Ghidra decompiled: golf.exe */
/* Function: FUN_004744c0 @ 0x004744C0 */


int __thiscall FUN_004744c0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 4) == 0) {
    return param_1;
  }
  FUN_00473ae0();
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + 4;
  }
  piVar2 = (int *)(**(code **)(*DAT_0083ad50 + 0x80))(iVar3,uVar1);
  *(int **)(param_1 + 4) = piVar2;
  (**(code **)(*piVar2 + 0x18))(0xff);
  (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(undefined4 *)(param_2 + 4));
  return param_1;
}

