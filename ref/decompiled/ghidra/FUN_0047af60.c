/* Ghidra decompiled: golf.exe */
/* Function: FUN_0047af60 @ 0x0047AF60 */
/* Body size: 277 addresses */


void __fastcall FUN_0047af60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[0x4c];
  if ((iVar2 != 0) && (1 < *(int *)(iVar2 + 0x140))) {
    if (*(int *)(iVar2 + 0x138) == 0) {
      DAT_0083ab98 = 0;
    }
    else {
      DAT_0083ab98 = *(int *)(*(int *)(iVar2 + 0x13c) + 4);
    }
    iVar2 = param_1[0x4c];
    iVar4 = 0;
    if (0 < *(int *)(iVar2 + 0x140)) {
      do {
        if (*(int *)(iVar2 + 0x138) != 0) {
          *(undefined4 *)(iVar2 + 0x13c) = *(undefined4 *)(*(int *)(iVar2 + 0x13c) + 0xc);
          iVar3 = *(int *)(iVar2 + 0x144) + 1;
          *(int *)(iVar2 + 0x144) = iVar3;
          if (iVar3 == *(int *)(iVar2 + 0x140)) {
            *(undefined4 *)(iVar2 + 0x144) = 0;
          }
        }
        iVar2 = FUN_004801f0();
        if (iVar2 != 0) break;
        iVar2 = param_1[0x4c];
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(iVar2 + 0x140));
    }
    if (*(int *)(param_1[0x4c] + 0x138) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1[0x4c] + 0x13c) + 4);
    }
    if (iVar2 != DAT_0083ab98) {
      (**(code **)(*param_1 + 0xf0))(0);
      if ((*(int *)(param_1[0x4c] + 0x138) != 0) &&
         (piVar1 = *(int **)(*(int *)(param_1[0x4c] + 0x13c) + 4), piVar1 != (int *)0x0)) {
        (**(code **)(*piVar1 + 0xf0))(1);
      }
    }
  }
  return;
}

