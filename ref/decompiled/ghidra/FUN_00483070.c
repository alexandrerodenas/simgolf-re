/* Ghidra decompiled: golf.exe */
/* Function: FUN_00483070 @ 0x00483070 */
/* Body size: 100 addresses */


void __fastcall FUN_00483070(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (DAT_0083ad50 != (int *)0x0)) {
    (**(code **)(*DAT_0083ad50 + 0x90))(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  piVar1 = (int *)(param_1 + 0xc);
  iVar2 = 5;
  do {
    piVar1[-1] = -1;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)(1);
      *piVar1 = 0;
    }
    if (piVar1[2] != 0) {
      FUN_004a5007(piVar1[2]);
      piVar1[2] = 0;
    }
    *(undefined1 *)(piVar1 + 1) = 0;
    *(undefined1 *)((int)piVar1 + 5) = 0;
    piVar1 = piVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

