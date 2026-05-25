/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4350 @ 0x004A4350 */


void __thiscall FUN_004a4350(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00492a90(param_2,param_3,&param_3,0);
  if (iVar3 != -1) {
    if (*(code **)(param_1 + -0x24) != (code *)0x0) {
      (**(code **)(param_1 + -0x24))(param_3);
    }
    piVar1 = (int *)(param_1 + -0xe0);
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + -0xe0) + 8) + 0x10 + param_1);
    uVar4 = FUN_004a4890(param_3);
    *(undefined4 *)(*(int *)(*piVar1 + 8) + 0x10 + param_1) = uVar4;
    FUN_004a3f10(uVar2);
    FUN_004a3f10(*(undefined4 *)(*(int *)(*piVar1 + 8) + 0x10 + param_1));
    (**(code **)(*(int *)(*(int *)(*piVar1 + 4) + -0xe0 + param_1) + 0x124))();
  }
  return;
}

