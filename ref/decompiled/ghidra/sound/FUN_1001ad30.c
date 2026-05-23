/* Ghidra decompiled: sound.dll */
/* Function: FUN_1001ad30 @ 0x1001AD30 */
/* Body size: 111 addresses */


undefined4 __fastcall FUN_1001ad30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(param_1 + 4 + iVar2 * 4);
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x1438);
      if ((iVar4 != 0) && (iVar3 = 0, iVar4 != 1 && -1 < iVar4 + -1)) {
        iVar4 = 0x1440;
        do {
          if (*(int **)(iVar4 + iVar1) != (int *)0x0) {
            iVar1 = (**(code **)(**(int **)(iVar4 + iVar1) + 0x5c))();
            if (iVar1 != 0) goto LAB_1001ad98;
          }
          iVar1 = *(int *)(param_1 + 4 + iVar2 * 4);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < *(int *)(iVar1 + 0x1438) + -1);
      }
      iVar1 = (**(code **)(**(int **)(param_1 + 4 + iVar2 * 4) + 0x5c))();
      if (iVar1 != 0) {
LAB_1001ad98:
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
    }
    iVar2 = iVar2 + 1;
    if (0x7f < iVar2) {
      return 0;
    }
  } while( true );
}

