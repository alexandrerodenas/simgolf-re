/* Ghidra decompiled: golf.exe */
/* Function: FUN_004abe74 @ 0x004ABE74 */


undefined4 FUN_004abe74(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_004a8eba();
    return uVar2;
  }
  if ((DAT_00840c6c != (code *)0x0) && (iVar3 = FUN_004abf10(DAT_00840c6c), iVar3 != 0)) {
    uVar2 = (*DAT_00840c6c)(param_1);
    return uVar2;
  }
  return 0;
}

