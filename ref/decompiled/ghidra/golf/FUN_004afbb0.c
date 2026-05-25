/* Ghidra decompiled: golf.exe */
/* Function: FUN_004afbb0 @ 0x004AFBB0 */


void FUN_004afbb0(int *param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[5];
  *(undefined1 *)*piVar1 = param_2;
  iVar2 = piVar1[1];
  *piVar1 = *piVar1 + 1;
  piVar1[1] = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    iVar2 = (*(code *)piVar1[3])(param_1);
    if (iVar2 == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x16;
      (**(code **)*param_1)(param_1);
    }
  }
  return;
}

