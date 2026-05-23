/* Ghidra decompiled: golf.exe */
/* Function: FUN_004833f0 @ 0x004833F0 */
/* Body size: 34 addresses */


void __thiscall FUN_004833f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 8);
  while( true ) {
    if (param_2 == *piVar2) {
      return;
    }
    if (*piVar2 == -1) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
    if (4 < iVar1) {
      return;
    }
  }
  return;
}

