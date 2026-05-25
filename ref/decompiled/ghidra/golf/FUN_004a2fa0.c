/* Ghidra decompiled: golf.exe */
/* Function: FUN_004a2fa0 @ 0x004A2FA0 */


void __thiscall FUN_004a2fa0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    piVar1 = (int *)(param_1 + -0x88);
    iVar2 = 10;
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0xf0))(0);
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else if (*(int **)(param_1 + -0x88) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + -0x88) + 0xf0))(param_2);
    return;
  }
  return;
}

