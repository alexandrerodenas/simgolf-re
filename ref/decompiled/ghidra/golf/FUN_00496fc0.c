/* Ghidra decompiled: golf.exe */
/* Function: FUN_00496fc0 @ 0x00496FC0 */


void __fastcall FUN_00496fc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (DAT_0083ad50 != (int *)0x0) {
    (**(code **)(*DAT_0083ad50 + 0x9c))(1,1,1);
  }
  (**(code **)(*(int *)(param_1 + 0x60c) + 0x120))();
  (**(code **)(*(int *)(param_1 + 0xcdc) + 0x120))();
  FUN_004808c0(*(undefined4 *)(param_1 + 0x5c4));
  if (*(int *)(param_1 + 0x57c) != -1) {
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd4))();
    }
    FUN_004795d0(uVar1,*(undefined1 *)(param_1 + 0x57c),*(undefined1 *)(param_1 + 0x57c));
  }
  FUN_004974d0(&iStack_10);
  FUN_00480a10(&iStack_10,*(undefined4 *)(param_1 + 0x5c4));
  if (*(int *)(param_1 + 0x5d8) != 0) {
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x278) + 0xdc))();
    }
    if (*(int **)(param_1 + 0x278) == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(int **)(param_1 + 0x278) + 0xd8))();
    }
    FUN_00476140(*(undefined4 *)(param_1 + 0x5d8),0,0,0,0,uVar2,uVar1);
  }
  iVar4 = *(int *)(param_1 + 0x5d4);
  if (iVar4 != 0) {
    if (param_1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + 0x274;
    }
    FUN_00473e60(iVar3,((iStack_8 - *(int *)(iVar4 + 0x18)) - iStack_10) / 2 + iStack_10,
                 ((iStack_4 - *(int *)(iVar4 + 0x1c)) - iStack_c) / 2 + iStack_c,0);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x5c8)) {
    do {
      FUN_004795d0(&iStack_10,*(undefined4 *)(param_1 + 0x5cc),*(undefined4 *)(param_1 + 0x5d0));
      iStack_10 = iStack_10 + 1;
      iStack_8 = iStack_8 + -1;
      iStack_c = iStack_c + 1;
      iStack_4 = iStack_4 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x5c8));
  }
  return;
}

