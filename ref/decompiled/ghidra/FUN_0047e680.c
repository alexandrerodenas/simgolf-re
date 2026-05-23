/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e680 @ 0x0047E680 */
/* Body size: 121 addresses */


void __thiscall FUN_0047e680(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *(int *)(param_1 + 0x22c);
    iVar3 = 0;
    if (0 < iVar1) {
      piVar2 = *(int **)(param_1 + 0x224);
      do {
        if ((int *)*piVar2 == param_2) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < iVar1);
    }
    if (iVar3 < iVar1) {
      *(int *)(param_1 + 0x22c) = iVar1 + -1;
      (**(code **)(*param_2 + 8))();
      if (iVar3 < *(int *)(param_1 + 0x22c)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x224) + -4 + iVar3 * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x224) + iVar3 * 4);
        } while (iVar3 < *(int *)(param_1 + 0x22c));
      }
    }
    if (*(int *)(param_1 + 0x22c) <= *(int *)(param_1 + 0x228) + -10) {
      FUN_00479bb0();
    }
  }
  return;
}

