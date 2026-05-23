/* Ghidra decompiled: golf.exe */
/* Function: FUN_004b0320 @ 0x004B0320 */
/* Body size: 128 addresses */


void FUN_004b0320(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_004afbf0(param_1,0xd8);
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x40);
  do {
    if (*piVar1 != 0) {
      FUN_004afec0(param_1,iVar2);
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 4);
  if (*(int *)(param_1 + 0xac) == 0) {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x60);
    do {
      if (piVar1[-4] != 0) {
        FUN_004b0120(param_1,iVar2,0);
      }
      if (*piVar1 != 0) {
        FUN_004b0120(param_1,iVar2,1);
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar2 < 4);
  }
  FUN_004afbf0(param_1,0xd9);
  return;
}

