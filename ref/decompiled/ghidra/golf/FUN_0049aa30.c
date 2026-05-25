/* Ghidra decompiled: golf.exe */
/* Function: FUN_0049aa30 @ 0x0049AA30 */


int __thiscall FUN_0049aa30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x170);
  do {
    if (*piVar2 == param_2) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x16;
  } while (iVar1 < 0x10);
  if (iVar1 == 0x10) {
    return 0;
  }
  return param_1 + 0x185 + iVar1 * 0x58;
}

