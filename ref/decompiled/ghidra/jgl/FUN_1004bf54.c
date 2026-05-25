/* Ghidra decompiled: jgl.dll */
/* Function: FUN_1004bf54 @ 0x1004BF54 */


int FUN_1004bf54(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    iVar3 = FUN_1004815c();
    return iVar3;
  }
  if ((DAT_10057f80 != (FARPROC)0x0) &&
     (bVar2 = FUN_1004bff0(DAT_10057f80), CONCAT31(extraout_var,bVar2) != 0)) {
    iVar3 = (*DAT_10057f80)(param_1);
    return iVar3;
  }
  return 0;
}

