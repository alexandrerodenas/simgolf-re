/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a4ad0 @ 0x004A4AD0 */


int __thiscall FUN_004a4ad0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x580);
  while( true ) {
    if (*piVar2 == -1) {
      return -1;
    }
    if (*piVar2 == param_2) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
    if (0xff < iVar1) {
      return -1;
    }
  }
  return iVar1;
}

