/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047e700 @ 0x0047E700 */
/* Body size: 98 addresses */


void __thiscall FUN_0047e700(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0x9c) & 0x2000000) == 0)) {
    iVar1 = *(int *)(param_1 + 0x22c);
    iVar2 = 0;
    if (0 < iVar1) {
      piVar3 = *(int **)(param_1 + 0x224);
      do {
        if (*piVar3 == param_2) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
    if (iVar2 < iVar1) {
      for (; 0 < iVar2; iVar2 = iVar2 + -1) {
        *(undefined4 *)(*(int *)(param_1 + 0x224) + iVar2 * 4) =
             *(undefined4 *)(*(int *)(param_1 + 0x224) + -4 + iVar2 * 4);
      }
      **(int **)(param_1 + 0x224) = param_2;
    }
    FUN_0047e450();
  }
  return;
}

