/* Ghidra decompiled: golf.exe */
/* Function: FUN_00492cc0 @ 0x00492CC0 */


void __thiscall FUN_00492cc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xc) = param_4;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = (int *)(*(int *)(param_1 + 0x50) + 0x14);
    do {
      if ((piVar3[1] == param_2) && (*piVar3 == param_3)) break;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 8;
    } while (iVar2 < iVar1);
  }
  if (iVar2 != iVar1) {
    if (*(int *)(iVar2 * 0x20 + 0x1c + *(int *)(param_1 + 0x50)) != 0) {
      FUN_00486d20(&LAB_00492bb0,iVar2,param_1,*(undefined4 *)(param_1 + 0x5c),5);
      FUN_00486e40();
    }
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_3;
  }
  return;
}

