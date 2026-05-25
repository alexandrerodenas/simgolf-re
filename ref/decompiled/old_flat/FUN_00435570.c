/* Ghidra decompiled: golf.exe */
/* Function: FUN_00435570 @ 0x00435570 */


int FUN_00435570(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = -1;
  if ((0x135 < param_1) && (0x1f1 < param_2)) {
    iVar3 = FUN_00467130((param_2 + -0x1f2) / 0x15,0,3);
    iVar1 = FUN_00467130((param_1 + -0x136) / 0x79,0,3);
    iVar3 = iVar3 + iVar1 * 4;
  }
  iVar1 = FUN_00467170(param_1 + -0x11d,param_2 + -0x1ec);
  if (iVar1 < 0x14) {
    iVar3 = -2;
  }
  iVar1 = FUN_00467170(param_1 + -0x100,param_2 + -0x1fe);
  if (iVar1 < 0x14) {
    iVar3 = -3;
  }
  iVar1 = FUN_00467170(param_1 + -0xe8,param_2 + -0x21a);
  if (iVar1 < 0x14) {
    iVar3 = -4;
  }
  iVar1 = param_2 * 3 + -0x6f0;
  iVar2 = FUN_00467170(param_1 + -0x14c,iVar1);
  if (iVar2 < 0x14) {
    iVar3 = -5;
  }
  iVar2 = FUN_00467170(param_1 + -0x304,iVar1);
  iVar1 = -6;
  if (0x13 < iVar2) {
    iVar1 = iVar3;
  }
  return iVar1;
}

