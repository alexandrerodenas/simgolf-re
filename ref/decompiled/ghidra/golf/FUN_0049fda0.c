/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049fda0 @ 0x0049FDA0 */


void __thiscall FUN_0049fda0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + -0x1c) + 8);
  iVar2 = *(int *)(iVar3 + 0x2c + param_1);
  iVar1 = iVar3 + param_1;
  iVar3 = (param_2 / (*(int *)(iVar3 + 0x4c + param_1) + iVar2)) * *(int *)(iVar1 + 0x40) +
          param_3 / (*(int *)(iVar1 + 0x50) + iVar2);
  if ((1 << ((byte)iVar3 & 0x1f) & *(uint *)(iVar1 + 0xd4)) == 0) {
    *(int *)(iVar1 + 0xd8) = iVar3;
  }
  else {
    if (*(int *)(iVar1 + 0xd8) == -1) {
      return;
    }
    *(undefined4 *)(iVar1 + 0xd8) = 0xffffffff;
  }
  (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + -0x1c) + 4) + -0x1c + param_1) + 0x120))();
  return;
}

