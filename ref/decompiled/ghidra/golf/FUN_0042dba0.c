/* Ghidra decompiled: golf.exe */
/* Function: FUN_0042dba0 @ 0x0042DBA0 */
/* Body size: 88 addresses */


void FUN_0042dba0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004674c0(param_1 >> 2,param_2 >> 2);
  iVar2 = FUN_004674c0((param_1 >> 2) * 2,(param_2 >> 2) * 2);
  iVar1 = (iVar1 * 6 + iVar2 * 4) * 7;
  iVar1 = iVar1 + (iVar1 >> 0x1f & 0x3fU);
  FUN_00467130((iVar1 >> 6) - (iVar1 >> 0x1f) >> 1,0,0x200);
  return;
}

