/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047bc60 @ 0x0047BC60 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0047bc60(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  _DAT_0083ab2c = param_1;
  if ((*(byte *)(param_1 + 0x27) & 0x40) == 0) {
    if (param_1[0x9b] != 0) {
      FUN_0047b420(param_1[0x6d] - param_1[0x6b],0);
      if (param_1[0x9c] == 0) {
        if (*(int **)(param_1[0x9b] + 0x278) == (int *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(**(int **)(param_1[0x9b] + 0x278) + 0xd8))();
        }
        iVar2 = param_1[0x6e] - param_1[0x6c];
        iVar4 = *(int *)param_1[0x9b];
      }
      else {
        piVar1 = *(int **)(param_1[0x9c] + 0x278);
        if (piVar1 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (**(code **)(*piVar1 + 0xdc))();
        }
        if (*(int **)(param_1[0x9b] + 0x278) == (int *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(**(int **)(param_1[0x9b] + 0x278) + 0xd8))();
        }
        iVar2 = (param_1[0x6e] - param_1[0x6c]) - iVar2;
        iVar4 = *(int *)param_1[0x9b];
      }
      (**(code **)(iVar4 + 0xc))(uVar3,iVar2,0,0);
    }
    if (param_1[0x9c] != 0) {
      FUN_0047b420(0,param_1[0x6e] - param_1[0x6c]);
      if (param_1[0x9b] == 0) {
        piVar1 = *(int **)(param_1[0x9c] + 0x278);
        if (piVar1 == (int *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*piVar1 + 0xdc))();
        }
        iVar4 = *(int *)param_1[0x9c];
        iVar2 = param_1[0x6d] - param_1[0x6b];
      }
      else {
        piVar1 = *(int **)(param_1[0x9c] + 0x278);
        if (piVar1 == (int *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (**(code **)(*piVar1 + 0xdc))();
        }
        if (*(int **)(param_1[0x9b] + 0x278) == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (**(code **)(**(int **)(param_1[0x9b] + 0x278) + 0xd8))();
        }
        iVar4 = *(int *)param_1[0x9c];
        iVar2 = (param_1[0x6d] - param_1[0x6b]) - iVar2;
      }
      (**(code **)(iVar4 + 0xc))(iVar2,uVar3,0,0);
    }
  }
  if ((code *)param_1[0x8c] != (code *)0x0) {
    (*(code *)param_1[0x8c])(param_2,param_3);
  }
  (**(code **)(*param_1 + 0x5c))(param_2,param_3);
  FUN_0047d570();
  return;
}

