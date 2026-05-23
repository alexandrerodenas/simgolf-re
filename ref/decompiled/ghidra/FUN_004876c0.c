/* Ghidra decompiled: golf.exe */
/* Function: FUN_004876c0 @ 0x004876C0 */
/* Body size: 162 addresses */


undefined4 __thiscall FUN_004876c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_2 != 0) && (uVar2 = *(uint *)(param_2 + 0x3c), uVar2 < 0x10)) {
    piVar5 = *(int **)(param_1 + 0x30 + uVar2 * 0x1c);
    iVar1 = param_1 + 0x2c + uVar2 * 0x1c;
    if (piVar5 != (int *)0x0) {
      while (piVar5[2] != param_2) {
        piVar5 = (int *)piVar5[1];
        if (piVar5 == (int *)0x0) {
          *(undefined4 *)(param_2 + 0x3c) = 0x10;
          return 0;
        }
      }
      if (piVar5 != (int *)0x0) {
        if (*piVar5 == 0) {
          *(int *)(iVar1 + 4) = piVar5[1];
        }
        else {
          *(int *)(*piVar5 + 4) = piVar5[1];
        }
        piVar3 = (int *)piVar5[1];
        if (piVar3 == (int *)0x0) {
          iVar4 = *piVar5;
          *(undefined4 *)(iVar1 + 0xc) = 0;
          *(int *)(iVar1 + 8) = iVar4;
        }
        else {
          *piVar3 = *piVar5;
          *(int **)(iVar1 + 0xc) = piVar3;
        }
        FUN_004a4ffc(piVar5);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
      }
    }
    *(undefined4 *)(param_2 + 0x3c) = 0x10;
    return 0;
  }
  return 10;
}

