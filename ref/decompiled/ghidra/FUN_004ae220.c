/* Ghidra decompiled: golf.exe */
/* Function: FUN_004ae220 @ 0x004AE220 */
/* Body size: 78 addresses */


void FUN_004ae220(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x40);
  iVar2 = 4;
  do {
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x80) = param_2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar1 = (int *)(param_1 + 0x60);
  iVar2 = 4;
  do {
    if (piVar1[-4] != 0) {
      *(undefined4 *)(piVar1[-4] + 0x114) = param_2;
    }
    if (*piVar1 != 0) {
      *(undefined4 *)(*piVar1 + 0x114) = param_2;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

