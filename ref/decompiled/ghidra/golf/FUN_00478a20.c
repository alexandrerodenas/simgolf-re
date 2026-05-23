/* Ghidra decompiled: golf.exe */
/* Function: FUN_00478a20 @ 0x00478A20 */
/* Body size: 67 addresses */


void __fastcall FUN_00478a20(int param_1)

{
  int *piVar1;
  int iVar2;
  
  FUN_00492920(0x50);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  piVar1 = (int *)(param_1 + 0x1b4);
  iVar2 = 0x28;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1[-0x28] = -2;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

